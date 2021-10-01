// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fresponse_2eproto

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
#include "sdk/core/envelope.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fcore_2fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fcore_2fresponse_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fresponse_2eproto;
namespace kaikosdk {
class Response;
struct ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::Response* Arena::CreateMaybeMessage<::kaikosdk::Response>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class Response final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.Response) */ {
 public:
  inline Response() : Response(nullptr) {}
  ~Response() override;
  explicit constexpr Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Response(const Response& from);
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline Response& operator=(Response&& from) noexcept {
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
  static const Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }
  inline void Swap(Response* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const final {
    return new Response();
  }

  Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
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
  void InternalSwap(Response* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.Response";
  }
  protected:
  explicit Response(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEnvelopeFieldNumber = 1,
  };
  // .kaikosdk.Envelope envelope = 1;
  bool has_envelope() const;
  private:
  bool _internal_has_envelope() const;
  public:
  void clear_envelope();
  const ::kaikosdk::Envelope& envelope() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::kaikosdk::Envelope* release_envelope();
  ::kaikosdk::Envelope* mutable_envelope();
  void set_allocated_envelope(::kaikosdk::Envelope* envelope);
  private:
  const ::kaikosdk::Envelope& _internal_envelope() const;
  ::kaikosdk::Envelope* _internal_mutable_envelope();
  public:
  void unsafe_arena_set_allocated_envelope(
      ::kaikosdk::Envelope* envelope);
  ::kaikosdk::Envelope* unsafe_arena_release_envelope();

  // @@protoc_insertion_point(class_scope:kaikosdk.Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::kaikosdk::Envelope* envelope_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_sdk_2fcore_2fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Response

// .kaikosdk.Envelope envelope = 1;
inline bool Response::_internal_has_envelope() const {
  return this != internal_default_instance() && envelope_ != nullptr;
}
inline bool Response::has_envelope() const {
  return _internal_has_envelope();
}
inline const ::kaikosdk::Envelope& Response::_internal_envelope() const {
  const ::kaikosdk::Envelope* p = envelope_;
  return p != nullptr ? *p : reinterpret_cast<const ::kaikosdk::Envelope&>(
      ::kaikosdk::_Envelope_default_instance_);
}
inline const ::kaikosdk::Envelope& Response::envelope() const {
  // @@protoc_insertion_point(field_get:kaikosdk.Response.envelope)
  return _internal_envelope();
}
inline void Response::unsafe_arena_set_allocated_envelope(
    ::kaikosdk::Envelope* envelope) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(envelope_);
  }
  envelope_ = envelope;
  if (envelope) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.Response.envelope)
}
inline ::kaikosdk::Envelope* Response::release_envelope() {
  
  ::kaikosdk::Envelope* temp = envelope_;
  envelope_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::kaikosdk::Envelope* Response::unsafe_arena_release_envelope() {
  // @@protoc_insertion_point(field_release:kaikosdk.Response.envelope)
  
  ::kaikosdk::Envelope* temp = envelope_;
  envelope_ = nullptr;
  return temp;
}
inline ::kaikosdk::Envelope* Response::_internal_mutable_envelope() {
  
  if (envelope_ == nullptr) {
    auto* p = CreateMaybeMessage<::kaikosdk::Envelope>(GetArenaForAllocation());
    envelope_ = p;
  }
  return envelope_;
}
inline ::kaikosdk::Envelope* Response::mutable_envelope() {
  // @@protoc_insertion_point(field_mutable:kaikosdk.Response.envelope)
  return _internal_mutable_envelope();
}
inline void Response::set_allocated_envelope(::kaikosdk::Envelope* envelope) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(envelope_);
  }
  if (envelope) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(envelope));
    if (message_arena != submessage_arena) {
      envelope = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, envelope, submessage_arena);
    }
    
  } else {
    
  }
  envelope_ = envelope;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.Response.envelope)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fcore_2fresponse_2eproto
