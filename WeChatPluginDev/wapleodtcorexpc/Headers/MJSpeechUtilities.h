//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJSpeechUtilities : NSObject
{
}

+ (long long)queryAsyncSpeechSynthRequestWithSubmitTaskID:(id)arg1 contextBuff:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (long long)submitAsyncSpeechSynthRequestWithSubmitTaskID:(id)arg1 text:(id)arg2 materialID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (long long)queryAsyncSpeechCloneRequestWithSubmitTaskID:(id)arg1 contextBuff:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (long long)submitAsyncSpeechCloneRequestWithWithAudioID:(id)arg1 voiceID:(id)arg2 audioSlice:(id)arg3 text:(id)arg4 extraParams:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (long long)requestSpeechCloneRegTextWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)splitToSlicesFromAudioData:(id)arg1;
+ (id)spliceTTSResponsesWithPCMDatas:(id)arg1 captionItems:(id)arg2 totalDuration:(CDStruct_1b6d18a9)arg3 sampleRate:(long long)arg4 bitsPerChannel:(long long)arg5;
+ (id)changeSpeedWithPCMData:(id)arg1 audioDuration:(double)arg2 targetDuration:(double)arg3 sampleRate:(long long)arg4 bitsPerChannel:(long long)arg5;
+ (id)createZeroValuePCMDataWithPaddingDuration:(double)arg1 sampleRate:(long long)arg2 bitsPerChannel:(long long)arg3;
+ (id)alignByBytesPerSampleWithPCMData:(id)arg1 bytesPerSample:(long long)arg2;
+ (double)getAudioDurationWithPCMData:(id)arg1 sampleRate:(long long)arg2 bitsPerChannel:(long long)arg3;
+ (long long)queryAsyncTTSRequestWithSubmitTaskID:(id)arg1 materialID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (long long)submitAsyncTTSRequestWithText:(id)arg1 roleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)fillTTSQueryIntervalWithQueryRespInfo:(id)arg1;
+ (id)fillTTSQueryIntervalWithSubmitRespInfo:(id)arg1 text:(id)arg2;
+ (long long)queryAsyncLongSTTRequestWithAudioID:(id)arg1 submitTaskID:(id)arg2 contextBuff:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (long long)submitAsyncLongSTTRequestWithAudioID:(id)arg1 voiceIDForRequest:(id)arg2 audioSlice:(id)arg3 audioDurationMillis:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (long long)queryAsyncSTTRequestWithAudioID:(id)arg1 submitTaskID:(id)arg2 contextBuff:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (long long)submitAsyncSTTRequestWithAudioID:(id)arg1 audioData:(id)arg2 audioDurationMillis:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (long long)queryAsyncSTSRequestWithAudioID:(id)arg1 submitTaskID:(id)arg2 contextBuff:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (long long)submitAsyncSTSRequestWithAudioID:(id)arg1 audioData:(id)arg2 audioDurationMillis:(unsigned long long)arg3 roleID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (_Bool)extendSegmentDurationToAudioDurationForSegmentViewModel:(id)arg1 audioFileAtPath:(id)arg2;
+ (void)removeVoiceCloneRoleIDFromMMKV;
+ (void)saveVoiceCloneRoleIDToMMKV:(id)arg1;
+ (id)voiceCloneRoleID;
+ (_Bool)isVoiceCloneRoleID:(id)arg1;
+ (_Bool)hasVoiceClonePrefixWithRoleID:(id)arg1;
+ (void)cancelRequests:(id)arg1;
+ (void)cancelRequest:(id)arg1;
+ (void)cancelAllRequests;
+ (id)decodePCMDataWithResponseData:(id)arg1;
+ (id)getExtraParamsForMiaojianTTSTimbreEnabled;
+ (_Bool)hasTTSPrefixInFileName:(id)arg1;
+ (unsigned long long)hashWithCaptionItems:(id)arg1;
+ (_Bool)isValidAudioSampleRate:(long long)arg1;
+ (long long)sampleRateWithRoleID:(id)arg1;
+ (id)parseRoleIDWithMaterialID:(id)arg1;
+ (_Bool)isMiaojianTTSMaterialID:(id)arg1;
+ (_Bool)isVocalEnhancementType:(id)arg1;
+ (_Bool)isTTSType:(id)arg1;
+ (unsigned long long)voiceTypeWithMaterialID:(id)arg1;
+ (_Bool)isValidVoiceMaterialID:(id)arg1;

@end

