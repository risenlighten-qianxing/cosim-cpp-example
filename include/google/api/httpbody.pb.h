// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/httpbody.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fhttpbody_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fhttpbody_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fhttpbody_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fhttpbody_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fhttpbody_2eproto;
namespace google {
namespace api {
class HttpBody;
struct HttpBodyDefaultTypeInternal;
extern HttpBodyDefaultTypeInternal _HttpBody_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::HttpBody* Arena::CreateMaybeMessage<::google::api::HttpBody>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class HttpBody final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.HttpBody) */ {
 public:
  inline HttpBody() : HttpBody(nullptr) {}
  ~HttpBody() override;
  explicit PROTOBUF_CONSTEXPR HttpBody(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HttpBody(const HttpBody& from);
  HttpBody(HttpBody&& from) noexcept
    : HttpBody() {
    *this = ::std::move(from);
  }

  inline HttpBody& operator=(const HttpBody& from) {
    CopyFrom(from);
    return *this;
  }
  inline HttpBody& operator=(HttpBody&& from) noexcept {
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
  static const HttpBody& default_instance() {
    return *internal_default_instance();
  }
  static inline const HttpBody* internal_default_instance() {
    return reinterpret_cast<const HttpBody*>(
               &_HttpBody_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HttpBody& a, HttpBody& b) {
    a.Swap(&b);
  }
  inline void Swap(HttpBody* other) {
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
  void UnsafeArenaSwap(HttpBody* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HttpBody* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HttpBody>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HttpBody& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HttpBody& from) {
    HttpBody::MergeImpl(*this, from);
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
  void InternalSwap(HttpBody* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.HttpBody";
  }
  protected:
  explicit HttpBody(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExtensionsFieldNumber = 3,
    kContentTypeFieldNumber = 1,
    kDataFieldNumber = 2,
  };
  // repeated .google.protobuf.Any extensions = 3;
  int extensions_size() const;
  private:
  int _internal_extensions_size() const;
  public:
  void clear_extensions();
  ::PROTOBUF_NAMESPACE_ID::Any* mutable_extensions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Any >*
      mutable_extensions();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Any& _internal_extensions(int index) const;
  ::PROTOBUF_NAMESPACE_ID::Any* _internal_add_extensions();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Any& extensions(int index) const;
  ::PROTOBUF_NAMESPACE_ID::Any* add_extensions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Any >&
      extensions() const;

  // string content_type = 1;
  void clear_content_type();
  const std::string& content_type() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content_type(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content_type();
  PROTOBUF_NODISCARD std::string* release_content_type();
  void set_allocated_content_type(std::string* content_type);
  private:
  const std::string& _internal_content_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content_type(const std::string& value);
  std::string* _internal_mutable_content_type();
  public:

  // bytes data = 2;
  void clear_data();
  const std::string& data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data();
  PROTOBUF_NODISCARD std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // @@protoc_insertion_point(class_scope:google.api.HttpBody)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Any > extensions_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_type_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fapi_2fhttpbody_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HttpBody

// string content_type = 1;
inline void HttpBody::clear_content_type() {
  _impl_.content_type_.ClearToEmpty();
}
inline const std::string& HttpBody::content_type() const {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.content_type)
  return _internal_content_type();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpBody::set_content_type(ArgT0&& arg0, ArgT... args) {
 
 _impl_.content_type_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.HttpBody.content_type)
}
inline std::string* HttpBody::mutable_content_type() {
  std::string* _s = _internal_mutable_content_type();
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.content_type)
  return _s;
}
inline const std::string& HttpBody::_internal_content_type() const {
  return _impl_.content_type_.Get();
}
inline void HttpBody::_internal_set_content_type(const std::string& value) {
  
  _impl_.content_type_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpBody::_internal_mutable_content_type() {
  
  return _impl_.content_type_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpBody::release_content_type() {
  // @@protoc_insertion_point(field_release:google.api.HttpBody.content_type)
  return _impl_.content_type_.Release();
}
inline void HttpBody::set_allocated_content_type(std::string* content_type) {
  if (content_type != nullptr) {
    
  } else {
    
  }
  _impl_.content_type_.SetAllocated(content_type, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_type_.IsDefault()) {
    _impl_.content_type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.HttpBody.content_type)
}

// bytes data = 2;
inline void HttpBody::clear_data() {
  _impl_.data_.ClearToEmpty();
}
inline const std::string& HttpBody::data() const {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.data)
  return _internal_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpBody::set_data(ArgT0&& arg0, ArgT... args) {
 
 _impl_.data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.HttpBody.data)
}
inline std::string* HttpBody::mutable_data() {
  std::string* _s = _internal_mutable_data();
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.data)
  return _s;
}
inline const std::string& HttpBody::_internal_data() const {
  return _impl_.data_.Get();
}
inline void HttpBody::_internal_set_data(const std::string& value) {
  
  _impl_.data_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpBody::_internal_mutable_data() {
  
  return _impl_.data_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpBody::release_data() {
  // @@protoc_insertion_point(field_release:google.api.HttpBody.data)
  return _impl_.data_.Release();
}
inline void HttpBody::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  _impl_.data_.SetAllocated(data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.data_.IsDefault()) {
    _impl_.data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.HttpBody.data)
}

// repeated .google.protobuf.Any extensions = 3;
inline int HttpBody::_internal_extensions_size() const {
  return _impl_.extensions_.size();
}
inline int HttpBody::extensions_size() const {
  return _internal_extensions_size();
}
inline ::PROTOBUF_NAMESPACE_ID::Any* HttpBody::mutable_extensions(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.extensions)
  return _impl_.extensions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Any >*
HttpBody::mutable_extensions() {
  // @@protoc_insertion_point(field_mutable_list:google.api.HttpBody.extensions)
  return &_impl_.extensions_;
}
inline const ::PROTOBUF_NAMESPACE_ID::Any& HttpBody::_internal_extensions(int index) const {
  return _impl_.extensions_.Get(index);
}
inline const ::PROTOBUF_NAMESPACE_ID::Any& HttpBody::extensions(int index) const {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.extensions)
  return _internal_extensions(index);
}
inline ::PROTOBUF_NAMESPACE_ID::Any* HttpBody::_internal_add_extensions() {
  return _impl_.extensions_.Add();
}
inline ::PROTOBUF_NAMESPACE_ID::Any* HttpBody::add_extensions() {
  ::PROTOBUF_NAMESPACE_ID::Any* _add = _internal_add_extensions();
  // @@protoc_insertion_point(field_add:google.api.HttpBody.extensions)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Any >&
HttpBody::extensions() const {
  // @@protoc_insertion_point(field_list:google.api.HttpBody.extensions)
  return _impl_.extensions_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fhttpbody_2eproto
