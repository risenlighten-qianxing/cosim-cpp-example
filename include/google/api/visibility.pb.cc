// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/visibility.proto

#include "google/api/visibility.pb.h"

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
PROTOBUF_CONSTEXPR Visibility::Visibility(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.rules_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct VisibilityDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VisibilityDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VisibilityDefaultTypeInternal() {}
  union {
    Visibility _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VisibilityDefaultTypeInternal _Visibility_default_instance_;
PROTOBUF_CONSTEXPR VisibilityRule::VisibilityRule(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.selector_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.restriction_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct VisibilityRuleDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VisibilityRuleDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VisibilityRuleDefaultTypeInternal() {}
  union {
    VisibilityRule _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VisibilityRuleDefaultTypeInternal _VisibilityRule_default_instance_;
}  // namespace api
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2fapi_2fvisibility_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fvisibility_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fvisibility_2eproto = nullptr;

const uint32_t TableStruct_google_2fapi_2fvisibility_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::Visibility, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::Visibility, _impl_.rules_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::VisibilityRule, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::VisibilityRule, _impl_.selector_),
  PROTOBUF_FIELD_OFFSET(::google::api::VisibilityRule, _impl_.restriction_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::google::api::Visibility)},
  { 7, -1, -1, sizeof(::google::api::VisibilityRule)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::google::api::_Visibility_default_instance_._instance,
  &::google::api::_VisibilityRule_default_instance_._instance,
};

const char descriptor_table_protodef_google_2fapi_2fvisibility_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033google/api/visibility.proto\022\ngoogle.ap"
  "i\032 google/protobuf/descriptor.proto\"7\n\nV"
  "isibility\022)\n\005rules\030\001 \003(\0132\032.google.api.Vi"
  "sibilityRule\"7\n\016VisibilityRule\022\020\n\010select"
  "or\030\001 \001(\t\022\023\n\013restriction\030\002 \001(\t:T\n\017enum_vi"
  "sibility\022\034.google.protobuf.EnumOptions\030\257"
  "\312\274\" \001(\0132\032.google.api.VisibilityRule:Z\n\020v"
  "alue_visibility\022!.google.protobuf.EnumVa"
  "lueOptions\030\257\312\274\" \001(\0132\032.google.api.Visibil"
  "ityRule:V\n\020field_visibility\022\035.google.pro"
  "tobuf.FieldOptions\030\257\312\274\" \001(\0132\032.google.api"
  ".VisibilityRule:Z\n\022message_visibility\022\037."
  "google.protobuf.MessageOptions\030\257\312\274\" \001(\0132"
  "\032.google.api.VisibilityRule:X\n\021method_vi"
  "sibility\022\036.google.protobuf.MethodOptions"
  "\030\257\312\274\" \001(\0132\032.google.api.VisibilityRule:V\n"
  "\016api_visibility\022\037.google.protobuf.Servic"
  "eOptions\030\257\312\274\" \001(\0132\032.google.api.Visibilit"
  "yRuleBn\n\016com.google.apiB\017VisibilityProto"
  "P\001Z\?google.golang.org/genproto/googleapi"
  "s/api/visibility;visibility\370\001\001\242\002\004GAPIb\006p"
  "roto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fapi_2fvisibility_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::_pbi::once_flag descriptor_table_google_2fapi_2fvisibility_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fapi_2fvisibility_2eproto = {
    false, false, 845, descriptor_table_protodef_google_2fapi_2fvisibility_2eproto,
    "google/api/visibility.proto",
    &descriptor_table_google_2fapi_2fvisibility_2eproto_once, descriptor_table_google_2fapi_2fvisibility_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_google_2fapi_2fvisibility_2eproto::offsets,
    file_level_metadata_google_2fapi_2fvisibility_2eproto, file_level_enum_descriptors_google_2fapi_2fvisibility_2eproto,
    file_level_service_descriptors_google_2fapi_2fvisibility_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fapi_2fvisibility_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fvisibility_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fvisibility_2eproto(&descriptor_table_google_2fapi_2fvisibility_2eproto);
namespace google {
namespace api {

// ===================================================================

class Visibility::_Internal {
 public:
};

Visibility::Visibility(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:google.api.Visibility)
}
Visibility::Visibility(const Visibility& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Visibility* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.rules_){from._impl_.rules_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Visibility)
}

inline void Visibility::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.rules_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Visibility::~Visibility() {
  // @@protoc_insertion_point(destructor:google.api.Visibility)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Visibility::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.rules_.~RepeatedPtrField();
}

void Visibility::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Visibility::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Visibility)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.rules_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Visibility::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .google.api.VisibilityRule rules = 1;
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

