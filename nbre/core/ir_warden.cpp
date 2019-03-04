// Copyright (C) 2017 go-nebulas authors
//
// This file is part of the go-nebulas library.
//
// the go-nebulas library is free software: you can redistribute it and/or
// modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// the go-nebulas library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with the go-nebulas library.  If not, see
// <http://www.gnu.org/licenses/>.
//

#include "core/ir_warden.h"
#include "common/timer_loop.h"
#include "core/command.h"
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

namespace neb {
namespace core {

const command_type_t exit_command::command_type;
ir_warden::~ir_warden() {}

std::unique_ptr<nbre::NBREIR>
ir_warden::get_ir_by_name_version(const std::string &name, uint64_t version) {
  return m_ir_manager->read_ir(name, version);
}

std::unique_ptr<std::vector<nbre::NBREIR>>
ir_warden::get_ir_by_name_height(const std::string &name, uint64_t height,
                                 bool depends) {
  return m_ir_manager->read_irs(name, height, depends);
}

bool ir_warden::is_sync_already() const {
  std::unique_lock<std::mutex> _l(m_sync_mutex);
  return m_is_sync_already;
}

void ir_warden::wait_until_sync() {
  LOG(INFO) << "wait until sync ...";
  std::unique_lock<std::mutex> _l(m_sync_mutex);
  if (m_is_sync_already) {
    return;
  }
  m_sync_cond_var.wait(_l);
  LOG(INFO) << "wait until sync done";
}

void ir_warden::on_timer() {
  std::unique_lock<std::mutex> _l(m_sync_mutex);
  m_ir_manager->parse_irs(m_queue);
  if (!m_is_sync_already) {
    m_is_sync_already = true;
    _l.unlock();
    m_sync_cond_var.notify_one();
  }
}

void ir_warden::on_receive_ir_transactions(
    block_height_t height, const std::vector<std::string> &ir_txs) {
  std::unique_lock<std::mutex> _l(m_sync_mutex);
  for (auto &tx : ir_txs) {
    m_queue.push(std::make_pair(height, tx));
  }
}

ir_warden::ir_warden() : m_is_sync_already(false) {
  m_ir_manager = std::make_unique<fs::ir_manager>();
}
}
} // namespace neb
