// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_direct_exchange_rate_v1/request.proto

#include "sdk/stream/aggregates_direct_exchange_rate_v1/request.pb.h"

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
constexpr StreamAggregatesDirectExchangeRateRequestV1::StreamAggregatesDirectExchangeRateRequestV1(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : code_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , aggregate_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sources_(false){}
struct StreamAggregatesDirectExchangeRateRequestV1DefaultTypeInternal {
  constexpr StreamAggregatesDirectExchangeRateRequestV1DefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamAggregatesDirectExchangeRateRequestV1DefaultTypeInternal() {}
  union {
    StreamAggregatesDirectExchangeRateRequestV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamAggregatesDirectExchangeRateRequestV1DefaultTypeInternal _StreamAggregatesDirectExchangeRateRequestV1_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1, code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1, aggregate_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1, sources_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamAggregatesDirectExchangeRateRequestV1_default_instance_),
};

const char descriptor_table_protodef_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n;sdk/stream/aggregates_direct_exchange_"
  "rate_v1/request.proto\022\010kaikosdk\"_\n+Strea"
  "mAggregatesDirectExchangeRateRequestV1\022\014"
  "\n\004code\030\001 \001(\t\022\021\n\taggregate\030\002 \001(\t\022\017\n\007sourc"
  "es\030\003 \001(\010B\341\001\n7com.kaiko.sdk.stream.aggreg"
  "ates_direct_exchange_rate_v1P\001Zsgithub.c"
  "om/challengerdeep/kaiko-go-sdk/stream/ag"
  "gregates_direct_exchange_rate_v1;aggrega"
  "tes_direct_exchange_rate_v1\252\002.KaikoSdk.S"
  "tream.AggregatesDirectExchangeRateV1b\006pr"
  "oto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto = {
  false, false, 404, descriptor_table_protodef_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto, "sdk/stream/aggregates_direct_exchange_rate_v1/request.proto", 
  &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto::offsets,
  file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto, file_level_service_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto(&descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatesDirectExchangeRateRequestV1::_Internal {
 public:
};

StreamAggregatesDirectExchangeRateRequestV1::StreamAggregatesDirectExchangeRateRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
}
StreamAggregatesDirectExchangeRateRequestV1::StreamAggregatesDirectExchangeRateRequestV1(const StreamAggregatesDirectExchangeRateRequestV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_code().empty()) {
    code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_code(), 
      GetArenaForAllocation());
  }
  aggregate_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    aggregate_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_aggregate().empty()) {
    aggregate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_aggregate(), 
      GetArenaForAllocation());
  }
  sources_ = from.sources_;
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
}

inline void StreamAggregatesDirectExchangeRateRequestV1::SharedCtor() {
code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
aggregate_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  aggregate_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
sources_ = false;
}

StreamAggregatesDirectExchangeRateRequestV1::~StreamAggregatesDirectExchangeRateRequestV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void StreamAggregatesDirectExchangeRateRequestV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  aggregate_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void StreamAggregatesDirectExchangeRateRequestV1::ArenaDtor(void* object) {
  StreamAggregatesDirectExchangeRateRequestV1* _this = reinterpret_cast< StreamAggregatesDirectExchangeRateRequestV1* >(object);
  (void)_this;
}
void StreamAggregatesDirectExchangeRateRequestV1::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StreamAggregatesDirectExchangeRateRequestV1::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StreamAggregatesDirectExchangeRateRequestV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  code_.ClearToEmpty();
  aggregate_.ClearToEmpty();
  sources_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatesDirectExchangeRateRequestV1::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.code"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string aggregate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_aggregate();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.aggregate"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool sources = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          sources_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* StreamAggregatesDirectExchangeRateRequestV1::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string code = 1;
  if (!this->_internal_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.code");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_code(), target);
  }

  // string aggregate = 2;
  if (!this->_internal_aggregate().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_aggregate().data(), static_cast<int>(this->_internal_aggregate().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.aggregate");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_aggregate(), target);
  }

  // bool sources = 3;
  if (this->_internal_sources() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_sources(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
  return target;
}

size_t StreamAggregatesDirectExchangeRateRequestV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string code = 1;
  if (!this->_internal_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string aggregate = 2;
  if (!this->_internal_aggregate().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_aggregate());
  }

  // bool sources = 3;
  if (this->_internal_sources() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatesDirectExchangeRateRequestV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    StreamAggregatesDirectExchangeRateRequestV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatesDirectExchangeRateRequestV1::GetClassData() const { return &_class_data_; }

void StreamAggregatesDirectExchangeRateRequestV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<StreamAggregatesDirectExchangeRateRequestV1 *>(to)->MergeFrom(
      static_cast<const StreamAggregatesDirectExchangeRateRequestV1 &>(from));
}


void StreamAggregatesDirectExchangeRateRequestV1::MergeFrom(const StreamAggregatesDirectExchangeRateRequestV1& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_code().empty()) {
    _internal_set_code(from._internal_code());
  }
  if (!from._internal_aggregate().empty()) {
    _internal_set_aggregate(from._internal_aggregate());
  }
  if (from._internal_sources() != 0) {
    _internal_set_sources(from._internal_sources());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatesDirectExchangeRateRequestV1::CopyFrom(const StreamAggregatesDirectExchangeRateRequestV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatesDirectExchangeRateRequestV1::IsInitialized() const {
  return true;
}

void StreamAggregatesDirectExchangeRateRequestV1::InternalSwap(StreamAggregatesDirectExchangeRateRequestV1* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &code_, lhs_arena,
      &other->code_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &aggregate_, lhs_arena,
      &other->aggregate_, rhs_arena
  );
  swap(sources_, other->sources_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatesDirectExchangeRateRequestV1::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1* Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
