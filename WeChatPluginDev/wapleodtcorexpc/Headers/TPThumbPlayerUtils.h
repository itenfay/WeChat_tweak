//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPThumbPlayerUtils : NSObject
{
}

+ (int)getNativeThreadPriorityWithTPThreadPriority:(long long)arg1;
+ (void)fillTPPlayerDrmParams:(id)arg1 fromNativePlayerDrmParams:(const void *)arg2;
+ (void)fillTPPlayerGeneralTrackingParams:(id)arg1 fromNativePlayerGeneralTrackingParams:(const struct TPGeneralTrackingParams *)arg2;
+ (void)fillTPPlayerBaseMediaParams:(id)arg1 fromNativePlayerBaseMediaParams:(const void *)arg2;
+ (void)fillTPPlayerConfigParams:(id)arg1 fromNativePlayerConfigParams:(const struct TPConfigParams *)arg2;
+ (id)getTPGeneralPlayFlowParamsWithNativeGeneralPlayFlowParams:(const void *)arg1;
+ (id)getTPDynamicStatisticParamsWithNativeDynamicStatisticParams:(const struct TPDynamicStatisticParams *)arg1;
+ (long long)getTPDrmTypeWithNativeDrmType:(int)arg1;
+ (int)getNativeDrmTypeWithTPDrmType:(long long)arg1;
+ (long long)getTPDrmSecureLevelWithNativeDrmSecureLevel:(int)arg1;
+ (int)getNativeDrmSecureLevelWithTPDrmSecureLevel:(long long)arg1;
+ (long long)getTPHlsTypeWithNativeHlsType:(int)arg1;
+ (int)getNativeHlsTypeWithTPHlsType:(long long)arg1;
+ (struct TPJitterBufferConfigParams *)getNativeTPJitterBufferConfigParamsWithTPJitterBufferConfig:(id)arg1;
+ (int)getNativeSwitchDefModeWithSwitchType:(long long)arg1;
+ (id)getPlayerDetailInfoWithNativeDetailInfo:(const struct TPDetailInfo *)arg1;
+ (long long)getPlayerDetailInfoTypeWithNativeDetailInfoType:(int)arg1;
+ (unsigned long long)getNativeChannelLayoutWithPlayerChannelLayout:(unsigned long long)arg1;
+ (unsigned long long)getPlayerChannelLayoutWithNativeChannelLayout:(unsigned long long)arg1;
+ (CDStruct_92d0be38)getNativeSubtitleRenderParamsWithSubtitleRenderModel:(id)arg1;
+ (unsigned int)getNativeSubtitleFontStyleFlagsWithSubtitleFontStyleOptions:(unsigned int)arg1;
+ (unsigned long long)getNativeSubtitleRenderParamFlagsWithSubtitleRenderParamFlags:(unsigned long long)arg1;
+ (id)convertDRMType2InnerWithStringFormat:(long long)arg1;
+ (struct TPRtcRemoteSdpInfo)getNativeTPRtcRemoteSdpInfo:(id)arg1;
+ (long long)getTPBufferStrategy:(int)arg1;
+ (int)getNativeBufferStrategy:(long long)arg1;
+ (long long)getTPDemuxerType:(int)arg1;
+ (int)getNativeDemuxerType:(long long)arg1;
+ (long long)getTPReduceLatencyAction:(int)arg1;
+ (int)getNativeReduceLatencyAction:(long long)arg1;
+ (long long)getPlayerVideoHevcSeiTypeWithNativeSeiType:(int)arg1;
+ (long long)getPlayerVideoH264SeiTypeWithNativeSeiType:(int)arg1;
+ (long long)getPlayerMediaTypeWithNativeMediaType:(int)arg1;
+ (int)getNativePixelFormatWithPlayerPixelFormat:(long long)arg1;
+ (long long)getPlayerPixelFormatWithNativePixelFormat:(int)arg1;
+ (int)getNativeSampleFormatWithPlayerSampleFormat:(long long)arg1;
+ (long long)getPlayerSampleFormatWithNativeSampleFormat:(int)arg1;
+ (int)getNativeVideoGravityWithPlayerVideoGravity:(unsigned long long)arg1;
+ (unsigned long long)getPlayerVideoGravityWithNativeVideoGravity:(int)arg1;
+ (int)getNativeRendererTypeWithPlayerRendererType:(long long)arg1;
+ (long long)getPlayerRendererTypeWithNativeRendererType:(int)arg1;
+ (long long)getPlayerDecoderTypeWithNativeDecoderType:(int)arg1;
+ (int)getNativeDecoderTypeWithPlayerDecoderType:(long long)arg1;
+ (unsigned long long)getPlayerInfoWithPlayerObjectInfoMessage:(int)arg1;
+ (unsigned long long)getPlayerInfoWithPlayerLongInfoMessage:(int)arg1;
+ (unsigned long long)getPlayerInfoWithPlayerAsyncCallMessage:(int)arg1;
+ (int)getNativeOptionalIDWithTPOptionalID:(unsigned long long)arg1;
+ (int)getNativeInitConfigKeyWithTPOptionalID:(unsigned long long)arg1;
+ (int)getNativePropertyIDWithTPPropertyKey:(long long)arg1;
+ (int)getNativeSeekModeWithTPSeekMode:(long long)arg1;
+ (long long)getActionResultWithError:(int)arg1;
+ (long long)getTPCodecTypeWithNativeCodecId:(int)arg1;
+ (int)getNativeCodecIdWithTPCodecType:(long long)arg1;

@end

