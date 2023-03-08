// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/servicecontrol/v1/http_request.proto

#include "google/api/servicecontrol/v1/http_request.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {
PROTOBUF_CONSTEXPR HttpRequest::HttpRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.request_method_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.request_url_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.user_agent_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.remote_ip_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.referer_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.server_ip_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.protocol_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.latency_)*/nullptr
  , /*decltype(_impl_.request_size_)*/int64_t{0}
  , /*decltype(_impl_.response_size_)*/int64_t{0}
  , /*decltype(_impl_.status_)*/0
  , /*decltype(_impl_.cache_lookup_)*/false
  , /*decltype(_impl_.cache_hit_)*/false
  , /*decltype(_impl_.cache_validated_with_origin_server_)*/false
  , /*decltype(_impl_.cache_fill_bytes_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct HttpRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HttpRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~HttpRequestDefaultTypeInternal() {}
  union {
    HttpRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HttpRequestDefaultTypeInternal _HttpRequest_default_instance_;
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto = nullptr;

const uint32_t TableStruct_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.request_method_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.request_url_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.request_size_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.status_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.response_size_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.user_agent_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.remote_ip_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.server_ip_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.referer_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.latency_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.cache_lookup_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.cache_hit_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.cache_validated_with_origin_server_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.cache_fill_bytes_),
  PROTOBUF_FIELD_OFFSET(::google::api::servicecontrol::v1::HttpRequest, _impl_.protocol_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::google::api::servicecontrol::v1::HttpRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::google::api::servicecontrol::v1::_HttpRequest_default_instance_._instance,
};

const char descriptor_table_protodef_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n/google/api/servicecontrol/v1/http_requ"
  "est.proto\022\034google.api.servicecontrol.v1\032"
  "\036google/protobuf/duration.proto\"\357\002\n\013Http"
  "Request\022\026\n\016request_method\030\001 \001(\t\022\023\n\013reque"
  "st_url\030\002 \001(\t\022\024\n\014request_size\030\003 \001(\003\022\016\n\006st"
  "atus\030\004 \001(\005\022\025\n\rresponse_size\030\005 \001(\003\022\022\n\nuse"
  "r_agent\030\006 \001(\t\022\021\n\tremote_ip\030\007 \001(\t\022\021\n\tserv"
  "er_ip\030\r \001(\t\022\017\n\007referer\030\010 \001(\t\022*\n\007latency\030"
  "\016 \001(\0132\031.google.protobuf.Duration\022\024\n\014cach"
  "e_lookup\030\013 \001(\010\022\021\n\tcache_hit\030\t \001(\010\022*\n\"cac"
  "he_validated_with_origin_server\030\n \001(\010\022\030\n"
  "\020cache_fill_bytes\030\014 \001(\003\022\020\n\010protocol\030\017 \001("
  "\tB\350\001\n com.google.api.servicecontrol.v1B\020"
  "HttpRequestProtoP\001ZJgoogle.golang.org/ge"
  "nproto/googleapis/api/servicecontrol/v1;"
  "servicecontrol\252\002\036Google.Cloud.ServiceCon"
  "trol.V1\312\002\036Google\\Cloud\\ServiceControl\\V1"
  "\352\002!Google::Cloud::ServiceControl::V1b\006pr"
  "oto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fduration_2eproto,
};
static ::_pbi::once_flag descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto = {
    false, false, 724, descriptor_table_protodef_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto,
    "google/api/servicecontrol/v1/http_request.proto",
    &descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto_once, descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto::offsets,
    file_level_metadata_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto, file_level_enum_descriptors_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto,
    file_level_service_descriptors_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto(&descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto);
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {

// ===================================================================

class HttpRequest::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::Duration& latency(const HttpRequest* msg);
};

const ::PROTOBUF_NAMESPACE_ID::Duration&
HttpRequest::_Internal::latency(const HttpRequest* msg) {
  return *msg->_impl_.latency_;
}
void HttpRequest::clear_latency() {
  if (GetArenaForAllocation() == nullptr && _impl_.latency_ != nullptr) {
    delete _impl_.latency_;
  }
  _impl_.latency_ = nullptr;
}
HttpRequest::HttpRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:google.api.servicecontrol.v1.HttpRequest)
}
HttpRequest::HttpRequest(const HttpRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  HttpRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.request_method_){}
    , decltype(_impl_.request_url_){}
    , decltype(_impl_.user_agent_){}
    , decltype(_impl_.remote_ip_){}
    , decltype(_impl_.referer_){}
    , decltype(_impl_.server_ip_){}
    , decltype(_impl_.protocol_){}
    , decltype(_impl_.latency_){nullptr}
    , decltype(_impl_.request_size_){}
    , decltype(_impl_.response_size_){}
    , decltype(_impl_.status_){}
    , decltype(_impl_.cache_lookup_){}
    , decltype(_impl_.cache_hit_){}
    , decltype(_impl_.cache_validated_with_origin_server_){}
    , decltype(_impl_.cache_fill_bytes_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.request_method_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.request_method_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_request_method().empty()) {
    _this->_impl_.request_method_.Set(from._internal_request_method(), 
      _this->GetArenaForAllocation());
  }
  _impl_.request_url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.request_url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_request_url().empty()) {
    _this->_impl_.request_url_.Set(from._internal_request_url(), 
      _this->GetArenaForAllocation());
  }
  _impl_.user_agent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.user_agent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_user_agent().empty()) {
    _this->_impl_.user_agent_.Set(from._internal_user_agent(), 
      _this->GetArenaForAllocation());
  }
  _impl_.remote_ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.remote_ip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_remote_ip().empty()) {
    _this->_impl_.remote_ip_.Set(from._internal_remote_ip(), 
      _this->GetArenaForAllocation());
  }
  _impl_.referer_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.referer_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_referer().empty()) {
    _this->_impl_.referer_.Set(from._internal_referer(), 
      _this->GetArenaForAllocation());
  }
  _impl_.server_ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.server_ip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_server_ip().empty()) {
    _this->_impl_.server_ip_.Set(from._internal_server_ip(), 
      _this->GetArenaForAllocation());
  }
  _impl_.protocol_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.protocol_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_protocol().empty()) {
    _this->_impl_.protocol_.Set(from._internal_protocol(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_latency()) {
    _this->_impl_.latency_ = new ::PROTOBUF_NAMESPACE_ID::Duration(*from._impl_.latency_);
  }
  ::memcpy(&_impl_.request_size_, &from._impl_.request_size_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.cache_fill_bytes_) -
    reinterpret_cast<char*>(&_impl_.request_size_)) + sizeof(_impl_.cache_fill_bytes_));
  // @@protoc_insertion_point(copy_constructor:google.api.servicecontrol.v1.HttpRequest)
}

inline void HttpRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.request_method_){}
    , decltype(_impl_.request_url_){}
    , decltype(_impl_.user_agent_){}
    , decltype(_impl_.remote_ip_){}
    , decltype(_impl_.referer_){}
    , decltype(_impl_.server_ip_){}
    , decltype(_impl_.protocol_){}
    , decltype(_impl_.latency_){nullptr}
    , decltype(_impl_.request_size_){int64_t{0}}
    , decltype(_impl_.response_size_){int64_t{0}}
    , decltype(_impl_.status_){0}
    , decltype(_impl_.cache_lookup_){false}
    , decltype(_impl_.cache_hit_){false}
    , decltype(_impl_.cache_validated_with_origin_server_){false}
    , decltype(_impl_.cache_fill_bytes_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.request_method_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.request_method_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.request_url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.request_url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.user_agent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.user_agent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.remote_ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.remote_ip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.referer_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.referer_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.server_ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.server_ip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.protocol_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.protocol_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

HttpRequest::~HttpRequest() {
  // @@protoc_insertion_point(destructor:google.api.servicecontrol.v1.HttpRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void HttpRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.request_method_.Destroy();
  _impl_.request_url_.Destroy();
  _impl_.user_agent_.Destroy();
  _impl_.remote_ip_.Destroy();
  _impl_.referer_.Destroy();
  _impl_.server_ip_.Destroy();
  _impl_.protocol_.Destroy();
  if (this != internal_default_instance()) delete _impl_.latency_;
}

void HttpRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void HttpRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.servicecontrol.v1.HttpRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.request_method_.ClearToEmpty();
  _impl_.request_url_.ClearToEmpty();
  _impl_.user_agent_.ClearToEmpty();
  _impl_.remote_ip_.ClearToEmpty();
  _impl_.referer_.ClearToEmpty();
  _impl_.server_ip_.ClearToEmpty();
  _impl_.protocol_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.latency_ != nullptr) {
    delete _impl_.latency_;
  }
  _impl_.latency_ = nullptr;
  ::memset(&_impl_.request_size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.cache_fill_bytes_) -
      reinterpret_cast<char*>(&_impl_.request_size_)) + sizeof(_impl_.cache_fill_bytes_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HttpRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string request_method = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_request_method();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.servicecontrol.v1.HttpRequest.request_method"));
        } else
          goto handle_unusual;
        continue;
      // string request_url = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_request_url();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.servicecontrol.v1.HttpRequest.request_url"));
        } else
          goto handle_unusual;
        continue;
      // int64 request_size = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.request_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 status = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 response_size = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.response_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string user_agent = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_user_agent();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.servicecontrol.v1.HttpRequest.user_agent"));
        } else
          goto handle_unusual;
        continue;
      // string remote_ip = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_remote_ip();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.servicecontrol.v1.HttpRequest.remote_ip"));
        } else
          goto handle_unusual;
        continue;
      // string referer = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_referer();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.servicecontrol.v1.HttpRequest.referer"));
        } else
          goto handle_unusual;
        continue;
      // bool cache_hit = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _impl_.cache_hit_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool cache_validated_with_origin_server = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _impl_.cache_validated_with_origin_server_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool cache_lookup = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _impl_.cache_lookup_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 cache_fill_bytes = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 96)) {
          _impl_.cache_fill_bytes_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string server_ip = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 106)) {
          auto str = _internal_mutable_server_ip();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.servicecontrol.v1.HttpRequest.server_ip"));
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Duration latency = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 114)) {
          ptr = ctx->ParseMessage(_internal_mutable_latency(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string protocol = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 122)) {
          auto str = _internal_mutable_protocol();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.servicecontrol.v1.HttpRequest.protocol"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* HttpRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.servicecontrol.v1.HttpRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string request_method = 1;
  if (!this->_internal_request_method().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_request_method().data(), static_cast<int>(this->_internal_request_method().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.HttpRequest.request_method");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_request_method(), target);
  }

  // string request_url = 2;
  if (!this->_internal_request_url().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_request_url().data(), static_cast<int>(this->_internal_request_url().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.HttpRequest.request_url");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_request_url(), target);
  }

  // int64 request_size = 3;
  if (this->_internal_request_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_request_size(), target);
  }

  // int32 status = 4;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_status(), target);
  }

  // int64 response_size = 5;
  if (this->_internal_response_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(5, this->_internal_response_size(), target);
  }

  // string user_agent = 6;
  if (!this->_internal_user_agent().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_user_agent().data(), static_cast<int>(this->_internal_user_agent().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.HttpRequest.user_agent");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_user_agent(), target);
  }

  // string remote_ip = 7;
  if (!this->_internal_remote_ip().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_remote_ip().data(), static_cast<int>(this->_internal_remote_ip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.HttpRequest.remote_ip");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_remote_ip(), target);
  }

  // string referer = 8;
  if (!this->_internal_referer().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_referer().data(), static_cast<int>(this->_internal_referer().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.HttpRequest.referer");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_referer(), target);
  }

  // bool cache_hit = 9;
  if (this->_internal_cache_hit() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(9, this->_internal_cache_hit(), target);
  }

  // bool cache_validated_with_origin_server = 10;
  if (this->_internal_cache_validated_with_origin_server() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(10, this->_internal_cache_validated_with_origin_server(), target);
  }

  // bool cache_lookup = 11;
  if (this->_internal_cache_lookup() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(11, this->_internal_cache_lookup(), target);
  }

  // int64 cache_fill_bytes = 12;
  if (this->_internal_cache_fill_bytes() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(12, this->_internal_cache_fill_bytes(), target);
  }

  // string server_ip = 13;
  if (!this->_internal_server_ip().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_server_ip().data(), static_cast<int>(this->_internal_server_ip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.HttpRequest.server_ip");
    target = stream->WriteStringMaybeAliased(
        13, this->_internal_server_ip(), target);
  }

  // .google.protobuf.Duration latency = 14;
  if (this->_internal_has_latency()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(14, _Internal::latency(this),
        _Internal::latency(this).GetCachedSize(), target, stream);
  }

  // string protocol = 15;
  if (!this->_internal_protocol().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_protocol().data(), static_cast<int>(this->_internal_protocol().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.servicecontrol.v1.HttpRequest.protocol");
    target = stream->WriteStringMaybeAliased(
        15, this->_internal_protocol(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.servicecontrol.v1.HttpRequest)
  return target;
}

size_t HttpRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.servicecontrol.v1.HttpRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string request_method = 1;
  if (!this->_internal_request_method().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_request_method());
  }

  // string request_url = 2;
  if (!this->_internal_request_url().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_request_url());
  }

  // string user_agent = 6;
  if (!this->_internal_user_agent().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_user_agent());
  }

  // string remote_ip = 7;
  if (!this->_internal_remote_ip().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_remote_ip());
  }

  // string referer = 8;
  if (!this->_internal_referer().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_referer());
  }

  // string server_ip = 13;
  if (!this->_internal_server_ip().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_server_ip());
  }

  // string protocol = 15;
  if (!this->_internal_protocol().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_protocol());
  }

  // .google.protobuf.Duration latency = 14;
  if (this->_internal_has_latency()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.latency_);
  }

  // int64 request_size = 3;
  if (this->_internal_request_size() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_request_size());
  }

  // int64 response_size = 5;
  if (this->_internal_response_size() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_response_size());
  }

  // int32 status = 4;
  if (this->_internal_status() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_status());
  }

  // bool cache_lookup = 11;
  if (this->_internal_cache_lookup() != 0) {
    total_size += 1 + 1;
  }

  // bool cache_hit = 9;
  if (this->_internal_cache_hit() != 0) {
    total_size += 1 + 1;
  }

  // bool cache_validated_with_origin_server = 10;
  if (this->_internal_cache_validated_with_origin_server() != 0) {
    total_size += 1 + 1;
  }

  // int64 cache_fill_bytes = 12;
  if (this->_internal_cache_fill_bytes() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_cache_fill_bytes());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData HttpRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    HttpRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*HttpRequest::GetClassData() const { return &_class_data_; }


void HttpRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<HttpRequest*>(&to_msg);
  auto& from = static_cast<const HttpRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.api.servicecontrol.v1.HttpRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_request_method().empty()) {
    _this->_internal_set_request_method(from._internal_request_method());
  }
  if (!from._internal_request_url().empty()) {
    _this->_internal_set_request_url(from._internal_request_url());
  }
  if (!from._internal_user_agent().empty()) {
    _this->_internal_set_user_agent(from._internal_user_agent());
  }
  if (!from._internal_remote_ip().empty()) {
    _this->_internal_set_remote_ip(from._internal_remote_ip());
  }
  if (!from._internal_referer().empty()) {
    _this->_internal_set_referer(from._internal_referer());
  }
  if (!from._internal_server_ip().empty()) {
    _this->_internal_set_server_ip(from._internal_server_ip());
  }
  if (!from._internal_protocol().empty()) {
    _this->_internal_set_protocol(from._internal_protocol());
  }
  if (from._internal_has_latency()) {
    _this->_internal_mutable_latency()->::PROTOBUF_NAMESPACE_ID::Duration::MergeFrom(
        from._internal_latency());
  }
  if (from._internal_request_size() != 0) {
    _this->_internal_set_request_size(from._internal_request_size());
  }
  if (from._internal_response_size() != 0) {
    _this->_internal_set_response_size(from._internal_response_size());
  }
  if (from._internal_status() != 0) {
    _this->_internal_set_status(from._internal_status());
  }
  if (from._internal_cache_lookup() != 0) {
    _this->_internal_set_cache_lookup(from._internal_cache_lookup());
  }
  if (from._internal_cache_hit() != 0) {
    _this->_internal_set_cache_hit(from._internal_cache_hit());
  }
  if (from._internal_cache_validated_with_origin_server() != 0) {
    _this->_internal_set_cache_validated_with_origin_server(from._internal_cache_validated_with_origin_server());
  }
  if (from._internal_cache_fill_bytes() != 0) {
    _this->_internal_set_cache_fill_bytes(from._internal_cache_fill_bytes());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void HttpRequest::CopyFrom(const HttpRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.servicecontrol.v1.HttpRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HttpRequest::IsInitialized() const {
  return true;
}

void HttpRequest::InternalSwap(HttpRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.request_method_, lhs_arena,
      &other->_impl_.request_method_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.request_url_, lhs_arena,
      &other->_impl_.request_url_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.user_agent_, lhs_arena,
      &other->_impl_.user_agent_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.remote_ip_, lhs_arena,
      &other->_impl_.remote_ip_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.referer_, lhs_arena,
      &other->_impl_.referer_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.server_ip_, lhs_arena,
      &other->_impl_.server_ip_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.protocol_, lhs_arena,
      &other->_impl_.protocol_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(HttpRequest, _impl_.cache_fill_bytes_)
      + sizeof(HttpRequest::_impl_.cache_fill_bytes_)
      - PROTOBUF_FIELD_OFFSET(HttpRequest, _impl_.latency_)>(
          reinterpret_cast<char*>(&_impl_.latency_),
          reinterpret_cast<char*>(&other->_impl_.latency_));
}

::PROTOBUF_NAMESPACE_ID::Metadata HttpRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto_getter, &descriptor_table_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto_once,
      file_level_metadata_google_2fapi_2fservicecontrol_2fv1_2fhttp_5frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::servicecontrol::v1::HttpRequest*
Arena::CreateMaybeMessage< ::google::api::servicecontrol::v1::HttpRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::servicecontrol::v1::HttpRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>