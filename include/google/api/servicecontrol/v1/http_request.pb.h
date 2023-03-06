// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/servicecontrol/v1/http_request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto

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
#include <google/protobuf/duration.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto;
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {
class HttpRequest;
struct HttpRequestDefaultTypeInternal;
extern HttpRequestDefaultTypeInternal _HttpRequest_default_instance_;
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::servicecontrol::v1::HttpRequest* Arena::CreateMaybeMessage<::google::api::servicecontrol::v1::HttpRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {

// ===================================================================

class HttpRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.servicecontrol.v1.HttpRequest) */ {
 public:
  inline HttpRequest() : HttpRequest(nullptr) {}
  ~HttpRequest() override;
  explicit PROTOBUF_CONSTEXPR HttpRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HttpRequest(const HttpRequest& from);
  HttpRequest(HttpRequest&& from) noexcept
    : HttpRequest() {
    *this = ::std::move(from);
  }

  inline HttpRequest& operator=(const HttpRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline HttpRequest& operator=(HttpRequest&& from) noexcept {
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
  static const HttpRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const HttpRequest* internal_default_instance() {
    return reinterpret_cast<const HttpRequest*>(
               &_HttpRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HttpRequest& a, HttpRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(HttpRequest* other) {
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
  void UnsafeArenaSwap(HttpRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HttpRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HttpRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HttpRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HttpRequest& from) {
    HttpRequest::MergeImpl(*this, from);
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
  void InternalSwap(HttpRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.servicecontrol.v1.HttpRequest";
  }
  protected:
  explicit HttpRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRequestMethodFieldNumber = 1,
    kRequestUrlFieldNumber = 2,
    kUserAgentFieldNumber = 6,
    kRemoteIpFieldNumber = 7,
    kRefererFieldNumber = 8,
    kServerIpFieldNumber = 13,
    kProtocolFieldNumber = 15,
    kLatencyFieldNumber = 14,
    kRequestSizeFieldNumber = 3,
    kResponseSizeFieldNumber = 5,
    kStatusFieldNumber = 4,
    kCacheLookupFieldNumber = 11,
    kCacheHitFieldNumber = 9,
    kCacheValidatedWithOriginServerFieldNumber = 10,
    kCacheFillBytesFieldNumber = 12,
  };
  // string request_method = 1;
  void clear_request_method();
  const std::string& request_method() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_request_method(ArgT0&& arg0, ArgT... args);
  std::string* mutable_request_method();
  PROTOBUF_NODISCARD std::string* release_request_method();
  void set_allocated_request_method(std::string* request_method);
  private:
  const std::string& _internal_request_method() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_request_method(const std::string& value);
  std::string* _internal_mutable_request_method();
  public:

  // string request_url = 2;
  void clear_request_url();
  const std::string& request_url() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_request_url(ArgT0&& arg0, ArgT... args);
  std::string* mutable_request_url();
  PROTOBUF_NODISCARD std::string* release_request_url();
  void set_allocated_request_url(std::string* request_url);
  private:
  const std::string& _internal_request_url() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_request_url(const std::string& value);
  std::string* _internal_mutable_request_url();
  public:

  // string user_agent = 6;
  void clear_user_agent();
  const std::string& user_agent() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_user_agent(ArgT0&& arg0, ArgT... args);
  std::string* mutable_user_agent();
  PROTOBUF_NODISCARD std::string* release_user_agent();
  void set_allocated_user_agent(std::string* user_agent);
  private:
  const std::string& _internal_user_agent() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_agent(const std::string& value);
  std::string* _internal_mutable_user_agent();
  public:

  // string remote_ip = 7;
  void clear_remote_ip();
  const std::string& remote_ip() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_remote_ip(ArgT0&& arg0, ArgT... args);
  std::string* mutable_remote_ip();
  PROTOBUF_NODISCARD std::string* release_remote_ip();
  void set_allocated_remote_ip(std::string* remote_ip);
  private:
  const std::string& _internal_remote_ip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_remote_ip(const std::string& value);
  std::string* _internal_mutable_remote_ip();
  public:

  // string referer = 8;
  void clear_referer();
  const std::string& referer() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_referer(ArgT0&& arg0, ArgT... args);
  std::string* mutable_referer();
  PROTOBUF_NODISCARD std::string* release_referer();
  void set_allocated_referer(std::string* referer);
  private:
  const std::string& _internal_referer() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_referer(const std::string& value);
  std::string* _internal_mutable_referer();
  public:

  // string server_ip = 13;
  void clear_server_ip();
  const std::string& server_ip() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_server_ip(ArgT0&& arg0, ArgT... args);
  std::string* mutable_server_ip();
  PROTOBUF_NODISCARD std::string* release_server_ip();
  void set_allocated_server_ip(std::string* server_ip);
  private:
  const std::string& _internal_server_ip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_server_ip(const std::string& value);
  std::string* _internal_mutable_server_ip();
  public:

  // string protocol = 15;
  void clear_protocol();
  const std::string& protocol() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_protocol(ArgT0&& arg0, ArgT... args);
  std::string* mutable_protocol();
  PROTOBUF_NODISCARD std::string* release_protocol();
  void set_allocated_protocol(std::string* protocol);
  private:
  const std::string& _internal_protocol() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_protocol(const std::string& value);
  std::string* _internal_mutable_protocol();
  public:

  // .google.protobuf.Duration latency = 14;
  bool has_latency() const;
  private:
  bool _internal_has_latency() const;
  public:
  void clear_latency();
  const ::PROTOBUF_NAMESPACE_ID::Duration& latency() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Duration* release_latency();
  ::PROTOBUF_NAMESPACE_ID::Duration* mutable_latency();
  void set_allocated_latency(::PROTOBUF_NAMESPACE_ID::Duration* latency);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Duration& _internal_latency() const;
  ::PROTOBUF_NAMESPACE_ID::Duration* _internal_mutable_latency();
  public:
  void unsafe_arena_set_allocated_latency(
      ::PROTOBUF_NAMESPACE_ID::Duration* latency);
  ::PROTOBUF_NAMESPACE_ID::Duration* unsafe_arena_release_latency();

  // int64 request_size = 3;
  void clear_request_size();
  int64_t request_size() const;
  void set_request_size(int64_t value);
  private:
  int64_t _internal_request_size() const;
  void _internal_set_request_size(int64_t value);
  public:

  // int64 response_size = 5;
  void clear_response_size();
  int64_t response_size() const;
  void set_response_size(int64_t value);
  private:
  int64_t _internal_response_size() const;
  void _internal_set_response_size(int64_t value);
  public:

  // int32 status = 4;
  void clear_status();
  int32_t status() const;
  void set_status(int32_t value);
  private:
  int32_t _internal_status() const;
  void _internal_set_status(int32_t value);
  public:

  // bool cache_lookup = 11;
  void clear_cache_lookup();
  bool cache_lookup() const;
  void set_cache_lookup(bool value);
  private:
  bool _internal_cache_lookup() const;
  void _internal_set_cache_lookup(bool value);
  public:

  // bool cache_hit = 9;
  void clear_cache_hit();
  bool cache_hit() const;
  void set_cache_hit(bool value);
  private:
  bool _internal_cache_hit() const;
  void _internal_set_cache_hit(bool value);
  public:

  // bool cache_validated_with_origin_server = 10;
  void clear_cache_validated_with_origin_server();
  bool cache_validated_with_origin_server() const;
  void set_cache_validated_with_origin_server(bool value);
  private:
  bool _internal_cache_validated_with_origin_server() const;
  void _internal_set_cache_validated_with_origin_server(bool value);
  public:

  // int64 cache_fill_bytes = 12;
  void clear_cache_fill_bytes();
  int64_t cache_fill_bytes() const;
  void set_cache_fill_bytes(int64_t value);
  private:
  int64_t _internal_cache_fill_bytes() const;
  void _internal_set_cache_fill_bytes(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:google.api.servicecontrol.v1.HttpRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr request_method_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr request_url_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_agent_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr remote_ip_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr referer_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr server_ip_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr protocol_;
    ::PROTOBUF_NAMESPACE_ID::Duration* latency_;
    int64_t request_size_;
    int64_t response_size_;
    int32_t status_;
    bool cache_lookup_;
    bool cache_hit_;
    bool cache_validated_with_origin_server_;
    int64_t cache_fill_bytes_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HttpRequest

// string request_method = 1;
inline void HttpRequest::clear_request_method() {
  _impl_.request_method_.ClearToEmpty();
}
inline const std::string& HttpRequest::request_method() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.request_method)
  return _internal_request_method();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpRequest::set_request_method(ArgT0&& arg0, ArgT... args) {
 
 _impl_.request_method_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.request_method)
}
inline std::string* HttpRequest::mutable_request_method() {
  std::string* _s = _internal_mutable_request_method();
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.HttpRequest.request_method)
  return _s;
}
inline const std::string& HttpRequest::_internal_request_method() const {
  return _impl_.request_method_.Get();
}
inline void HttpRequest::_internal_set_request_method(const std::string& value) {
  
  _impl_.request_method_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpRequest::_internal_mutable_request_method() {
  
  return _impl_.request_method_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpRequest::release_request_method() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.HttpRequest.request_method)
  return _impl_.request_method_.Release();
}
inline void HttpRequest::set_allocated_request_method(std::string* request_method) {
  if (request_method != nullptr) {
    
  } else {
    
  }
  _impl_.request_method_.SetAllocated(request_method, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.request_method_.IsDefault()) {
    _impl_.request_method_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.HttpRequest.request_method)
}

// string request_url = 2;
inline void HttpRequest::clear_request_url() {
  _impl_.request_url_.ClearToEmpty();
}
inline const std::string& HttpRequest::request_url() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.request_url)
  return _internal_request_url();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpRequest::set_request_url(ArgT0&& arg0, ArgT... args) {
 
 _impl_.request_url_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.request_url)
}
inline std::string* HttpRequest::mutable_request_url() {
  std::string* _s = _internal_mutable_request_url();
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.HttpRequest.request_url)
  return _s;
}
inline const std::string& HttpRequest::_internal_request_url() const {
  return _impl_.request_url_.Get();
}
inline void HttpRequest::_internal_set_request_url(const std::string& value) {
  
  _impl_.request_url_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpRequest::_internal_mutable_request_url() {
  
  return _impl_.request_url_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpRequest::release_request_url() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.HttpRequest.request_url)
  return _impl_.request_url_.Release();
}
inline void HttpRequest::set_allocated_request_url(std::string* request_url) {
  if (request_url != nullptr) {
    
  } else {
    
  }
  _impl_.request_url_.SetAllocated(request_url, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.request_url_.IsDefault()) {
    _impl_.request_url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.HttpRequest.request_url)
}

// int64 request_size = 3;
inline void HttpRequest::clear_request_size() {
  _impl_.request_size_ = int64_t{0};
}
inline int64_t HttpRequest::_internal_request_size() const {
  return _impl_.request_size_;
}
inline int64_t HttpRequest::request_size() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.request_size)
  return _internal_request_size();
}
inline void HttpRequest::_internal_set_request_size(int64_t value) {
  
  _impl_.request_size_ = value;
}
inline void HttpRequest::set_request_size(int64_t value) {
  _internal_set_request_size(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.request_size)
}

