// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/system_parameter.proto

#include "google/api/system_parameter.pb.h"

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
PROTOBUF_CONSTEXPR SystemParameters::SystemParameters(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.rules_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SystemParametersDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SystemParametersDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SystemParametersDefaultTypeInternal() {}
  union {
    SystemParameters _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SystemParametersDefaultTypeInternal _SystemParameters_default_instance_;
PROTOBUF_CONSTEXPR SystemParameterRule::SystemParameterRule(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.parameters_)*/{}
  , /*decltype(_impl_.selector_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SystemParameterRuleDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SystemParameterRuleDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SystemParameterRuleDefaultTypeInternal() {}
  union {
    SystemParameterRule _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SystemParameterRuleDefaultTypeInternal _SystemParameterRule_default_instance_;
PROTOBUF_CONSTEXPR SystemParameter::SystemParameter(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.http_header_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.url_query_parameter_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SystemParameterDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SystemParameterDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SystemParameterDefaultTypeInternal() {}
  union {
    SystemParameter _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SystemParameterDefaultTypeInternal _SystemParameter_default_instance_;
}  // namespace api
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2fapi_2fsystem_5fparameter_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fsystem_5fparameter_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fsystem_5fparameter_2eproto = nullptr;

const uint32_t TableStruct_google_2fapi_2fsystem_5fparameter_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameters, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameters, _impl_.rules_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameterRule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameterRule, _impl_.selector_),
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameterRule, _impl_.parameters_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameter, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameter, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameter, _impl_.http_header_),
  PROTOBUF_FIELD_OFFSET(::google::api::SystemParameter, _impl_.url_query_parameter_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::google::api::SystemParameters)},
  { 7, -1, -1, sizeof(::google::api::SystemParameterRule)},
  { 15, -1, -1, sizeof(::google::api::SystemParameter)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::google::api::_SystemParameters_default_instance_._instance,
  &::google::api::_SystemParameterRule_default_instance_._instance,
  &::google::api::_SystemParameter_default_instance_._instance,
};

const char descriptor_table_protodef_google_2fapi_2fsystem_5fparameter_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!google/api/system_parameter.proto\022\ngoo"
  "gle.api\"B\n\020SystemParameters\022.\n\005rules\030\001 \003"
  "(\0132\037.google.api.SystemParameterRule\"X\n\023S"
  "ystemParameterRule\022\020\n\010selector\030\001 \001(\t\022/\n\n"
  "parameters\030\002 \003(\0132\033.google.api.SystemPara"
  "meter\"Q\n\017SystemParameter\022\014\n\004name\030\001 \001(\t\022\023"
  "\n\013http_header\030\002 \001(\t\022\033\n\023url_query_paramet"
  "er\030\003 \001(\tBv\n\016com.google.apiB\024SystemParame"
  "terProtoP\001ZEgoogle.golang.org/genproto/g"
  "oogleapis/api/serviceconfig;serviceconfi"
  "g\242\002\004GAPIb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto = {
    false, false, 416, descriptor_table_protodef_google_2fapi_2fsystem_5fparameter_2eproto,
    "google/api/system_parameter.proto",
    &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_google_2fapi_2fsystem_5fparameter_2eproto::offsets,
    file_level_metadata_google_2fapi_2fsystem_5fparameter_2eproto, file_level_enum_descriptors_google_2fapi_2fsystem_5fparameter_2eproto,
    file_level_service_descriptors_google_2fapi_2fsystem_5fparameter_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fsystem_5fparameter_2eproto(&descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto);
namespace google {
namespace api {

// ===================================================================

class SystemParameters::_Internal {
 public:
};

SystemParameters::SystemParameters(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:google.api.SystemParameters)
}
SystemParameters::SystemParameters(const SystemParameters& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SystemParameters* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.rules_){from._impl_.rules_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.SystemParameters)
}

inline void SystemParameters::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.rules_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SystemParameters::~SystemParameters() {
  // @@protoc_insertion_point(destructor:google.api.SystemParameters)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SystemParameters::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.rules_.~RepeatedPtrField();
}

void SystemParameters::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SystemParameters::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.SystemParameters)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.rules_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SystemParameters::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .google.api.SystemParameterRule rules = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rules(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* SystemParameters::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.SystemParameters)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.SystemParameterRule rules = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_rules_size()); i < n; i++) {
    const auto& repfield = this->_internal_rules(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.SystemParameters)
  return target;
}

size_t SystemParameters::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.SystemParameters)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.SystemParameterRule rules = 1;
  total_size += 1UL * this->_internal_rules_size();
  for (const auto& msg : this->_impl_.rules_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SystemParameters::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SystemParameters::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SystemParameters::GetClassData() const { return &_class_data_; }


void SystemParameters::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SystemParameters*>(&to_msg);
  auto& from = static_cast<const SystemParameters&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.api.SystemParameters)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.rules_.MergeFrom(from._impl_.rules_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SystemParameters::CopyFrom(const SystemParameters& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.SystemParameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemParameters::IsInitialized() const {
  return true;
}

void SystemParameters::InternalSwap(SystemParameters* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.rules_.InternalSwap(&other->_impl_.rules_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SystemParameters::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_getter, &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_once,
      file_level_metadata_google_2fapi_2fsystem_5fparameter_2eproto[0]);
}

// ===================================================================

class SystemParameterRule::_Internal {
 public:
};

SystemParameterRule::SystemParameterRule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:google.api.SystemParameterRule)
}
SystemParameterRule::SystemParameterRule(const SystemParameterRule& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SystemParameterRule* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.parameters_){from._impl_.parameters_}
    , decltype(_impl_.selector_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.selector_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.selector_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_selector().empty()) {
    _this->_impl_.selector_.Set(from._internal_selector(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:google.api.SystemParameterRule)
}

inline void SystemParameterRule::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.parameters_){arena}
    , decltype(_impl_.selector_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.selector_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.selector_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SystemParameterRule::~SystemParameterRule() {
  // @@protoc_insertion_point(destructor:google.api.SystemParameterRule)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SystemParameterRule::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.parameters_.~RepeatedPtrField();
  _impl_.selector_.Destroy();
}

void SystemParameterRule::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SystemParameterRule::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.SystemParameterRule)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.parameters_.Clear();
  _impl_.selector_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SystemParameterRule::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string selector = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_selector();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.SystemParameterRule.selector"));
        } else
          goto handle_unusual;
        continue;
      // repeated .google.api.SystemParameter parameters = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_parameters(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* SystemParameterRule::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.SystemParameterRule)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string selector = 1;
  if (!this->_internal_selector().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_selector().data(), static_cast<int>(this->_internal_selector().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.SystemParameterRule.selector");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_selector(), target);
  }

  // repeated .google.api.SystemParameter parameters = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_parameters_size()); i < n; i++) {
    const auto& repfield = this->_internal_parameters(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.SystemParameterRule)
  return target;
}

size_t SystemParameterRule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.SystemParameterRule)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.SystemParameter parameters = 2;
  total_size += 1UL * this->_internal_parameters_size();
  for (const auto& msg : this->_impl_.parameters_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string selector = 1;
  if (!this->_internal_selector().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_selector());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SystemParameterRule::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SystemParameterRule::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SystemParameterRule::GetClassData() const { return &_class_data_; }


void SystemParameterRule::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SystemParameterRule*>(&to_msg);
  auto& from = static_cast<const SystemParameterRule&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.api.SystemParameterRule)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.parameters_.MergeFrom(from._impl_.parameters_);
  if (!from._internal_selector().empty()) {
    _this->_internal_set_selector(from._internal_selector());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SystemParameterRule::CopyFrom(const SystemParameterRule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.SystemParameterRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemParameterRule::IsInitialized() const {
  return true;
}

void SystemParameterRule::InternalSwap(SystemParameterRule* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.parameters_.InternalSwap(&other->_impl_.parameters_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.selector_, lhs_arena,
      &other->_impl_.selector_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SystemParameterRule::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_getter, &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_once,
      file_level_metadata_google_2fapi_2fsystem_5fparameter_2eproto[1]);
}

// ===================================================================

class SystemParameter::_Internal {
 public:
};

SystemParameter::SystemParameter(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:google.api.SystemParameter)
}
SystemParameter::SystemParameter(const SystemParameter& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SystemParameter* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.http_header_){}
    , decltype(_impl_.url_query_parameter_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.http_header_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.http_header_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_http_header().empty()) {
    _this->_impl_.http_header_.Set(from._internal_http_header(), 
      _this->GetArenaForAllocation());
  }
  _impl_.url_query_parameter_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.url_query_parameter_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_url_query_parameter().empty()) {
    _this->_impl_.url_query_parameter_.Set(from._internal_url_query_parameter(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:google.api.SystemParameter)
}

inline void SystemParameter::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.http_header_){}
    , decltype(_impl_.url_query_parameter_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.http_header_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.http_header_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.url_query_parameter_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.url_query_parameter_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SystemParameter::~SystemParameter() {
  // @@protoc_insertion_point(destructor:google.api.SystemParameter)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SystemParameter::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  _impl_.http_header_.Destroy();
  _impl_.url_query_parameter_.Destroy();
}

void SystemParameter::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SystemParameter::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.SystemParameter)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.http_header_.ClearToEmpty();
  _impl_.url_query_parameter_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SystemParameter::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.SystemParameter.name"));
        } else
          goto handle_unusual;
        continue;
      // string http_header = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_http_header();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.SystemParameter.http_header"));
        } else
          goto handle_unusual;
        continue;
      // string url_query_parameter = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_url_query_parameter();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.SystemParameter.url_query_parameter"));
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

uint8_t* SystemParameter::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.SystemParameter)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.SystemParameter.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // string http_header = 2;
  if (!this->_internal_http_header().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_http_header().data(), static_cast<int>(this->_internal_http_header().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.SystemParameter.http_header");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_http_header(), target);
  }

  // string url_query_parameter = 3;
  if (!this->_internal_url_query_parameter().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_url_query_parameter().data(), static_cast<int>(this->_internal_url_query_parameter().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.SystemParameter.url_query_parameter");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_url_query_parameter(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.SystemParameter)
  return target;
}

size_t SystemParameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.SystemParameter)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string http_header = 2;
  if (!this->_internal_http_header().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_http_header());
  }

  // string url_query_parameter = 3;
  if (!this->_internal_url_query_parameter().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_url_query_parameter());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SystemParameter::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SystemParameter::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SystemParameter::GetClassData() const { return &_class_data_; }


void SystemParameter::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SystemParameter*>(&to_msg);
  auto& from = static_cast<const SystemParameter&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.api.SystemParameter)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_http_header().empty()) {
    _this->_internal_set_http_header(from._internal_http_header());
  }
  if (!from._internal_url_query_parameter().empty()) {
    _this->_internal_set_url_query_parameter(from._internal_url_query_parameter());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SystemParameter::CopyFrom(const SystemParameter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.SystemParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemParameter::IsInitialized() const {
  return true;
}

void SystemParameter::InternalSwap(SystemParameter* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.http_header_, lhs_arena,
      &other->_impl_.http_header_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.url_query_parameter_, lhs_arena,
      &other->_impl_.url_query_parameter_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SystemParameter::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_getter, &descriptor_table_google_2fapi_2fsystem_5fparameter_2eproto_once,
      file_level_metadata_google_2fapi_2fsystem_5fparameter_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::SystemParameters*
Arena::CreateMaybeMessage< ::google::api::SystemParameters >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::SystemParameters >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::SystemParameterRule*
Arena::CreateMaybeMessage< ::google::api::SystemParameterRule >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::SystemParameterRule >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::SystemParameter*
Arena::CreateMaybeMessage< ::google::api::SystemParameter >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::SystemParameter >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
