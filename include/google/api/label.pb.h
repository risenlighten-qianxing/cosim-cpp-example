// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/label.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2flabel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2flabel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2flabel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2flabel_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2flabel_2eproto;
namespace google {
namespace api {
class LabelDescriptor;
struct LabelDescriptorDefaultTypeInternal;
extern LabelDescriptorDefaultTypeInternal _LabelDescriptor_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::LabelDescriptor* Arena::CreateMaybeMessage<::google::api::LabelDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

enum LabelDescriptor_ValueType : int {
  LabelDescriptor_ValueType_STRING = 0,
  LabelDescriptor_ValueType_BOOL = 1,
  LabelDescriptor_ValueType_INT64 = 2,
  LabelDescriptor_ValueType_LabelDescriptor_ValueType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  LabelDescriptor_ValueType_LabelDescriptor_ValueType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool LabelDescriptor_ValueType_IsValid(int value);
constexpr LabelDescriptor_ValueType LabelDescriptor_ValueType_ValueType_MIN = LabelDescriptor_ValueType_STRING;
constexpr LabelDescriptor_ValueType LabelDescriptor_ValueType_ValueType_MAX = LabelDescriptor_ValueType_INT64;
constexpr int LabelDescriptor_ValueType_ValueType_ARRAYSIZE = LabelDescriptor_ValueType_ValueType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LabelDescriptor_ValueType_descriptor();
template<typename T>
inline const std::string& LabelDescriptor_ValueType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LabelDescriptor_ValueType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LabelDescriptor_ValueType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LabelDescriptor_ValueType_descriptor(), enum_t_value);
}
inline bool LabelDescriptor_ValueType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, LabelDescriptor_ValueType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LabelDescriptor_ValueType>(
    LabelDescriptor_ValueType_descriptor(), name, value);
}
// ===================================================================

class LabelDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.LabelDescriptor) */ {
 public:
  inline LabelDescriptor() : LabelDescriptor(nullptr) {}
  ~LabelDescriptor() override;
  explicit PROTOBUF_CONSTEXPR LabelDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LabelDescriptor(const LabelDescriptor& from);
  LabelDescriptor(LabelDescriptor&& from) noexcept
    : LabelDescriptor() {
    *this = ::std::move(from);
  }

