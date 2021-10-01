// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_ohlcv_v1/request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "sdk/core/instrument_criteria.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto;
namespace kaikosdk {
class StreamAggregatesOHLCVRequestV1;
struct StreamAggregatesOHLCVRequestV1DefaultTypeInternal;
extern StreamAggregatesOHLCVRequestV1DefaultTypeInternal _StreamAggregatesOHLCVRequestV1_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamAggregatesOHLCVRequestV1* Arena::CreateMaybeMessage<::kaikosdk::StreamAggregatesOHLCVRequestV1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamAggregatesOHLCVRequestV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamAggregatesOHLCVRequestV1) */ {
 public:
  inline StreamAggregatesOHLCVRequestV1() : StreamAggregatesOHLCVRequestV1(nullptr) {}
  ~StreamAggregatesOHLCVRequestV1() override;
  explicit constexpr StreamAggregatesOHLCVRequestV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamAggregatesOHLCVRequestV1(const StreamAggregatesOHLCVRequestV1& from);
  StreamAggregatesOHLCVRequestV1(StreamAggregatesOHLCVRequestV1&& from) noexcept
    : StreamAggregatesOHLCVRequestV1() {
    *this = ::std::move(from);
  }

  inline StreamAggregatesOHLCVRequestV1& operator=(const StreamAggregatesOHLCVRequestV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamAggregatesOHLCVRequestV1& operator=(StreamAggregatesOHLCVRequestV1&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const StreamAggregatesOHLCVRequestV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamAggregatesOHLCVRequestV1* internal_default_instance() {
    return reinterpret_cast<const StreamAggregatesOHLCVRequestV1*>(
               &_StreamAggregatesOHLCVRequestV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamAggregatesOHLCVRequestV1& a, StreamAggregatesOHLCVRequestV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamAggregatesOHLCVRequestV1* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StreamAggregatesOHLCVRequestV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StreamAggregatesOHLCVRequestV1* New() const final {
    return new StreamAggregatesOHLCVRequestV1();
  }

  StreamAggregatesOHLCVRequestV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StreamAggregatesOHLCVRequestV1>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StreamAggregatesOHLCVRequestV1& from);
  void MergeFrom(const StreamAggregatesOHLCVRequestV1& from);
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
  void InternalSwap(StreamAggregatesOHLCVRequestV1* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamAggregatesOHLCVRequestV1";
  }
  protected:
  explicit StreamAggregatesOHLCVRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAggregateFieldNumber = 2,
    kInstrumentCriteriaFieldNumber = 1,
  };
  // string aggregate = 2;
  void clear_aggregate();
  const std::string& aggregate() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_aggregate(ArgT0&& arg0, ArgT... args);
  std::string* mutable_aggregate();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_aggregate();
  void set_allocated_aggregate(std::string* aggregate);
  private:
  const std::string& _internal_aggregate() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_aggregate(const std::string& value);
  std::string* _internal_mutable_aggregate();
  public:

  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  bool has_instrument_criteria() const;
  private:
  bool _internal_has_instrument_criteria() const;
  public:
  void clear_instrument_criteria();
  const ::kaikosdk::InstrumentCriteria& instrument_criteria() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::kaikosdk::InstrumentCriteria* release_instrument_criteria();
  ::kaikosdk::InstrumentCriteria* mutable_instrument_criteria();
  void set_allocated_instrument_criteria(::kaikosdk::InstrumentCriteria* instrument_criteria);
  private:
  const ::kaikosdk::InstrumentCriteria& _internal_instrument_criteria() const;
  ::kaikosdk::InstrumentCriteria* _internal_mutable_instrument_criteria();
  public:
  void unsafe_arena_set_allocated_instrument_criteria(
      ::kaikosdk::InstrumentCriteria* instrument_criteria);
  ::kaikosdk::InstrumentCriteria* unsafe_arena_release_instrument_criteria();

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamAggregatesOHLCVRequestV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr aggregate_;
  ::kaikosdk::InstrumentCriteria* instrument_criteria_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamAggregatesOHLCVRequestV1

// .kaikosdk.InstrumentCriteria instrument_criteria = 1;
inline bool StreamAggregatesOHLCVRequestV1::_internal_has_instrument_criteria() const {
  return this != internal_default_instance() && instrument_criteria_ != nullptr;
}
inline bool StreamAggregatesOHLCVRequestV1::has_instrument_criteria() const {
  return _internal_has_instrument_criteria();
}
inline const ::kaikosdk::InstrumentCriteria& StreamAggregatesOHLCVRequestV1::_internal_instrument_criteria() const {
  const ::kaikosdk::InstrumentCriteria* p = instrument_criteria_;
  return p != nullptr ? *p : reinterpret_cast<const ::kaikosdk::InstrumentCriteria&>(
      ::kaikosdk::_InstrumentCriteria_default_instance_);
}
inline const ::kaikosdk::InstrumentCriteria& StreamAggregatesOHLCVRequestV1::instrument_criteria() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesOHLCVRequestV1.instrument_criteria)
  return _internal_instrument_criteria();
}
inline void StreamAggregatesOHLCVRequestV1::unsafe_arena_set_allocated_instrument_criteria(
    ::kaikosdk::InstrumentCriteria* instrument_criteria) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(instrument_criteria_);
  }
  instrument_criteria_ = instrument_criteria;
  if (instrument_criteria) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamAggregatesOHLCVRequestV1.instrument_criteria)
}
inline ::kaikosdk::InstrumentCriteria* StreamAggregatesOHLCVRequestV1::release_instrument_criteria() {
  
  ::kaikosdk::InstrumentCriteria* temp = instrument_criteria_;
  instrument_criteria_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::kaikosdk::InstrumentCriteria* StreamAggregatesOHLCVRequestV1::unsafe_arena_release_instrument_criteria() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesOHLCVRequestV1.instrument_criteria)
  
  ::kaikosdk::InstrumentCriteria* temp = instrument_criteria_;
  instrument_criteria_ = nullptr;
  return temp;
}
inline ::kaikosdk::InstrumentCriteria* StreamAggregatesOHLCVRequestV1::_internal_mutable_instrument_criteria() {
  
  if (instrument_criteria_ == nullptr) {
    auto* p = CreateMaybeMessage<::kaikosdk::InstrumentCriteria>(GetArenaForAllocation());
    instrument_criteria_ = p;
  }
  return instrument_criteria_;
}
inline ::kaikosdk::InstrumentCriteria* StreamAggregatesOHLCVRequestV1::mutable_instrument_criteria() {
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesOHLCVRequestV1.instrument_criteria)
  return _internal_mutable_instrument_criteria();
}
inline void StreamAggregatesOHLCVRequestV1::set_allocated_instrument_criteria(::kaikosdk::InstrumentCriteria* instrument_criteria) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(instrument_criteria_);
  }
  if (instrument_criteria) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(instrument_criteria));
    if (message_arena != submessage_arena) {
      instrument_criteria = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, instrument_criteria, submessage_arena);
    }
    
  } else {
    
  }
  instrument_criteria_ = instrument_criteria;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesOHLCVRequestV1.instrument_criteria)
}

// string aggregate = 2;
inline void StreamAggregatesOHLCVRequestV1::clear_aggregate() {
  aggregate_.ClearToEmpty();
}
inline const std::string& StreamAggregatesOHLCVRequestV1::aggregate() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate)
  return _internal_aggregate();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesOHLCVRequestV1::set_aggregate(ArgT0&& arg0, ArgT... args) {
 
 aggregate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate)
}
inline std::string* StreamAggregatesOHLCVRequestV1::mutable_aggregate() {
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate)
  return _internal_mutable_aggregate();
}
inline const std::string& StreamAggregatesOHLCVRequestV1::_internal_aggregate() const {
  return aggregate_.Get();
}
inline void StreamAggregatesOHLCVRequestV1::_internal_set_aggregate(const std::string& value) {
  
  aggregate_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesOHLCVRequestV1::_internal_mutable_aggregate() {
  
  return aggregate_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* StreamAggregatesOHLCVRequestV1::release_aggregate() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate)
  return aggregate_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void StreamAggregatesOHLCVRequestV1::set_allocated_aggregate(std::string* aggregate) {
  if (aggregate != nullptr) {
    
  } else {
    
  }
  aggregate_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), aggregate,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesOHLCVRequestV1.aggregate)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto
