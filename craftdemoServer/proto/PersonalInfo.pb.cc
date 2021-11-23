// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PersonalInfo.proto

#include "PersonalInfo.pb.h"

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
constexpr PersonalInfoRequest::PersonalInfoRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : firstname_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , lastname_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , dateofbirth_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , email_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , phonenumber_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , timestamp_(int64_t{0}){}
struct PersonalInfoRequestDefaultTypeInternal {
  constexpr PersonalInfoRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PersonalInfoRequestDefaultTypeInternal() {}
  union {
    PersonalInfoRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PersonalInfoRequestDefaultTypeInternal _PersonalInfoRequest_default_instance_;
constexpr PersonalInfoReply::PersonalInfoReply(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : message_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct PersonalInfoReplyDefaultTypeInternal {
  constexpr PersonalInfoReplyDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PersonalInfoReplyDefaultTypeInternal() {}
  union {
    PersonalInfoReply _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PersonalInfoReplyDefaultTypeInternal _PersonalInfoReply_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PersonalInfo_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PersonalInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PersonalInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PersonalInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PersonalInfoRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::PersonalInfoRequest, firstname_),
  PROTOBUF_FIELD_OFFSET(::PersonalInfoRequest, lastname_),
  PROTOBUF_FIELD_OFFSET(::PersonalInfoRequest, dateofbirth_),
  PROTOBUF_FIELD_OFFSET(::PersonalInfoRequest, email_),
  PROTOBUF_FIELD_OFFSET(::PersonalInfoRequest, phonenumber_),
  PROTOBUF_FIELD_OFFSET(::PersonalInfoRequest, timestamp_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PersonalInfoReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::PersonalInfoReply, message_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::PersonalInfoRequest)},
  { 12, -1, -1, sizeof(::PersonalInfoReply)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_PersonalInfoRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_PersonalInfoReply_default_instance_),
};

const char descriptor_table_protodef_PersonalInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022PersonalInfo.proto\"\206\001\n\023PersonalInfoReq"
  "uest\022\021\n\tfirstName\030\001 \001(\t\022\020\n\010lastName\030\002 \001("
  "\t\022\023\n\013dateOfBirth\030\003 \001(\t\022\r\n\005email\030\004 \001(\t\022\023\n"
  "\013phoneNumber\030\005 \001(\t\022\021\n\ttimestamp\030\006 \001(\003\"$\n"
  "\021PersonalInfoReply\022\017\n\007message\030\001 \001(\t2S\n\032P"
  "ersonalInformationService\0225\n\007SetInfo\022\024.P"
  "ersonalInfoRequest\032\022.PersonalInfoReply\"\000"
  "B\034\n\030com.assessment.craftdemoP\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PersonalInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PersonalInfo_2eproto = {
  false, false, 318, descriptor_table_protodef_PersonalInfo_2eproto, "PersonalInfo.proto", 
  &descriptor_table_PersonalInfo_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_PersonalInfo_2eproto::offsets,
  file_level_metadata_PersonalInfo_2eproto, file_level_enum_descriptors_PersonalInfo_2eproto, file_level_service_descriptors_PersonalInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_PersonalInfo_2eproto_getter() {
  return &descriptor_table_PersonalInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_PersonalInfo_2eproto(&descriptor_table_PersonalInfo_2eproto);

// ===================================================================

class PersonalInfoRequest::_Internal {
 public:
};

PersonalInfoRequest::PersonalInfoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:PersonalInfoRequest)
}
PersonalInfoRequest::PersonalInfoRequest(const PersonalInfoRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  firstname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_firstname().empty()) {
    firstname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_firstname(), 
      GetArenaForAllocation());
  }
  lastname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_lastname().empty()) {
    lastname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_lastname(), 
      GetArenaForAllocation());
  }
  dateofbirth_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_dateofbirth().empty()) {
    dateofbirth_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_dateofbirth(), 
      GetArenaForAllocation());
  }
  email_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_email().empty()) {
    email_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_email(), 
      GetArenaForAllocation());
  }
  phonenumber_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_phonenumber().empty()) {
    phonenumber_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_phonenumber(), 
      GetArenaForAllocation());
  }
  timestamp_ = from.timestamp_;
  // @@protoc_insertion_point(copy_constructor:PersonalInfoRequest)
}

void PersonalInfoRequest::SharedCtor() {
firstname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
lastname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
dateofbirth_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
email_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
phonenumber_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
timestamp_ = int64_t{0};
}

PersonalInfoRequest::~PersonalInfoRequest() {
  // @@protoc_insertion_point(destructor:PersonalInfoRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void PersonalInfoRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  firstname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  lastname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  dateofbirth_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  email_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  phonenumber_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void PersonalInfoRequest::ArenaDtor(void* object) {
  PersonalInfoRequest* _this = reinterpret_cast< PersonalInfoRequest* >(object);
  (void)_this;
}
void PersonalInfoRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PersonalInfoRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PersonalInfoRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:PersonalInfoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  firstname_.ClearToEmpty();
  lastname_.ClearToEmpty();
  dateofbirth_.ClearToEmpty();
  email_.ClearToEmpty();
  phonenumber_.ClearToEmpty();
  timestamp_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PersonalInfoRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string firstName = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_firstname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PersonalInfoRequest.firstName"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string lastName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_lastname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PersonalInfoRequest.lastName"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string dateOfBirth = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_dateofbirth();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PersonalInfoRequest.dateOfBirth"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string email = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_email();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PersonalInfoRequest.email"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string phoneNumber = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_phonenumber();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PersonalInfoRequest.phoneNumber"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 timestamp = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PersonalInfoRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PersonalInfoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string firstName = 1;
  if (!this->_internal_firstname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_firstname().data(), static_cast<int>(this->_internal_firstname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "PersonalInfoRequest.firstName");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_firstname(), target);
  }

  // string lastName = 2;
  if (!this->_internal_lastname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_lastname().data(), static_cast<int>(this->_internal_lastname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "PersonalInfoRequest.lastName");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_lastname(), target);
  }

  // string dateOfBirth = 3;
  if (!this->_internal_dateofbirth().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_dateofbirth().data(), static_cast<int>(this->_internal_dateofbirth().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "PersonalInfoRequest.dateOfBirth");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_dateofbirth(), target);
  }

  // string email = 4;
  if (!this->_internal_email().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_email().data(), static_cast<int>(this->_internal_email().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "PersonalInfoRequest.email");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_email(), target);
  }

  // string phoneNumber = 5;
  if (!this->_internal_phonenumber().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_phonenumber().data(), static_cast<int>(this->_internal_phonenumber().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "PersonalInfoRequest.phoneNumber");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_phonenumber(), target);
  }

  // int64 timestamp = 6;
  if (this->_internal_timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(6, this->_internal_timestamp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PersonalInfoRequest)
  return target;
}

