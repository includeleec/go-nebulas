// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ir.proto

#ifndef PROTOBUF_INCLUDED_ir_2eproto
#define PROTOBUF_INCLUDED_ir_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ir_2eproto 

namespace protobuf_ir_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ir_2eproto
namespace nbre {
class NBREIR;
class NBREIRDefaultTypeInternal;
extern NBREIRDefaultTypeInternal _NBREIR_default_instance_;
class NBREIRDepend;
class NBREIRDependDefaultTypeInternal;
extern NBREIRDependDefaultTypeInternal _NBREIRDepend_default_instance_;
}  // namespace nbre
namespace google {
namespace protobuf {
template<> ::nbre::NBREIR* Arena::CreateMaybeMessage<::nbre::NBREIR>(Arena*);
template<> ::nbre::NBREIRDepend* Arena::CreateMaybeMessage<::nbre::NBREIRDepend>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace nbre {

// ===================================================================

class NBREIRDepend : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:nbre.NBREIRDepend) */ {
 public:
  NBREIRDepend();
  virtual ~NBREIRDepend();

  NBREIRDepend(const NBREIRDepend& from);

  inline NBREIRDepend& operator=(const NBREIRDepend& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NBREIRDepend(NBREIRDepend&& from) noexcept
    : NBREIRDepend() {
    *this = ::std::move(from);
  }

  inline NBREIRDepend& operator=(NBREIRDepend&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NBREIRDepend& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NBREIRDepend* internal_default_instance() {
    return reinterpret_cast<const NBREIRDepend*>(
               &_NBREIRDepend_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(NBREIRDepend* other);
  friend void swap(NBREIRDepend& a, NBREIRDepend& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NBREIRDepend* New() const final {
    return CreateMaybeMessage<NBREIRDepend>(NULL);
  }

  NBREIRDepend* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NBREIRDepend>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NBREIRDepend& from);
  void MergeFrom(const NBREIRDepend& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NBREIRDepend* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // uint64 version = 2;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  ::google::protobuf::uint64 version() const;
  void set_version(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:nbre.NBREIRDepend)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::uint64 version_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ir_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class NBREIR : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:nbre.NBREIR) */ {
 public:
  NBREIR();
  virtual ~NBREIR();

  NBREIR(const NBREIR& from);

  inline NBREIR& operator=(const NBREIR& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NBREIR(NBREIR&& from) noexcept
    : NBREIR() {
    *this = ::std::move(from);
  }

  inline NBREIR& operator=(NBREIR&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NBREIR& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NBREIR* internal_default_instance() {
    return reinterpret_cast<const NBREIR*>(
               &_NBREIR_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(NBREIR* other);
  friend void swap(NBREIR& a, NBREIR& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NBREIR* New() const final {
    return CreateMaybeMessage<NBREIR>(NULL);
  }

  NBREIR* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NBREIR>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NBREIR& from);
  void MergeFrom(const NBREIR& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NBREIR* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .nbre.NBREIRDepend depends = 4;
  int depends_size() const;
  void clear_depends();
  static const int kDependsFieldNumber = 4;
  ::nbre::NBREIRDepend* mutable_depends(int index);
  ::google::protobuf::RepeatedPtrField< ::nbre::NBREIRDepend >*
      mutable_depends();
  const ::nbre::NBREIRDepend& depends(int index) const;
  ::nbre::NBREIRDepend* add_depends();
  const ::google::protobuf::RepeatedPtrField< ::nbre::NBREIRDepend >&
      depends() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // bytes ir = 5;
  void clear_ir();
  static const int kIrFieldNumber = 5;
  const ::std::string& ir() const;
  void set_ir(const ::std::string& value);
  #if LANG_CXX11
  void set_ir(::std::string&& value);
  #endif
  void set_ir(const char* value);
  void set_ir(const void* value, size_t size);
  ::std::string* mutable_ir();
  ::std::string* release_ir();
  void set_allocated_ir(::std::string* ir);

  // string ir_type = 6;
  void clear_ir_type();
  static const int kIrTypeFieldNumber = 6;
  const ::std::string& ir_type() const;
  void set_ir_type(const ::std::string& value);
  #if LANG_CXX11
  void set_ir_type(::std::string&& value);
  #endif
  void set_ir_type(const char* value);
  void set_ir_type(const char* value, size_t size);
  ::std::string* mutable_ir_type();
  ::std::string* release_ir_type();
  void set_allocated_ir_type(::std::string* ir_type);

  // uint64 version = 2;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  ::google::protobuf::uint64 version() const;
  void set_version(::google::protobuf::uint64 value);

  // uint64 height = 3;
  void clear_height();
  static const int kHeightFieldNumber = 3;
  ::google::protobuf::uint64 height() const;
  void set_height(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:nbre.NBREIR)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::nbre::NBREIRDepend > depends_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr ir_;
  ::google::protobuf::internal::ArenaStringPtr ir_type_;
  ::google::protobuf::uint64 version_;
  ::google::protobuf::uint64 height_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ir_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NBREIRDepend

// string name = 1;
inline void NBREIRDepend::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NBREIRDepend::name() const {
  // @@protoc_insertion_point(field_get:nbre.NBREIRDepend.name)
  return name_.GetNoArena();
}
inline void NBREIRDepend::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:nbre.NBREIRDepend.name)
}
#if LANG_CXX11
inline void NBREIRDepend::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:nbre.NBREIRDepend.name)
}
#endif
inline void NBREIRDepend::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:nbre.NBREIRDepend.name)
}
inline void NBREIRDepend::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:nbre.NBREIRDepend.name)
}
inline ::std::string* NBREIRDepend::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:nbre.NBREIRDepend.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NBREIRDepend::release_name() {
  // @@protoc_insertion_point(field_release:nbre.NBREIRDepend.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NBREIRDepend::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:nbre.NBREIRDepend.name)
}

// uint64 version = 2;
inline void NBREIRDepend::clear_version() {
  version_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 NBREIRDepend::version() const {
  // @@protoc_insertion_point(field_get:nbre.NBREIRDepend.version)
  return version_;
}
inline void NBREIRDepend::set_version(::google::protobuf::uint64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:nbre.NBREIRDepend.version)
}

// -------------------------------------------------------------------

// NBREIR

// string name = 1;
inline void NBREIR::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NBREIR::name() const {
  // @@protoc_insertion_point(field_get:nbre.NBREIR.name)
  return name_.GetNoArena();
}
inline void NBREIR::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:nbre.NBREIR.name)
}
#if LANG_CXX11
inline void NBREIR::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:nbre.NBREIR.name)
}
#endif
inline void NBREIR::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:nbre.NBREIR.name)
}
inline void NBREIR::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:nbre.NBREIR.name)
}
inline ::std::string* NBREIR::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:nbre.NBREIR.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NBREIR::release_name() {
  // @@protoc_insertion_point(field_release:nbre.NBREIR.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NBREIR::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:nbre.NBREIR.name)
}

