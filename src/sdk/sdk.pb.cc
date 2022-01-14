// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/sdk.proto

#include "sdk/sdk.pb.h"

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
}  // namespace kaikosdk
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fsdk_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fsdk_2eproto = nullptr;
const uint32_t TableStruct_sdk_2fsdk_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_sdk_2fsdk_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rsdk/sdk.proto\022\010kaikosdk\032,sdk/stream/ag"
  "gregates_ohlcv_v1/request.proto\032-sdk/str"
  "eam/aggregates_ohlcv_v1/response.proto\032+"
  "sdk/stream/aggregates_vwap_v1/request.pr"
  "oto\032,sdk/stream/aggregates_vwap_v1/respo"
  "nse.proto\032;sdk/stream/aggregates_direct_"
  "exchange_rate_v1/request.proto\032<sdk/stre"
  "am/aggregates_direct_exchange_rate_v1/re"
  "sponse.proto\0329sdk/stream/aggregates_spot"
  "_exchange_rate_v1/request.proto\032:sdk/str"
  "eam/aggregates_spot_exchange_rate_v1/res"
  "ponse.proto\032-sdk/stream/derivatives_pric"
  "e_v2/request.proto\032.sdk/stream/derivativ"
  "es_price_v2/response.proto\032!sdk/stream/i"
  "ndex_v1/request.proto\032\"sdk/stream/index_"
  "v1/response.proto\032)sdk/stream/market_upd"
  "ate_v1/request.proto\032*sdk/stream/market_"
  "update_v1/response.proto\032\"sdk/stream/tra"
  "des_v1/request.proto\032#sdk/stream/trades_"
  "v1/response.proto2\206\001\n\036StreamAggregatesOH"
  "LCVServiceV1\022d\n\tSubscribe\022(.kaikosdk.Str"
  "eamAggregatesOHLCVRequestV1\032).kaikosdk.S"
  "treamAggregatesOHLCVResponseV1\"\0000\0012\247\001\n)S"
  "treamAggregatesSpotExchangeRateServiceV1"
  "\022z\n\tSubscribe\0223.kaikosdk.StreamAggregate"
  "sSpotExchangeRateRequestV1\0324.kaikosdk.St"
  "reamAggregatesSpotExchangeRateResponseV1"
  "\"\0000\0012\255\001\n+StreamAggregatesDirectExchangeR"
  "ateServiceV1\022~\n\tSubscribe\0225.kaikosdk.Str"
  "eamAggregatesDirectExchangeRateRequestV1"
  "\0326.kaikosdk.StreamAggregatesDirectExchan"
  "geRateResponseV1\"\0000\0012k\n\025StreamTradesServ"
  "iceV1\022R\n\tSubscribe\022\037.kaikosdk.StreamTrad"
  "esRequestV1\032 .kaikosdk.StreamTradesRespo"
  "nseV1\"\0000\0012\203\001\n\035StreamAggregatesVWAPServic"
  "eV1\022b\n\tSubscribe\022\'.kaikosdk.StreamAggreg"
  "atesVWAPRequestV1\032(.kaikosdk.StreamAggre"
  "gatesVWAPResponseV1\"\0000\0012\211\001\n\037StreamDeriva"
  "tivesPriceServiceV2\022f\n\tSubscribe\022).kaiko"
  "sdk.StreamDerivativesPriceRequestV2\032*.ka"
  "ikosdk.StreamDerivativesPriceResponseV2\""
  "\0000\0012v\n\024StreamIndexServiceV1\022^\n\tSubscribe"
  "\022%.kaikosdk.StreamIndexServiceRequestV1\032"
  "&.kaikosdk.StreamIndexServiceResponseV1\""
  "\0000\0012}\n\033StreamMarketUpdateServiceV1\022^\n\tSu"
  "bscribe\022%.kaikosdk.StreamMarketUpdateReq"
  "uestV1\032&.kaikosdk.StreamMarketUpdateResp"
  "onseV1\"\0000\001BW\n\rcom.kaiko.sdkB\010SdkProtoP\001Z"
  "/github.com/challengerdeep/kaiko-go-sdk;"
  "kaikosdk\252\002\010KaikoSdkb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sdk_2fsdk_2eproto_deps[16] = {
  &::descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fspot_5fexchange_5frate_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fvwap_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2fmarket_5fupdate_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2fmarket_5fupdate_5fv1_2fresponse_2eproto,
  &::descriptor_table_sdk_2fstream_2ftrades_5fv1_2frequest_2eproto,
  &::descriptor_table_sdk_2fstream_2ftrades_5fv1_2fresponse_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fsdk_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fsdk_2eproto = {
  false, false, 1987, descriptor_table_protodef_sdk_2fsdk_2eproto, "sdk/sdk.proto", 
  &descriptor_table_sdk_2fsdk_2eproto_once, descriptor_table_sdk_2fsdk_2eproto_deps, 16, 0,
  schemas, file_default_instances, TableStruct_sdk_2fsdk_2eproto::offsets,
  nullptr, file_level_enum_descriptors_sdk_2fsdk_2eproto, file_level_service_descriptors_sdk_2fsdk_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fsdk_2eproto_getter() {
  return &descriptor_table_sdk_2fsdk_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fsdk_2eproto(&descriptor_table_sdk_2fsdk_2eproto);
namespace kaikosdk {

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
