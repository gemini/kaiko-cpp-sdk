// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/wrappers.proto

#include "sdk/core/wrappers.pb.h"

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
namespace kaikosdk {
constexpr TimestampValue::TimestampValue(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : value_(nullptr){}
struct TimestampValueDefaultTypeInternal {
  constexpr TimestampValueDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TimestampValueDefaultTypeInternal() {}
  union {
    TimestampValue _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TimestampValueDefaultTypeInternal _TimestampValue_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fcore_2fwrappers_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fcore_2fwrappers_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fcore_2fwrappers_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fcore_2fwrappers_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::TimestampValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::TimestampValue, value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::TimestampValue)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_TimestampValue_default_instance_),
};

const char descriptor_table_protodef_sdk_2fcore_2fwrappers_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027sdk/core/wrappers.proto\022\010kaikosdk\032\037goo"
  "gle/protobuf/timestamp.proto\";\n\016Timestam"
  "pValue\022)\n\005value\030\001 \001(\0132\032.google.protobuf."
  "TimestampBX\n\022com.kaiko.sdk.coreP\001Z0githu"
  "b.com/challengerdeep/kaiko-go-sdk/core;c"
  "ore\252\002\rKaikoSdk.Coreb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sdk_2fcore_2fwrappers_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fcore_2fwrappers_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fwrappers_2eproto = {
  false, false, 227, descriptor_table_protodef_sdk_2fcore_2fwrappers_2eproto, "sdk/core/wrappers.proto", 
  &descriptor_table_sdk_2fcore_2fwrappers_2eproto_once, descriptor_table_sdk_2fcore_2fwrappers_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_sdk_2fcore_2fwrappers_2eproto::offsets,
  file_level_metadata_sdk_2fcore_2fwrappers_2eproto, file_level_enum_descriptors_sdk_2fcore_2fwrappers_2eproto, file_level_service_descriptors_sdk_2fcore_2fwrappers_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fcore_2fwrappers_2eproto_getter() {
  return &descriptor_table_sdk_2fcore_2fwrappers_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fcore_2fwrappers_2eproto(&descriptor_table_sdk_2fcore_2fwrappers_2eproto);
namespace kaikosdk {

// ===================================================================

class TimestampValue::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& value(const TimestampValue* msg);
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
TimestampValue::_Internal::value(const TimestampValue* msg) {
  return *msg->value_;
}
void TimestampValue::clear_value() {
  if (GetArenaForAllocation() == nullptr && value_ != nullptr) {
    delete value_;
  }
  value_ = nullptr;
}
TimestampValue::TimestampValue(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:kaikosdk.TimestampValue)
}
TimestampValue::TimestampValue(const TimestampValue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_value()) {
    value_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from.value_);
  } else {
    value_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.TimestampValue)
}

inline void TimestampValue::SharedCtor() {
value_ = nullptr;
}

TimestampValue::~TimestampValue() {
  // @@protoc_insertion_point(destructor:kaikosdk.TimestampValue)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TimestampValue::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete value_;
}

void TimestampValue::ArenaDtor(void* object) {
  TimestampValue* _this = reinterpret_cast< TimestampValue* >(object);
  (void)_this;
}
void TimestampValue::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TimestampValue::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TimestampValue::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.TimestampValue)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && value_ != nullptr) {
    delete value_;
  }
  value_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TimestampValue::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .google.protobuf.Timestamp value = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_value(), ptr);
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

uint8_t* TimestampValue::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.TimestampValue)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp value = 1;
  if (this->_internal_has_value()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::value(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.TimestampValue)
  return target;
}

size_t TimestampValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.TimestampValue)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .google.protobuf.Timestamp value = 1;
  if (this->_internal_has_value()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *value_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TimestampValue::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TimestampValue::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TimestampValue::GetClassData() const { return &_class_data_; }

void TimestampValue::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TimestampValue *>(to)->MergeFrom(
      static_cast<const TimestampValue &>(from));
}


void TimestampValue::MergeFrom(const TimestampValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.TimestampValue)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_value()) {
    _internal_mutable_value()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_value());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TimestampValue::CopyFrom(const TimestampValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.TimestampValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimestampValue::IsInitialized() const {
  return true;
}

void TimestampValue::InternalSwap(TimestampValue* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(value_, other->value_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TimestampValue::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fcore_2fwrappers_2eproto_getter, &descriptor_table_sdk_2fcore_2fwrappers_2eproto_once,
      file_level_metadata_sdk_2fcore_2fwrappers_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::TimestampValue* Arena::CreateMaybeMessage< ::kaikosdk::TimestampValue >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::TimestampValue >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