  inline LabelDescriptor& operator=(const LabelDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline LabelDescriptor& operator=(LabelDescriptor&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const LabelDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const LabelDescriptor* internal_default_instance() {
    return reinterpret_cast<const LabelDescriptor*>(
               &_LabelDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LabelDescriptor& a, LabelDescriptor& b) {
    a.Swap(&b);
  }
  inline void Swap(LabelDescriptor* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LabelDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LabelDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LabelDescriptor>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LabelDescriptor& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const LabelDescriptor& from) {
    LabelDescriptor::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LabelDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.LabelDescriptor";
  }
  protected:
  explicit LabelDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef LabelDescriptor_ValueType ValueType;
  static constexpr ValueType STRING =
    LabelDescriptor_ValueType_STRING;
  static constexpr ValueType BOOL =
    LabelDescriptor_ValueType_BOOL;
  static constexpr ValueType INT64 =
    LabelDescriptor_ValueType_INT64;
  static inline bool ValueType_IsValid(int value) {
    return LabelDescriptor_ValueType_IsValid(value);
  }
  static constexpr ValueType ValueType_MIN =
    LabelDescriptor_ValueType_ValueType_MIN;
  static constexpr ValueType ValueType_MAX =
    LabelDescriptor_ValueType_ValueType_MAX;
  static constexpr int ValueType_ARRAYSIZE =
    LabelDescriptor_ValueType_ValueType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ValueType_descriptor() {
    return LabelDescriptor_ValueType_descriptor();
  }
  template<typename T>
  static inline const std::string& ValueType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ValueType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ValueType_Name.");
    return LabelDescriptor_ValueType_Name(enum_t_value);
  }
  static inline bool ValueType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      ValueType* value) {
    return LabelDescriptor_ValueType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
    kDescriptionFieldNumber = 3,
    kValueTypeFieldNumber = 2,
  };
  // string key = 1;
  void clear_key();
  const std::string& key() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_key(ArgT0&& arg0, ArgT... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // string description = 3;
  void clear_description();
  const std::string& description() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_description(ArgT0&& arg0, ArgT... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // .google.api.LabelDescriptor.ValueType value_type = 2;
  void clear_value_type();
  ::google::api::LabelDescriptor_ValueType value_type() const;
  void set_value_type(::google::api::LabelDescriptor_ValueType value);
  private:
  ::google::api::LabelDescriptor_ValueType _internal_value_type() const;
  void _internal_set_value_type(::google::api::LabelDescriptor_ValueType value);
  public:

  // @@protoc_insertion_point(class_scope:google.api.LabelDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
    int value_type_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fapi_2flabel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LabelDescriptor

// string key = 1;
inline void LabelDescriptor::clear_key() {
  _impl_.key_.ClearToEmpty();
}
inline const std::string& LabelDescriptor::key() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.key)
  return _internal_key();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void LabelDescriptor::set_key(ArgT0&& arg0, ArgT... args) {
 
 _impl_.key_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.key)
}
inline std::string* LabelDescriptor::mutable_key() {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:google.api.LabelDescriptor.key)
  return _s;
}
inline const std::string& LabelDescriptor::_internal_key() const {
  return _impl_.key_.Get();
}
inline void LabelDescriptor::_internal_set_key(const std::string& value) {
  
  _impl_.key_.Set(value, GetArenaForAllocation());
}
inline std::string* LabelDescriptor::_internal_mutable_key() {
  
  return _impl_.key_.Mutable(GetArenaForAllocation());
}
inline std::string* LabelDescriptor::release_key() {
  // @@protoc_insertion_point(field_release:google.api.LabelDescriptor.key)
  return _impl_.key_.Release();
}
inline void LabelDescriptor::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  _impl_.key_.SetAllocated(key, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.key_.IsDefault()) {
    _impl_.key_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.LabelDescriptor.key)
}

// .google.api.LabelDescriptor.ValueType value_type = 2;
inline void LabelDescriptor::clear_value_type() {
  _impl_.value_type_ = 0;
}
inline ::google::api::LabelDescriptor_ValueType LabelDescriptor::_internal_value_type() const {
  return static_cast< ::google::api::LabelDescriptor_ValueType >(_impl_.value_type_);
}
inline ::google::api::LabelDescriptor_ValueType LabelDescriptor::value_type() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.value_type)
  return _internal_value_type();
}
inline void LabelDescriptor::_internal_set_value_type(::google::api::LabelDescriptor_ValueType value) {
  
  _impl_.value_type_ = value;
}
inline void LabelDescriptor::set_value_type(::google::api::LabelDescriptor_ValueType value) {
  _internal_set_value_type(value);
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.value_type)
}

// string description = 3;
inline void LabelDescriptor::clear_description() {
  _impl_.description_.ClearToEmpty();
}
inline const std::string& LabelDescriptor::description() const {
  // @@protoc_insertion_point(field_get:google.api.LabelDescriptor.description)
  return _internal_description();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void LabelDescriptor::set_description(ArgT0&& arg0, ArgT... args) {
 
 _impl_.description_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.LabelDescriptor.description)
}
inline std::string* LabelDescriptor::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:google.api.LabelDescriptor.description)
  return _s;
}
inline const std::string& LabelDescriptor::_internal_description() const {
  return _impl_.description_.Get();
}
inline void LabelDescriptor::_internal_set_description(const std::string& value) {
  
  _impl_.description_.Set(value, GetArenaForAllocation());
}
inline std::string* LabelDescriptor::_internal_mutable_description() {
  
  return _impl_.description_.Mutable(GetArenaForAllocation());
}
inline std::string* LabelDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:google.api.LabelDescriptor.description)
  return _impl_.description_.Release();
}
inline void LabelDescriptor::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  _impl_.description_.SetAllocated(description, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.description_.IsDefault()) {
    _impl_.description_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.LabelDescriptor.description)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::api::LabelDescriptor_ValueType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::api::LabelDescriptor_ValueType>() {
  return ::google::api::LabelDescriptor_ValueType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2flabel_2eproto