// int32 status = 4;
inline void HttpRequest::clear_status() {
  _impl_.status_ = 0;
}
inline int32_t HttpRequest::_internal_status() const {
  return _impl_.status_;
}
inline int32_t HttpRequest::status() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.status)
  return _internal_status();
}
inline void HttpRequest::_internal_set_status(int32_t value) {
  
  _impl_.status_ = value;
}
inline void HttpRequest::set_status(int32_t value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.status)
}

// int64 response_size = 5;
inline void HttpRequest::clear_response_size() {
  _impl_.response_size_ = int64_t{0};
}
inline int64_t HttpRequest::_internal_response_size() const {
  return _impl_.response_size_;
}
inline int64_t HttpRequest::response_size() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.response_size)
  return _internal_response_size();
}
inline void HttpRequest::_internal_set_response_size(int64_t value) {
  
  _impl_.response_size_ = value;
}
inline void HttpRequest::set_response_size(int64_t value) {
  _internal_set_response_size(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.response_size)
}

// string user_agent = 6;
inline void HttpRequest::clear_user_agent() {
  _impl_.user_agent_.ClearToEmpty();
}
inline const std::string& HttpRequest::user_agent() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.user_agent)
  return _internal_user_agent();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpRequest::set_user_agent(ArgT0&& arg0, ArgT... args) {
 
 _impl_.user_agent_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.user_agent)
}
inline std::string* HttpRequest::mutable_user_agent() {
  std::string* _s = _internal_mutable_user_agent();
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.HttpRequest.user_agent)
  return _s;
}
inline const std::string& HttpRequest::_internal_user_agent() const {
  return _impl_.user_agent_.Get();
}
inline void HttpRequest::_internal_set_user_agent(const std::string& value) {
  
  _impl_.user_agent_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpRequest::_internal_mutable_user_agent() {
  
  return _impl_.user_agent_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpRequest::release_user_agent() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.HttpRequest.user_agent)
  return _impl_.user_agent_.Release();
}
inline void HttpRequest::set_allocated_user_agent(std::string* user_agent) {
  if (user_agent != nullptr) {
    
  } else {
    
  }
  _impl_.user_agent_.SetAllocated(user_agent, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.user_agent_.IsDefault()) {
    _impl_.user_agent_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.HttpRequest.user_agent)
}

