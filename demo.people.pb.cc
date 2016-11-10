// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: demo.people.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "demo.people.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace demo {

namespace {

const ::google::protobuf::Descriptor* People_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  People_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_demo_2epeople_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_demo_2epeople_2eproto() {
  protobuf_AddDesc_demo_2epeople_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "demo.people.proto");
  GOOGLE_CHECK(file != NULL);
  People_descriptor_ = file->message_type(0);
  static const int People_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(People, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(People, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(People, email_),
  };
  People_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      People_descriptor_,
      People::internal_default_instance(),
      People_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(People, _has_bits_),
      -1,
      -1,
      sizeof(People),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(People, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_demo_2epeople_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      People_descriptor_, People::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_demo_2epeople_2eproto() {
  People_default_instance_.Shutdown();
  delete People_reflection_;
}

void protobuf_InitDefaults_demo_2epeople_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  People_default_instance_.DefaultConstruct();
  People_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_demo_2epeople_2eproto_once_);
void protobuf_InitDefaults_demo_2epeople_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_demo_2epeople_2eproto_once_,
                 &protobuf_InitDefaults_demo_2epeople_2eproto_impl);
}
void protobuf_AddDesc_demo_2epeople_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_demo_2epeople_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021demo.people.proto\022\004demo\"1\n\006People\022\014\n\004n"
    "ame\030\001 \002(\t\022\n\n\002id\030\002 \002(\005\022\r\n\005email\030\003 \002(\tB$\n\024"
    "com.example.tutorialB\014PersonProtos", 114);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "demo.people.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_demo_2epeople_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_demo_2epeople_2eproto_once_);
void protobuf_AddDesc_demo_2epeople_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_demo_2epeople_2eproto_once_,
                 &protobuf_AddDesc_demo_2epeople_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_demo_2epeople_2eproto {
  StaticDescriptorInitializer_demo_2epeople_2eproto() {
    protobuf_AddDesc_demo_2epeople_2eproto();
  }
} static_descriptor_initializer_demo_2epeople_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int People::kNameFieldNumber;
const int People::kIdFieldNumber;
const int People::kEmailFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

People::People()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_demo_2epeople_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:demo.People)
}

void People::InitAsDefaultInstance() {
}

People::People(const People& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:demo.People)
}

void People::SharedCtor() {
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
}

People::~People() {
  // @@protoc_insertion_point(destructor:demo.People)
  SharedDtor();
}

void People::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void People::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* People::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return People_descriptor_;
}

const People& People::default_instance() {
  protobuf_InitDefaults_demo_2epeople_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<People> People_default_instance_;

People* People::New(::google::protobuf::Arena* arena) const {
  People* n = new People;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void People::Clear() {
// @@protoc_insertion_point(message_clear_start:demo.People)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    id_ = 0;
    if (has_email()) {
      email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool People::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:demo.People)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "demo.People.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }

      // required int32 id = 2;
      case 2: {
        if (tag == 16) {
         parse_id:
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_email;
        break;
      }

      // required string email = 3;
      case 3: {
        if (tag == 26) {
         parse_email:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->email().data(), this->email().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "demo.People.email");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:demo.People)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:demo.People)
  return false;
#undef DO_
}

void People::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:demo.People)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "demo.People.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // required int32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // required string email = 3;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "demo.People.email");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->email(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:demo.People)
}

::google::protobuf::uint8* People::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:demo.People)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "demo.People.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required int32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // required string email = 3;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "demo.People.email");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->email(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:demo.People)
  return target;
}

size_t People::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:demo.People)
  size_t total_size = 0;

  if (has_name()) {
    // required string name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  if (has_id()) {
    // required int32 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  if (has_email()) {
    // required string email = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->email());
  }

  return total_size;
}
size_t People::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:demo.People)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

    // required int32 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

    // required string email = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->email());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void People::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:demo.People)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const People* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const People>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:demo.People)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:demo.People)
    UnsafeMergeFrom(*source);
  }
}

void People::MergeFrom(const People& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:demo.People)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void People::UnsafeMergeFrom(const People& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_email()) {
      set_has_email();
      email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void People::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:demo.People)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void People::CopyFrom(const People& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:demo.People)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool People::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void People::Swap(People* other) {
  if (other == this) return;
  InternalSwap(other);
}
void People::InternalSwap(People* other) {
  name_.Swap(&other->name_);
  std::swap(id_, other->id_);
  email_.Swap(&other->email_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata People::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = People_descriptor_;
  metadata.reflection = People_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// People

// required string name = 1;
bool People::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void People::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void People::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void People::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
const ::std::string& People::name() const {
  // @@protoc_insertion_point(field_get:demo.People.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void People::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:demo.People.name)
}
void People::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:demo.People.name)
}
void People::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:demo.People.name)
}
::std::string* People::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:demo.People.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* People::release_name() {
  // @@protoc_insertion_point(field_release:demo.People.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void People::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:demo.People.name)
}

// required int32 id = 2;
bool People::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void People::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
void People::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void People::clear_id() {
  id_ = 0;
  clear_has_id();
}
::google::protobuf::int32 People::id() const {
  // @@protoc_insertion_point(field_get:demo.People.id)
  return id_;
}
void People::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:demo.People.id)
}

// required string email = 3;
bool People::has_email() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void People::set_has_email() {
  _has_bits_[0] |= 0x00000004u;
}
void People::clear_has_email() {
  _has_bits_[0] &= ~0x00000004u;
}
void People::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_email();
}
const ::std::string& People::email() const {
  // @@protoc_insertion_point(field_get:demo.People.email)
  return email_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void People::set_email(const ::std::string& value) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:demo.People.email)
}
void People::set_email(const char* value) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:demo.People.email)
}
void People::set_email(const char* value, size_t size) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:demo.People.email)
}
::std::string* People::mutable_email() {
  set_has_email();
  // @@protoc_insertion_point(field_mutable:demo.People.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* People::release_email() {
  // @@protoc_insertion_point(field_release:demo.People.email)
  clear_has_email();
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void People::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    set_has_email();
  } else {
    clear_has_email();
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:demo.People.email)
}

inline const People* People::internal_default_instance() {
  return &People_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace demo

// @@protoc_insertion_point(global_scope)