// uint64 version = 2;
inline void NBREIR::clear_version() {
  version_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 NBREIR::version() const {
  // @@protoc_insertion_point(field_get:nbre.NBREIR.version)
  return version_;
}
inline void NBREIR::set_version(::google::protobuf::uint64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:nbre.NBREIR.version)
}

// uint64 height = 3;
inline void NBREIR::clear_height() {
  height_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 NBREIR::height() const {
  // @@protoc_insertion_point(field_get:nbre.NBREIR.height)
  return height_;
}
inline void NBREIR::set_height(::google::protobuf::uint64 value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:nbre.NBREIR.height)
}

// repeated .nbre.NBREIRDepend depends = 4;
inline int NBREIR::depends_size() const {
  return depends_.size();
}
inline void NBREIR::clear_depends() {
  depends_.Clear();
}
inline ::nbre::NBREIRDepend* NBREIR::mutable_depends(int index) {
  // @@protoc_insertion_point(field_mutable:nbre.NBREIR.depends)
  return depends_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::nbre::NBREIRDepend >*
NBREIR::mutable_depends() {
  // @@protoc_insertion_point(field_mutable_list:nbre.NBREIR.depends)
  return &depends_;
}
inline const ::nbre::NBREIRDepend& NBREIR::depends(int index) const {
  // @@protoc_insertion_point(field_get:nbre.NBREIR.depends)
  return depends_.Get(index);
}
inline ::nbre::NBREIRDepend* NBREIR::add_depends() {
  // @@protoc_insertion_point(field_add:nbre.NBREIR.depends)
  return depends_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::nbre::NBREIRDepend >&
NBREIR::depends() const {
  // @@protoc_insertion_point(field_list:nbre.NBREIR.depends)
  return depends_;
}

// bytes ir = 5;
inline void NBREIR::clear_ir() {
  ir_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NBREIR::ir() const {
  // @@protoc_insertion_point(field_get:nbre.NBREIR.ir)
  return ir_.GetNoArena();
}
inline void NBREIR::set_ir(const ::std::string& value) {
  
  ir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:nbre.NBREIR.ir)
}
#if LANG_CXX11
inline void NBREIR::set_ir(::std::string&& value) {
  
  ir_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:nbre.NBREIR.ir)
}
#endif
inline void NBREIR::set_ir(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:nbre.NBREIR.ir)
}
inline void NBREIR::set_ir(const void* value, size_t size) {
  
  ir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:nbre.NBREIR.ir)
}
inline ::std::string* NBREIR::mutable_ir() {
  
  // @@protoc_insertion_point(field_mutable:nbre.NBREIR.ir)
  return ir_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NBREIR::release_ir() {
  // @@protoc_insertion_point(field_release:nbre.NBREIR.ir)
  
  return ir_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NBREIR::set_allocated_ir(::std::string* ir) {
  if (ir != NULL) {
    
  } else {
    
  }
  ir_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ir);
  // @@protoc_insertion_point(field_set_allocated:nbre.NBREIR.ir)
}

// string ir_type = 6;
inline void NBREIR::clear_ir_type() {
  ir_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NBREIR::ir_type() const {
  // @@protoc_insertion_point(field_get:nbre.NBREIR.ir_type)
  return ir_type_.GetNoArena();
}
inline void NBREIR::set_ir_type(const ::std::string& value) {
  
  ir_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:nbre.NBREIR.ir_type)
}
#if LANG_CXX11
inline void NBREIR::set_ir_type(::std::string&& value) {
  
  ir_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:nbre.NBREIR.ir_type)
}
#endif
inline void NBREIR::set_ir_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ir_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:nbre.NBREIR.ir_type)
}
inline void NBREIR::set_ir_type(const char* value, size_t size) {
  
  ir_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:nbre.NBREIR.ir_type)
}
inline ::std::string* NBREIR::mutable_ir_type() {
  
  // @@protoc_insertion_point(field_mutable:nbre.NBREIR.ir_type)
  return ir_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NBREIR::release_ir_type() {
  // @@protoc_insertion_point(field_release:nbre.NBREIR.ir_type)
  
  return ir_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NBREIR::set_allocated_ir_type(::std::string* ir_type) {
  if (ir_type != NULL) {
    
  } else {
    
  }
  ir_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ir_type);
  // @@protoc_insertion_point(field_set_allocated:nbre.NBREIR.ir_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace nbre

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ir_2eproto