// string remote_ip = 7;
inline void HttpRequest::clear_remote_ip() {
  _impl_.remote_ip_.ClearToEmpty();
}
inline const std::string& HttpRequest::remote_ip() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.remote_ip)
  return _internal_remote_ip();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpRequest::set_remote_ip(ArgT0&& arg0, ArgT... args) {
 
 _impl_.remote_ip_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.remote_ip)
}
inline std::string* HttpRequest::mutable_remote_ip() {
  std::string* _s = _internal_mutable_remote_ip();
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.HttpRequest.remote_ip)
  return _s;
}
inline const std::string& HttpRequest::_internal_remote_ip() const {
  return _impl_.remote_ip_.Get();
}
inline void HttpRequest::_internal_set_remote_ip(const std::string& value) {
  
  _impl_.remote_ip_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpRequest::_internal_mutable_remote_ip() {
  
  return _impl_.remote_ip_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpRequest::release_remote_ip() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.HttpRequest.remote_ip)
  return _impl_.remote_ip_.Release();
}
inline void HttpRequest::set_allocated_remote_ip(std::string* remote_ip) {
  if (remote_ip != nullptr) {
    
  } else {
    
  }
  _impl_.remote_ip_.SetAllocated(remote_ip, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.remote_ip_.IsDefault()) {
    _impl_.remote_ip_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.HttpRequest.remote_ip)
}

