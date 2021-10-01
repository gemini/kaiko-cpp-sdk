// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/data_interval.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fdata_5finterval_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fdata_5finterval_2eproto

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
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fcore_2fdata_5finterval_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fcore_2fdata_5finterval_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fdata_5finterval_2eproto;
namespace kaikosdk {
class DataInterval;
struct DataIntervalDefaultTypeInternal;
extern DataIntervalDefaultTypeInternal _DataInterval_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::DataInterval* Arena::CreateMaybeMessage<::kaikosdk::DataInterval>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class DataInterval final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.DataInterval) */ {
 public:
  inline DataInterval() : DataInterval(nullptr) {}
  ~DataInterval() override;
  explicit constexpr DataInterval(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DataInterval(const DataInterval& from);
  DataInterval(DataInterval&& from) noexcept
    : DataInterval() {
    *this = ::std::move(from);
  }

  inline DataInterval& operator=(const DataInterval& from) {
    CopyFrom(from);
    return *this;
  }
  inline DataInterval& operator=(DataInterval&& from) noexcept {
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
  static const DataInterval& default_instance() {
    return *internal_default_instance();
  }
  static inline const DataInterval* internal_default_instance() {
    return reinterpret_cast<const DataInterval*>(
               &_DataInterval_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DataInterval& a, DataInterval& b) {
    a.Swap(&b);
  }
  inline void Swap(DataInterval* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DataInterval* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DataInterval* New() const final {
    return new DataInterval();
  }

  DataInterval* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DataInterval>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DataInterval& from);
  void MergeFrom(const DataInterval& from);
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
  void InternalSwap(DataInterval* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.DataInterval";
  }
  protected:
  explicit DataInterval(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStartTimeFieldNumber = 1,
    kEndTimeFieldNumber = 2,
  };
  // .google.protobuf.Timestamp start_time = 1;
  bool has_start_time() const;
  private:
  bool _internal_has_start_time() const;
  public:
  void clear_start_time();
  const PROTOBUF_NAMESPACE_ID::Timestamp& start_time() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT PROTOBUF_NAMESPACE_ID::Timestamp* release_start_time();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_start_time();
  void set_allocated_start_time(PROTOBUF_NAMESPACE_ID::Timestamp* start_time);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_start_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_start_time();
  public:
  void unsafe_arena_set_allocated_start_time(
      PROTOBUF_NAMESPACE_ID::Timestamp* start_time);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_start_time();

  // .google.protobuf.Timestamp end_time = 2;
  bool has_end_time() const;
  private:
  bool _internal_has_end_time() const;
  public:
  void clear_end_time();
  const PROTOBUF_NAMESPACE_ID::Timestamp& end_time() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT PROTOBUF_NAMESPACE_ID::Timestamp* release_end_time();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_end_time();
  void set_allocated_end_time(PROTOBUF_NAMESPACE_ID::Timestamp* end_time);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_end_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_end_time();
  public:
  void unsafe_arena_set_allocated_end_time(
      PROTOBUF_NAMESPACE_ID::Timestamp* end_time);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_end_time();

  // @@protoc_insertion_point(class_scope:kaikosdk.DataInterval)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  PROTOBUF_NAMESPACE_ID::Timestamp* start_time_;
  PROTOBUF_NAMESPACE_ID::Timestamp* end_time_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_sdk_2fcore_2fdata_5finterval_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DataInterval

// .google.protobuf.Timestamp start_time = 1;
inline bool DataInterval::_internal_has_start_time() const {
  return this != internal_default_instance() && start_time_ != nullptr;
}
inline bool DataInterval::has_start_time() const {
  return _internal_has_start_time();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& DataInterval::_internal_start_time() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = start_time_;
  return p != nullptr ? *p : reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp&>(
      PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& DataInterval::start_time() const {
  // @@protoc_insertion_point(field_get:kaikosdk.DataInterval.start_time)
  return _internal_start_time();
}
inline void DataInterval::unsafe_arena_set_allocated_start_time(
    PROTOBUF_NAMESPACE_ID::Timestamp* start_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_time_);
  }
  start_time_ = start_time;
  if (start_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.DataInterval.start_time)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* DataInterval::release_start_time() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = start_time_;
  start_time_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* DataInterval::unsafe_arena_release_start_time() {
  // @@protoc_insertion_point(field_release:kaikosdk.DataInterval.start_time)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = start_time_;
  start_time_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* DataInterval::_internal_mutable_start_time() {
  
  if (start_time_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    start_time_ = p;
  }
  return start_time_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* DataInterval::mutable_start_time() {
  // @@protoc_insertion_point(field_mutable:kaikosdk.DataInterval.start_time)
  return _internal_mutable_start_time();
}
inline void DataInterval::set_allocated_start_time(PROTOBUF_NAMESPACE_ID::Timestamp* start_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_time_);
  }
  if (start_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_time));
    if (message_arena != submessage_arena) {
      start_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, start_time, submessage_arena);
    }
    
  } else {
    
  }
  start_time_ = start_time;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.DataInterval.start_time)
}

// .google.protobuf.Timestamp end_time = 2;
inline bool DataInterval::_internal_has_end_time() const {
  return this != internal_default_instance() && end_time_ != nullptr;
}
inline bool DataInterval::has_end_time() const {
  return _internal_has_end_time();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& DataInterval::_internal_end_time() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = end_time_;
  return p != nullptr ? *p : reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp&>(
      PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& DataInterval::end_time() const {
  // @@protoc_insertion_point(field_get:kaikosdk.DataInterval.end_time)
  return _internal_end_time();
}
inline void DataInterval::unsafe_arena_set_allocated_end_time(
    PROTOBUF_NAMESPACE_ID::Timestamp* end_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_time_);
  }
  end_time_ = end_time;
  if (end_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.DataInterval.end_time)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* DataInterval::release_end_time() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = end_time_;
  end_time_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* DataInterval::unsafe_arena_release_end_time() {
  // @@protoc_insertion_point(field_release:kaikosdk.DataInterval.end_time)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = end_time_;
  end_time_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* DataInterval::_internal_mutable_end_time() {
  
  if (end_time_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    end_time_ = p;
  }
  return end_time_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* DataInterval::mutable_end_time() {
  // @@protoc_insertion_point(field_mutable:kaikosdk.DataInterval.end_time)
  return _internal_mutable_end_time();
}
inline void DataInterval::set_allocated_end_time(PROTOBUF_NAMESPACE_ID::Timestamp* end_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_time_);
  }
  if (end_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_time));
    if (message_arena != submessage_arena) {
      end_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, end_time, submessage_arena);
    }
    
  } else {
    
  }
  end_time_ = end_time;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.DataInterval.end_time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fdata_5finterval_2eproto
