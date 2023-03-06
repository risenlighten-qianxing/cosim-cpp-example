// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/usage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fusage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fusage_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fusage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fusage_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fusage_2eproto;
namespace google {
namespace api {
class Usage;
struct UsageDefaultTypeInternal;
extern UsageDefaultTypeInternal _Usage_default_instance_;
class UsageRule;
struct UsageRuleDefaultTypeInternal;
extern UsageRuleDefaultTypeInternal _UsageRule_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::Usage* Arena::CreateMaybeMessage<::google::api::Usage>(Arena*);
template<> ::google::api::UsageRule* Arena::CreateMaybeMessage<::google::api::UsageRule>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class Usage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.Usage) */ {
 public:
  inline Usage() : Usage(nullptr) {}
  ~Usage() override;
  explicit PROTOBUF_CONSTEXPR Usage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Usage(const Usage& from);
  Usage(Usage&& from) noexcept
    : Usage() {
    *this = ::std::move(from);
  }

  inline Usage& operator=(const Usage& from) {
    CopyFrom(from);
    return *this;
  }
  inline Usage& operator=(Usage&& from) noexcept {
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
  static const Usage& default_instance() {
    return *internal_default_instance();
  }
  static inline const Usage* internal_default_instance() {
    return reinterpret_cast<const Usage*>(
               &_Usage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Usage& a, Usage& b) {
    a.Swap(&b);
  }
  inline void Swap(Usage* other) {
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
  void UnsafeArenaSwap(Usage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Usage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Usage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Usage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Usage& from) {
    Usage::MergeImpl(*this, from);
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
  void InternalSwap(Usage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.Usage";
  }
  protected:
  explicit Usage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRequirementsFieldNumber = 1,
    kRulesFieldNumber = 6,
    kProducerNotificationChannelFieldNumber = 7,
  };
  // repeated string requirements = 1;
  int requirements_size() const;
  private:
  int _internal_requirements_size() const;
  public:
  void clear_requirements();
  const std::string& requirements(int index) const;
  std::string* mutable_requirements(int index);
  void set_requirements(int index, const std::string& value);
  void set_requirements(int index, std::string&& value);
  void set_requirements(int index, const char* value);
  void set_requirements(int index, const char* value, size_t size);
  std::string* add_requirements();
  void add_requirements(const std::string& value);
  void add_requirements(std::string&& value);
  void add_requirements(const char* value);
  void add_requirements(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& requirements() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_requirements();
  private:
  const std::string& _internal_requirements(int index) const;
  std::string* _internal_add_requirements();
  public:

  // repeated .google.api.UsageRule rules = 6;
  int rules_size() const;
  private:
  int _internal_rules_size() const;
  public:
  void clear_rules();
  ::google::api::UsageRule* mutable_rules(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::UsageRule >*
      mutable_rules();
  private:
  const ::google::api::UsageRule& _internal_rules(int index) const;
  ::google::api::UsageRule* _internal_add_rules();
  public:
  const ::google::api::UsageRule& rules(int index) const;
  ::google::api::UsageRule* add_rules();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::UsageRule >&
      rules() const;

  // string producer_notification_channel = 7;
  void clear_producer_notification_channel();
  const std::string& producer_notification_channel() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_producer_notification_channel(ArgT0&& arg0, ArgT... args);
  std::string* mutable_producer_notification_channel();
  PROTOBUF_NODISCARD std::string* release_producer_notification_channel();
  void set_allocated_producer_notification_channel(std::string* producer_notification_channel);
  private:
  const std::string& _internal_producer_notification_channel() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_producer_notification_channel(const std::string& value);
  std::string* _internal_mutable_producer_notification_channel();
  public:

  // @@protoc_insertion_point(class_scope:google.api.Usage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> requirements_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::UsageRule > rules_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr producer_notification_channel_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fapi_2fusage_2eproto;
};
// -------------------------------------------------------------------

class UsageRule final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.UsageRule) */ {
 public:
  inline UsageRule() : UsageRule(nullptr) {}
  ~UsageRule() override;
  explicit PROTOBUF_CONSTEXPR UsageRule(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UsageRule(const UsageRule& from);
  UsageRule(UsageRule&& from) noexcept
    : UsageRule() {
    *this = ::std::move(from);
  }

  inline UsageRule& operator=(const UsageRule& from) {
    CopyFrom(from);
    return *this;
  }
  inline UsageRule& operator=(UsageRule&& from) noexcept {
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
  static const UsageRule& default_instance() {
    return *internal_default_instance();
  }
  static inline const UsageRule* internal_default_instance() {
    return reinterpret_cast<const UsageRule*>(
               &_UsageRule_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UsageRule& a, UsageRule& b) {
    a.Swap(&b);
  }
  inline void Swap(UsageRule* other) {
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
  void UnsafeArenaSwap(UsageRule* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UsageRule* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UsageRule>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UsageRule& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UsageRule& from) {
    UsageRule::MergeImpl(*this, from);
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
  void InternalSwap(UsageRule* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.UsageRule";
  }
  protected:
  explicit UsageRule(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSelectorFieldNumber = 1,
    kAllowUnregisteredCallsFieldNumber = 2,
    kSkipServiceControlFieldNumber = 3,
  };
  // string selector = 1;
  void clear_selector();
  const std::string& selector() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_selector(ArgT0&& arg0, ArgT... args);
  std::string* mutable_selector();
  PROTOBUF_NODISCARD std::string* release_selector();
  void set_allocated_selector(std::string* selector);
  private:
  const std::string& _internal_selector() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_selector(const std::string& value);
  std::string* _internal_mutable_selector();
  public:

  // bool allow_unregistered_calls = 2;
  void clear_allow_unregistered_calls();
  bool allow_unregistered_calls() const;
  void set_allow_unregistered_calls(bool value);
  private:
  bool _internal_allow_unregistered_calls() const;
  void _internal_set_allow_unregistered_calls(bool value);
  public:

  // bool skip_service_control = 3;
  void clear_skip_service_control();
  bool skip_service_control() const;
  void set_skip_service_control(bool value);
  private:
  bool _internal_skip_service_control() const;
  void _internal_set_skip_service_control(bool value);
  public:

  // @@protoc_insertion_point(class_scope:google.api.UsageRule)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr selector_;
    bool allow_unregistered_calls_;
    bool skip_service_control_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fapi_2fusage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Usage

// repeated string requirements = 1;
inline int Usage::_internal_requirements_size() const {
  return _impl_.requirements_.size();
}
inline int Usage::requirements_size() const {
  return _internal_requirements_size();
}
inline void Usage::clear_requirements() {
  _impl_.requirements_.Clear();
}
inline std::string* Usage::add_requirements() {
  std::string* _s = _internal_add_requirements();
  // @@protoc_insertion_point(field_add_mutable:google.api.Usage.requirements)
  return _s;
}
inline const std::string& Usage::_internal_requirements(int index) const {
  return _impl_.requirements_.Get(index);
}
inline const std::string& Usage::requirements(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Usage.requirements)
  return _internal_requirements(index);
}
inline std::string* Usage::mutable_requirements(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Usage.requirements)
  return _impl_.requirements_.Mutable(index);
}
inline void Usage::set_requirements(int index, const std::string& value) {
  _impl_.requirements_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:google.api.Usage.requirements)
}
inline void Usage::set_requirements(int index, std::string&& value) {
  _impl_.requirements_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:google.api.Usage.requirements)
}
inline void Usage::set_requirements(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.requirements_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Usage.requirements)
}
inline void Usage::set_requirements(int index, const char* value, size_t size) {
  _impl_.requirements_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Usage.requirements)
}
inline std::string* Usage::_internal_add_requirements() {
  return _impl_.requirements_.Add();
}
inline void Usage::add_requirements(const std::string& value) {
  _impl_.requirements_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Usage.requirements)
}
inline void Usage::add_requirements(std::string&& value) {
  _impl_.requirements_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Usage.requirements)
}
inline void Usage::add_requirements(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.requirements_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Usage.requirements)
}
inline void Usage::add_requirements(const char* value, size_t size) {
  _impl_.requirements_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Usage.requirements)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Usage::requirements() const {
  // @@protoc_insertion_point(field_list:google.api.Usage.requirements)
  return _impl_.requirements_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Usage::mutable_requirements() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Usage.requirements)
  return &_impl_.requirements_;
}

// repeated .google.api.UsageRule rules = 6;
inline int Usage::_internal_rules_size() const {
  return _impl_.rules_.size();
}
inline int Usage::rules_size() const {
  return _internal_rules_size();
}
inline void Usage::clear_rules() {
  _impl_.rules_.Clear();
}
inline ::google::api::UsageRule* Usage::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Usage.rules)
  return _impl_.rules_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::UsageRule >*