// string server_ip = 13;
inline void HttpRequest::clear_server_ip() {
  _impl_.server_ip_.ClearToEmpty();
}
inline const std::string& HttpRequest::server_ip() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.server_ip)
  return _internal_server_ip();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpRequest::set_server_ip(ArgT0&& arg0, ArgT... args) {
 
 _impl_.server_ip_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.server_ip)
}
inline std::string* HttpRequest::mutable_server_ip() {
  std::string* _s = _internal_mutable_server_ip();
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.HttpRequest.server_ip)
  return _s;
}
inline const std::string& HttpRequest::_internal_server_ip() const {
  return _impl_.server_ip_.Get();
}
inline void HttpRequest::_internal_set_server_ip(const std::string& value) {
  
  _impl_.server_ip_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpRequest::_internal_mutable_server_ip() {
  
  return _impl_.server_ip_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpRequest::release_server_ip() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.HttpRequest.server_ip)
  return _impl_.server_ip_.Release();
}
inline void HttpRequest::set_allocated_server_ip(std::string* server_ip) {
  if (server_ip != nullptr) {
    
  } else {
    
  }
  _impl_.server_ip_.SetAllocated(server_ip, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.server_ip_.IsDefault()) {
    _impl_.server_ip_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.HttpRequest.server_ip)
}