size_t PersonalInfoRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PersonalInfoRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string firstName = 1;
  if (!this->_internal_firstname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_firstname());
  }

  // string lastName = 2;
  if (!this->_internal_lastname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_lastname());
  }

  // string dateOfBirth = 3;
  if (!this->_internal_dateofbirth().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_dateofbirth());
  }

  // string email = 4;
  if (!this->_internal_email().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_email());
  }

  // string phoneNumber = 5;
  if (!this->_internal_phonenumber().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_phonenumber());
  }

  // int64 timestamp = 6;
  if (this->_internal_timestamp() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_timestamp());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PersonalInfoRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    PersonalInfoRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PersonalInfoRequest::GetClassData() const { return &_class_data_; }

void PersonalInfoRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<PersonalInfoRequest *>(to)->MergeFrom(
      static_cast<const PersonalInfoRequest &>(from));
}


void PersonalInfoRequest::MergeFrom(const PersonalInfoRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PersonalInfoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_firstname().empty()) {
    _internal_set_firstname(from._internal_firstname());
  }
  if (!from._internal_lastname().empty()) {
    _internal_set_lastname(from._internal_lastname());
  }
  if (!from._internal_dateofbirth().empty()) {
    _internal_set_dateofbirth(from._internal_dateofbirth());
  }
  if (!from._internal_email().empty()) {
    _internal_set_email(from._internal_email());
  }
  if (!from._internal_phonenumber().empty()) {
    _internal_set_phonenumber(from._internal_phonenumber());
  }
  if (from._internal_timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PersonalInfoRequest::CopyFrom(const PersonalInfoRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PersonalInfoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PersonalInfoRequest::IsInitialized() const {
  return true;
}

void PersonalInfoRequest::InternalSwap(PersonalInfoRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &firstname_, lhs_arena,
      &other->firstname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &lastname_, lhs_arena,
      &other->lastname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &dateofbirth_, lhs_arena,
      &other->dateofbirth_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &email_, lhs_arena,
      &other->email_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &phonenumber_, lhs_arena,
      &other->phonenumber_, rhs_arena
  );
  swap(timestamp_, other->timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PersonalInfoRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_PersonalInfo_2eproto_getter, &descriptor_table_PersonalInfo_2eproto_once,
      file_level_metadata_PersonalInfo_2eproto[0]);
}

// ===================================================================

class PersonalInfoReply::_Internal {
 public:
};

PersonalInfoReply::PersonalInfoReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:PersonalInfoReply)
}
PersonalInfoReply::PersonalInfoReply(const PersonalInfoReply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_message().empty()) {
    message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_message(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:PersonalInfoReply)
}

void PersonalInfoReply::SharedCtor() {
message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

PersonalInfoReply::~PersonalInfoReply() {
  // @@protoc_insertion_point(destructor:PersonalInfoReply)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void PersonalInfoReply::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void PersonalInfoReply::ArenaDtor(void* object) {
  PersonalInfoReply* _this = reinterpret_cast< PersonalInfoReply* >(object);
  (void)_this;
}
void PersonalInfoReply::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PersonalInfoReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PersonalInfoReply::Clear() {
// @@protoc_insertion_point(message_clear_start:PersonalInfoReply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  message_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PersonalInfoReply::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PersonalInfoReply.message"));
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PersonalInfoReply::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PersonalInfoReply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "PersonalInfoReply.message");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PersonalInfoReply)
  return target;
}

size_t PersonalInfoReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PersonalInfoReply)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PersonalInfoReply::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    PersonalInfoReply::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PersonalInfoReply::GetClassData() const { return &_class_data_; }

void PersonalInfoReply::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<PersonalInfoReply *>(to)->MergeFrom(
      static_cast<const PersonalInfoReply &>(from));
}


void PersonalInfoReply::MergeFrom(const PersonalInfoReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PersonalInfoReply)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _internal_set_message(from._internal_message());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PersonalInfoReply::CopyFrom(const PersonalInfoReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PersonalInfoReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PersonalInfoReply::IsInitialized() const {
  return true;
}

void PersonalInfoReply::InternalSwap(PersonalInfoReply* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &message_, lhs_arena,
      &other->message_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata PersonalInfoReply::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_PersonalInfo_2eproto_getter, &descriptor_table_PersonalInfo_2eproto_once,
      file_level_metadata_PersonalInfo_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PersonalInfoRequest* Arena::CreateMaybeMessage< ::PersonalInfoRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PersonalInfoRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::PersonalInfoReply* Arena::CreateMaybeMessage< ::PersonalInfoReply >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PersonalInfoReply >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