uint8_t* Visibility::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Visibility)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.VisibilityRule rules = 1;
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
  // @@protoc_insertion_point(serialize_to_array_end:google.api.Visibility)
  return target;
}

size_t Visibility::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Visibility)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.api.VisibilityRule rules = 1;
  total_size += 1UL * this->_internal_rules_size();
  for (const auto& msg : this->_impl_.rules_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Visibility::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Visibility::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Visibility::GetClassData() const { return &_class_data_; }


void Visibility::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Visibility*>(&to_msg);
  auto& from = static_cast<const Visibility&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.api.Visibility)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.rules_.MergeFrom(from._impl_.rules_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Visibility::CopyFrom(const Visibility& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Visibility)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Visibility::IsInitialized() const {
  return true;
}

void Visibility::InternalSwap(Visibility* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.rules_.InternalSwap(&other->_impl_.rules_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Visibility::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fvisibility_2eproto_getter, &descriptor_table_google_2fapi_2fvisibility_2eproto_once,
      file_level_metadata_google_2fapi_2fvisibility_2eproto[0]);
}

// ===================================================================

class VisibilityRule::_Internal {
 public:
};

VisibilityRule::VisibilityRule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:google.api.VisibilityRule)
}
VisibilityRule::VisibilityRule(const VisibilityRule& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  VisibilityRule* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.selector_){}
    , decltype(_impl_.restriction_){}
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
  _impl_.restriction_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.restriction_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_restriction().empty()) {
    _this->_impl_.restriction_.Set(from._internal_restriction(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:google.api.VisibilityRule)
}

inline void VisibilityRule::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.selector_){}
    , decltype(_impl_.restriction_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.selector_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.selector_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.restriction_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.restriction_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

VisibilityRule::~VisibilityRule() {
  // @@protoc_insertion_point(destructor:google.api.VisibilityRule)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void VisibilityRule::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.selector_.Destroy();
  _impl_.restriction_.Destroy();
}

void VisibilityRule::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void VisibilityRule::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.VisibilityRule)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.selector_.ClearToEmpty();
  _impl_.restriction_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VisibilityRule::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "google.api.VisibilityRule.selector"));
        } else
          goto handle_unusual;
        continue;
      // string restriction = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_restriction();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.VisibilityRule.restriction"));
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

uint8_t* VisibilityRule::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.VisibilityRule)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string selector = 1;
  if (!this->_internal_selector().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_selector().data(), static_cast<int>(this->_internal_selector().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.VisibilityRule.selector");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_selector(), target);
  }

  // string restriction = 2;
  if (!this->_internal_restriction().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_restriction().data(), static_cast<int>(this->_internal_restriction().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.VisibilityRule.restriction");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_restriction(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.VisibilityRule)
  return target;
}

size_t VisibilityRule::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.VisibilityRule)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string selector = 1;
  if (!this->_internal_selector().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_selector());
  }

  // string restriction = 2;
  if (!this->_internal_restriction().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_restriction());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData VisibilityRule::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    VisibilityRule::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*VisibilityRule::GetClassData() const { return &_class_data_; }


void VisibilityRule::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<VisibilityRule*>(&to_msg);
  auto& from = static_cast<const VisibilityRule&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.api.VisibilityRule)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_selector().empty()) {
    _this->_internal_set_selector(from._internal_selector());
  }
  if (!from._internal_restriction().empty()) {
    _this->_internal_set_restriction(from._internal_restriction());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void VisibilityRule::CopyFrom(const VisibilityRule& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.VisibilityRule)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VisibilityRule::IsInitialized() const {
  return true;
}

void VisibilityRule::InternalSwap(VisibilityRule* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.selector_, lhs_arena,
      &other->_impl_.selector_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.restriction_, lhs_arena,
      &other->_impl_.restriction_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata VisibilityRule::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fvisibility_2eproto_getter, &descriptor_table_google_2fapi_2fvisibility_2eproto_once,
      file_level_metadata_google_2fapi_2fvisibility_2eproto[1]);
}
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false>
  enum_visibility(kEnumVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false>
  value_visibility(kValueVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false>
  field_visibility(kFieldVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false>
  message_visibility(kMessageVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false>
  method_visibility(kMethodVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::VisibilityRule >, 11, false>
  api_visibility(kApiVisibilityFieldNumber, ::google::api::VisibilityRule::default_instance(), nullptr);

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::Visibility*
Arena::CreateMaybeMessage< ::google::api::Visibility >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::Visibility >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::VisibilityRule*
Arena::CreateMaybeMessage< ::google::api::VisibilityRule >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::VisibilityRule >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