// string referer = 8;
inline void HttpRequest::clear_referer() {
  _impl_.referer_.ClearToEmpty();
}
inline const std::string& HttpRequest::referer() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.referer)
  return _internal_referer();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpRequest::set_referer(ArgT0&& arg0, ArgT... args) {
 
 _impl_.referer_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.referer)
}
inline std::string* HttpRequest::mutable_referer() {
  std::string* _s = _internal_mutable_referer();
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.HttpRequest.referer)
  return _s;
}
inline const std::string& HttpRequest::_internal_referer() const {
  return _impl_.referer_.Get();
}
inline void HttpRequest::_internal_set_referer(const std::string& value) {
  
  _impl_.referer_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpRequest::_internal_mutable_referer() {
  
  return _impl_.referer_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpRequest::release_referer() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.HttpRequest.referer)
  return _impl_.referer_.Release();
}
inline void HttpRequest::set_allocated_referer(std::string* referer) {
  if (referer != nullptr) {
    
  } else {
    
  }
  _impl_.referer_.SetAllocated(referer, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.referer_.IsDefault()) {
    _impl_.referer_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.HttpRequest.referer)
}

// .google.protobuf.Duration latency = 14;
inline bool HttpRequest::_internal_has_latency() const {
  return this != internal_default_instance() && _impl_.latency_ != nullptr;
}
inline bool HttpRequest::has_latency() const {
  return _internal_has_latency();
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& HttpRequest::_internal_latency() const {
  const ::PROTOBUF_NAMESPACE_ID::Duration* p = _impl_.latency_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Duration&>(
      ::PROTOBUF_NAMESPACE_ID::_Duration_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& HttpRequest::latency() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.latency)
  return _internal_latency();
}
inline void HttpRequest::unsafe_arena_set_allocated_latency(
    ::PROTOBUF_NAMESPACE_ID::Duration* latency) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.latency_);
  }
  _impl_.latency_ = latency;
  if (latency) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.api.servicecontrol.v1.HttpRequest.latency)
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* HttpRequest::release_latency() {
  
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.latency_;
  _impl_.latency_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* HttpRequest::unsafe_arena_release_latency() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.HttpRequest.latency)
  
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.latency_;
  _impl_.latency_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* HttpRequest::_internal_mutable_latency() {
  
  if (_impl_.latency_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Duration>(GetArenaForAllocation());
    _impl_.latency_ = p;
  }
  return _impl_.latency_;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* HttpRequest::mutable_latency() {
  ::PROTOBUF_NAMESPACE_ID::Duration* _msg = _internal_mutable_latency();
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.HttpRequest.latency)
  return _msg;
}
inline void HttpRequest::set_allocated_latency(::PROTOBUF_NAMESPACE_ID::Duration* latency) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.latency_);
  }
  if (latency) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(latency));
    if (message_arena != submessage_arena) {
      latency = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, latency, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.latency_ = latency;
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.HttpRequest.latency)
}

