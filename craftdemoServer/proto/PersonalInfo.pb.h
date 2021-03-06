// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PersonalInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PersonalInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PersonalInfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PersonalInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PersonalInfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PersonalInfo_2eproto;
class PersonalInfoReply;
struct PersonalInfoReplyDefaultTypeInternal;
extern PersonalInfoReplyDefaultTypeInternal _PersonalInfoReply_default_instance_;
class PersonalInfoRequest;
struct PersonalInfoRequestDefaultTypeInternal;
extern PersonalInfoRequestDefaultTypeInternal _PersonalInfoRequest_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::PersonalInfoReply* Arena::CreateMaybeMessage<::PersonalInfoReply>(Arena*);
template<> ::PersonalInfoRequest* Arena::CreateMaybeMessage<::PersonalInfoRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class PersonalInfoRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PersonalInfoRequest) */ {
 public:
  inline PersonalInfoRequest() : PersonalInfoRequest(nullptr) {}
  ~PersonalInfoRequest() override;
  explicit constexpr PersonalInfoRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PersonalInfoRequest(const PersonalInfoRequest& from);
  PersonalInfoRequest(PersonalInfoRequest&& from) noexcept
    : PersonalInfoRequest() {
    *this = ::std::move(from);
  }

  inline PersonalInfoRequest& operator=(const PersonalInfoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PersonalInfoRequest& operator=(PersonalInfoRequest&& from) noexcept {
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
  static const PersonalInfoRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const PersonalInfoRequest* internal_default_instance() {
    return reinterpret_cast<const PersonalInfoRequest*>(
               &_PersonalInfoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PersonalInfoRequest& a, PersonalInfoRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PersonalInfoRequest* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PersonalInfoRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PersonalInfoRequest* New() const final {
    return new PersonalInfoRequest();
  }

  PersonalInfoRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PersonalInfoRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PersonalInfoRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PersonalInfoRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PersonalInfoRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PersonalInfoRequest";
  }
  protected:
  explicit PersonalInfoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFirstNameFieldNumber = 1,
    kLastNameFieldNumber = 2,
    kDateOfBirthFieldNumber = 3,
    kEmailFieldNumber = 4,
    kPhoneNumberFieldNumber = 5,
    kTimestampFieldNumber = 6,
  };
  // string firstName = 1;
  void clear_firstname();
  const std::string& firstname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_firstname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_firstname();
  PROTOBUF_MUST_USE_RESULT std::string* release_firstname();
  void set_allocated_firstname(std::string* firstname);
  private:
  const std::string& _internal_firstname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_firstname(const std::string& value);
  std::string* _internal_mutable_firstname();
  public:

  // string lastName = 2;
  void clear_lastname();
  const std::string& lastname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_lastname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_lastname();
  PROTOBUF_MUST_USE_RESULT std::string* release_lastname();
  void set_allocated_lastname(std::string* lastname);
  private:
  const std::string& _internal_lastname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_lastname(const std::string& value);
  std::string* _internal_mutable_lastname();
  public:

  // string dateOfBirth = 3;
  void clear_dateofbirth();
  const std::string& dateofbirth() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_dateofbirth(ArgT0&& arg0, ArgT... args);
  std::string* mutable_dateofbirth();
  PROTOBUF_MUST_USE_RESULT std::string* release_dateofbirth();
  void set_allocated_dateofbirth(std::string* dateofbirth);
  private:
  const std::string& _internal_dateofbirth() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_dateofbirth(const std::string& value);
  std::string* _internal_mutable_dateofbirth();
  public:

  // string email = 4;
  void clear_email();
  const std::string& email() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_email(ArgT0&& arg0, ArgT... args);
  std::string* mutable_email();
  PROTOBUF_MUST_USE_RESULT std::string* release_email();
  void set_allocated_email(std::string* email);
  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(const std::string& value);
  std::string* _internal_mutable_email();
  public:

  // string phoneNumber = 5;
  void clear_phonenumber();
  const std::string& phonenumber() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_phonenumber(ArgT0&& arg0, ArgT... args);
  std::string* mutable_phonenumber();
  PROTOBUF_MUST_USE_RESULT std::string* release_phonenumber();
  void set_allocated_phonenumber(std::string* phonenumber);
  private:
  const std::string& _internal_phonenumber() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_phonenumber(const std::string& value);
  std::string* _internal_mutable_phonenumber();
  public:

  // int64 timestamp = 6;
  void clear_timestamp();
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_timestamp() const;
  void _internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:PersonalInfoRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr firstname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr lastname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr dateofbirth_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr email_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr phonenumber_;
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PersonalInfo_2eproto;
};
// -------------------------------------------------------------------

class PersonalInfoReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PersonalInfoReply) */ {
 public:
  inline PersonalInfoReply() : PersonalInfoReply(nullptr) {}
  ~PersonalInfoReply() override;
  explicit constexpr PersonalInfoReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PersonalInfoReply(const PersonalInfoReply& from);
  PersonalInfoReply(PersonalInfoReply&& from) noexcept
    : PersonalInfoReply() {
    *this = ::std::move(from);
  }

  inline PersonalInfoReply& operator=(const PersonalInfoReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline PersonalInfoReply& operator=(PersonalInfoReply&& from) noexcept {
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
  static const PersonalInfoReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const PersonalInfoReply* internal_default_instance() {
    return reinterpret_cast<const PersonalInfoReply*>(
               &_PersonalInfoReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PersonalInfoReply& a, PersonalInfoReply& b) {
    a.Swap(&b);
  }
  inline void Swap(PersonalInfoReply* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PersonalInfoReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PersonalInfoReply* New() const final {
    return new PersonalInfoReply();
  }

  PersonalInfoReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PersonalInfoReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PersonalInfoReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PersonalInfoReply& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PersonalInfoReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PersonalInfoReply";
  }
  protected:
  explicit PersonalInfoReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_MUST_USE_RESULT std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:PersonalInfoReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PersonalInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PersonalInfoRequest

// string firstName = 1;
inline void PersonalInfoRequest::clear_firstname() {
  firstname_.ClearToEmpty();
}
inline const std::string& PersonalInfoRequest::firstname() const {
  // @@protoc_insertion_point(field_get:PersonalInfoRequest.firstName)
  return _internal_firstname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PersonalInfoRequest::set_firstname(ArgT0&& arg0, ArgT... args) {
 
 firstname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PersonalInfoRequest.firstName)
}
inline std::string* PersonalInfoRequest::mutable_firstname() {
  std::string* _s = _internal_mutable_firstname();
  // @@protoc_insertion_point(field_mutable:PersonalInfoRequest.firstName)
  return _s;
}
inline const std::string& PersonalInfoRequest::_internal_firstname() const {
  return firstname_.Get();
}
inline void PersonalInfoRequest::_internal_set_firstname(const std::string& value) {
  
  firstname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::_internal_mutable_firstname() {
  
  return firstname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::release_firstname() {
  // @@protoc_insertion_point(field_release:PersonalInfoRequest.firstName)
  return firstname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PersonalInfoRequest::set_allocated_firstname(std::string* firstname) {
  if (firstname != nullptr) {
    
  } else {
    
  }
  firstname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), firstname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:PersonalInfoRequest.firstName)
}

// string lastName = 2;
inline void PersonalInfoRequest::clear_lastname() {
  lastname_.ClearToEmpty();
}
inline const std::string& PersonalInfoRequest::lastname() const {
  // @@protoc_insertion_point(field_get:PersonalInfoRequest.lastName)
  return _internal_lastname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PersonalInfoRequest::set_lastname(ArgT0&& arg0, ArgT... args) {
 
 lastname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PersonalInfoRequest.lastName)
}
inline std::string* PersonalInfoRequest::mutable_lastname() {
  std::string* _s = _internal_mutable_lastname();
  // @@protoc_insertion_point(field_mutable:PersonalInfoRequest.lastName)
  return _s;
}
inline const std::string& PersonalInfoRequest::_internal_lastname() const {
  return lastname_.Get();
}
inline void PersonalInfoRequest::_internal_set_lastname(const std::string& value) {
  
  lastname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::_internal_mutable_lastname() {
  
  return lastname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::release_lastname() {
  // @@protoc_insertion_point(field_release:PersonalInfoRequest.lastName)
  return lastname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PersonalInfoRequest::set_allocated_lastname(std::string* lastname) {
  if (lastname != nullptr) {
    
  } else {
    
  }
  lastname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), lastname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:PersonalInfoRequest.lastName)
}

// string dateOfBirth = 3;
inline void PersonalInfoRequest::clear_dateofbirth() {
  dateofbirth_.ClearToEmpty();
}
inline const std::string& PersonalInfoRequest::dateofbirth() const {
  // @@protoc_insertion_point(field_get:PersonalInfoRequest.dateOfBirth)
  return _internal_dateofbirth();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PersonalInfoRequest::set_dateofbirth(ArgT0&& arg0, ArgT... args) {
 
 dateofbirth_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PersonalInfoRequest.dateOfBirth)
}
inline std::string* PersonalInfoRequest::mutable_dateofbirth() {
  std::string* _s = _internal_mutable_dateofbirth();
  // @@protoc_insertion_point(field_mutable:PersonalInfoRequest.dateOfBirth)
  return _s;
}
inline const std::string& PersonalInfoRequest::_internal_dateofbirth() const {
  return dateofbirth_.Get();
}
inline void PersonalInfoRequest::_internal_set_dateofbirth(const std::string& value) {
  
  dateofbirth_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::_internal_mutable_dateofbirth() {
  
  return dateofbirth_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::release_dateofbirth() {
  // @@protoc_insertion_point(field_release:PersonalInfoRequest.dateOfBirth)
  return dateofbirth_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PersonalInfoRequest::set_allocated_dateofbirth(std::string* dateofbirth) {
  if (dateofbirth != nullptr) {
    
  } else {
    
  }
  dateofbirth_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), dateofbirth,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:PersonalInfoRequest.dateOfBirth)
}

// string email = 4;
inline void PersonalInfoRequest::clear_email() {
  email_.ClearToEmpty();
}
inline const std::string& PersonalInfoRequest::email() const {
  // @@protoc_insertion_point(field_get:PersonalInfoRequest.email)
  return _internal_email();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PersonalInfoRequest::set_email(ArgT0&& arg0, ArgT... args) {
 
 email_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PersonalInfoRequest.email)
}
inline std::string* PersonalInfoRequest::mutable_email() {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:PersonalInfoRequest.email)
  return _s;
}
inline const std::string& PersonalInfoRequest::_internal_email() const {
  return email_.Get();
}
inline void PersonalInfoRequest::_internal_set_email(const std::string& value) {
  
  email_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::_internal_mutable_email() {
  
  return email_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::release_email() {
  // @@protoc_insertion_point(field_release:PersonalInfoRequest.email)
  return email_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PersonalInfoRequest::set_allocated_email(std::string* email) {
  if (email != nullptr) {
    
  } else {
    
  }
  email_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), email,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:PersonalInfoRequest.email)
}

// string phoneNumber = 5;
inline void PersonalInfoRequest::clear_phonenumber() {
  phonenumber_.ClearToEmpty();
}
inline const std::string& PersonalInfoRequest::phonenumber() const {
  // @@protoc_insertion_point(field_get:PersonalInfoRequest.phoneNumber)
  return _internal_phonenumber();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PersonalInfoRequest::set_phonenumber(ArgT0&& arg0, ArgT... args) {
 
 phonenumber_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PersonalInfoRequest.phoneNumber)
}
inline std::string* PersonalInfoRequest::mutable_phonenumber() {
  std::string* _s = _internal_mutable_phonenumber();
  // @@protoc_insertion_point(field_mutable:PersonalInfoRequest.phoneNumber)
  return _s;
}
inline const std::string& PersonalInfoRequest::_internal_phonenumber() const {
  return phonenumber_.Get();
}
inline void PersonalInfoRequest::_internal_set_phonenumber(const std::string& value) {
  
  phonenumber_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::_internal_mutable_phonenumber() {
  
  return phonenumber_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PersonalInfoRequest::release_phonenumber() {
  // @@protoc_insertion_point(field_release:PersonalInfoRequest.phoneNumber)
  return phonenumber_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PersonalInfoRequest::set_allocated_phonenumber(std::string* phonenumber) {
  if (phonenumber != nullptr) {
    
  } else {
    
  }
  phonenumber_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), phonenumber,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:PersonalInfoRequest.phoneNumber)
}

// int64 timestamp = 6;
inline void PersonalInfoRequest::clear_timestamp() {
  timestamp_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 PersonalInfoRequest::_internal_timestamp() const {
  return timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 PersonalInfoRequest::timestamp() const {
  // @@protoc_insertion_point(field_get:PersonalInfoRequest.timestamp)
  return _internal_timestamp();
}
inline void PersonalInfoRequest::_internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  timestamp_ = value;
}
inline void PersonalInfoRequest::set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:PersonalInfoRequest.timestamp)
}

// -------------------------------------------------------------------

// PersonalInfoReply

// string message = 1;
inline void PersonalInfoReply::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& PersonalInfoReply::message() const {
  // @@protoc_insertion_point(field_get:PersonalInfoReply.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PersonalInfoReply::set_message(ArgT0&& arg0, ArgT... args) {
 
 message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PersonalInfoReply.message)
}
inline std::string* PersonalInfoReply::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:PersonalInfoReply.message)
  return _s;
}
inline const std::string& PersonalInfoReply::_internal_message() const {
  return message_.Get();
}
inline void PersonalInfoReply::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PersonalInfoReply::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PersonalInfoReply::release_message() {
  // @@protoc_insertion_point(field_release:PersonalInfoReply.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PersonalInfoReply::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:PersonalInfoReply.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PersonalInfo_2eproto