Usage::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Usage.rules)
  return &_impl_.rules_;
}
inline const ::google::api::UsageRule& Usage::_internal_rules(int index) const {
  return _impl_.rules_.Get(index);
}
inline const ::google::api::UsageRule& Usage::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Usage.rules)
  return _internal_rules(index);
}
inline ::google::api::UsageRule* Usage::_internal_add_rules() {
  return _impl_.rules_.Add();
}
inline ::google::api::UsageRule* Usage::add_rules() {
  ::google::api::UsageRule* _add = _internal_add_rules();
  // @@protoc_insertion_point(field_add:google.api.Usage.rules)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::UsageRule >&
Usage::rules() const {
  // @@protoc_insertion_point(field_list:google.api.Usage.rules)
  return _impl_.rules_;
}

// string producer_notification_channel = 7;
inline void Usage::clear_producer_notification_channel() {
  _impl_.producer_notification_channel_.ClearToEmpty();
}
inline const std::string& Usage::producer_notification_channel() const {
  // @@protoc_insertion_point(field_get:google.api.Usage.producer_notification_channel)
  return _internal_producer_notification_channel();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Usage::set_producer_notification_channel(ArgT0&& arg0, ArgT... args) {
 
 _impl_.producer_notification_channel_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.Usage.producer_notification_channel)
}
inline std::string* Usage::mutable_producer_notification_channel() {
  std::string* _s = _internal_mutable_producer_notification_channel();
  // @@protoc_insertion_point(field_mutable:google.api.Usage.producer_notification_channel)
  return _s;
}
inline const std::string& Usage::_internal_producer_notification_channel() const {
  return _impl_.producer_notification_channel_.Get();
}
inline void Usage::_internal_set_producer_notification_channel(const std::string& value) {
  
  _impl_.producer_notification_channel_.Set(value, GetArenaForAllocation());
}
inline std::string* Usage::_internal_mutable_producer_notification_channel() {
  
  return _impl_.producer_notification_channel_.Mutable(GetArenaForAllocation());
}
inline std::string* Usage::release_producer_notification_channel() {
  // @@protoc_insertion_point(field_release:google.api.Usage.producer_notification_channel)
  return _impl_.producer_notification_channel_.Release();
}
inline void Usage::set_allocated_producer_notification_channel(std::string* producer_notification_channel) {
  if (producer_notification_channel != nullptr) {
    
  } else {
    
  }
  _impl_.producer_notification_channel_.SetAllocated(producer_notification_channel, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.producer_notification_channel_.IsDefault()) {
    _impl_.producer_notification_channel_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.Usage.producer_notification_channel)
}

// -------------------------------------------------------------------

// UsageRule

// string selector = 1;
inline void UsageRule::clear_selector() {
  _impl_.selector_.ClearToEmpty();
}
inline const std::string& UsageRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.UsageRule.selector)
  return _internal_selector();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void UsageRule::set_selector(ArgT0&& arg0, ArgT... args) {
 
 _impl_.selector_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:google.api.UsageRule.selector)
}
inline std::string* UsageRule::mutable_selector() {
  std::string* _s = _internal_mutable_selector();
  // @@protoc_insertion_point(field_mutable:google.api.UsageRule.selector)
  return _s;
}
inline const std::string& UsageRule::_internal_selector() const {
  return _impl_.selector_.Get();
}
inline void UsageRule::_internal_set_selector(const std::string& value) {
  
  _impl_.selector_.Set(value, GetArenaForAllocation());
}
inline std::string* UsageRule::_internal_mutable_selector() {
  
  return _impl_.selector_.Mutable(GetArenaForAllocation());
}
inline std::string* UsageRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.UsageRule.selector)
  return _impl_.selector_.Release();
}
inline void UsageRule::set_allocated_selector(std::string* selector) {
  if (selector != nullptr) {
    
  } else {
    
  }
  _impl_.selector_.SetAllocated(selector, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.selector_.IsDefault()) {
    _impl_.selector_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.UsageRule.selector)
}

// bool allow_unregistered_calls = 2;
inline void UsageRule::clear_allow_unregistered_calls() {
  _impl_.allow_unregistered_calls_ = false;
}
inline bool UsageRule::_internal_allow_unregistered_calls() const {
  return _impl_.allow_unregistered_calls_;
}
inline bool UsageRule::allow_unregistered_calls() const {
  // @@protoc_insertion_point(field_get:google.api.UsageRule.allow_unregistered_calls)
  return _internal_allow_unregistered_calls();
}
inline void UsageRule::_internal_set_allow_unregistered_calls(bool value) {
  
  _impl_.allow_unregistered_calls_ = value;
}
inline void UsageRule::set_allow_unregistered_calls(bool value) {
  _internal_set_allow_unregistered_calls(value);
  // @@protoc_insertion_point(field_set:google.api.UsageRule.allow_unregistered_calls)
}

// bool skip_service_control = 3;
inline void UsageRule::clear_skip_service_control() {
  _impl_.skip_service_control_ = false;
}
inline bool UsageRule::_internal_skip_service_control() const {
  return _impl_.skip_service_control_;
}
inline bool UsageRule::skip_service_control() const {
  // @@protoc_insertion_point(field_get:google.api.UsageRule.skip_service_control)
  return _internal_skip_service_control();
}
inline void UsageRule::_internal_set_skip_service_control(bool value) {
  
  _impl_.skip_service_control_ = value;
}
inline void UsageRule::set_skip_service_control(bool value) {
  _internal_set_skip_service_control(value);
  // @@protoc_insertion_point(field_set:google.api.UsageRule.skip_service_control)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fusage_2eproto