// bool cache_lookup = 11;
inline void HttpRequest::clear_cache_lookup() {
  _impl_.cache_lookup_ = false;
}
inline bool HttpRequest::_internal_cache_lookup() const {
  return _impl_.cache_lookup_;
}
inline bool HttpRequest::cache_lookup() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.cache_lookup)
  return _internal_cache_lookup();
}
inline void HttpRequest::_internal_set_cache_lookup(bool value) {
  
  _impl_.cache_lookup_ = value;
}
inline void HttpRequest::set_cache_lookup(bool value) {
  _internal_set_cache_lookup(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.cache_lookup)
}

// bool cache_hit = 9;
inline void HttpRequest::clear_cache_hit() {
  _impl_.cache_hit_ = false;
}
inline bool HttpRequest::_internal_cache_hit() const {
  return _impl_.cache_hit_;
}
inline bool HttpRequest::cache_hit() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.cache_hit)
  return _internal_cache_hit();
}
inline void HttpRequest::_internal_set_cache_hit(bool value) {
  
  _impl_.cache_hit_ = value;
}
inline void HttpRequest::set_cache_hit(bool value) {
  _internal_set_cache_hit(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.cache_hit)
}

// bool cache_validated_with_origin_server = 10;
inline void HttpRequest::clear_cache_validated_with_origin_server() {
  _impl_.cache_validated_with_origin_server_ = false;
}
inline bool HttpRequest::_internal_cache_validated_with_origin_server() const {
  return _impl_.cache_validated_with_origin_server_;
}
inline bool HttpRequest::cache_validated_with_origin_server() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.cache_validated_with_origin_server)
  return _internal_cache_validated_with_origin_server();
}
inline void HttpRequest::_internal_set_cache_validated_with_origin_server(bool value) {
  
  _impl_.cache_validated_with_origin_server_ = value;
}
inline void HttpRequest::set_cache_validated_with_origin_server(bool value) {
  _internal_set_cache_validated_with_origin_server(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.cache_validated_with_origin_server)
}

// int64 cache_fill_bytes = 12;
inline void HttpRequest::clear_cache_fill_bytes() {
  _impl_.cache_fill_bytes_ = int64_t{0};
}
inline int64_t HttpRequest::_internal_cache_fill_bytes() const {
  return _impl_.cache_fill_bytes_;
}
inline int64_t HttpRequest::cache_fill_bytes() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.cache_fill_bytes)
  return _internal_cache_fill_bytes();
}
inline void HttpRequest::_internal_set_cache_fill_bytes(int64_t value) {
  
  _impl_.cache_fill_bytes_ = value;
}
inline void HttpRequest::set_cache_fill_bytes(int64_t value) {
  _internal_set_cache_fill_bytes(value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.cache_fill_bytes)
}

// string protocol = 15;
inline void HttpRequest::clear_protocol() {
  _impl_.protocol_.ClearToEmpty();
}
inline const std::string& HttpRequest::protocol() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.HttpRequest.protocol)
  return _internal_protocol();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HttpRequest::set_protocol(ArgT0&& arg0, ArgT... args) {
 
 _impl_.protocol_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.HttpRequest.protocol)
}
inline std::string* HttpRequest::mutable_protocol() {
  std::string* _s = _internal_mutable_protocol();
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.HttpRequest.protocol)
  return _s;
}
inline const std::string& HttpRequest::_internal_protocol() const {
  return _impl_.protocol_.Get();
}
inline void HttpRequest::_internal_set_protocol(const std::string& value) {
  
  _impl_.protocol_.Set(value, GetArenaForAllocation());
}
inline std::string* HttpRequest::_internal_mutable_protocol() {
  
  return _impl_.protocol_.Mutable(GetArenaForAllocation());
}
inline std::string* HttpRequest::release_protocol() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.HttpRequest.protocol)
  return _impl_.protocol_.Release();
}
inline void HttpRequest::set_allocated_protocol(std::string* protocol) {
  if (protocol != nullptr) {
    
  } else {
    
  }
  _impl_.protocol_.SetAllocated(protocol, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.protocol_.IsDefault()) {
    _impl_.protocol_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.HttpRequest.protocol)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto
