//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJSpeechManager : NSObject
{
    SharedPtr_c8455cb5 _backingSpeechManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_c8455cb5 backingSpeechManager; // @synthesize backingSpeechManager=_backingSpeechManager;
- (long long)queryAsyncSpeechSynthRequestWithSubmitTaskID:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 contextBuff:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (long long)submitAsyncSpeechSynthRequestWithInfo:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)queryAsyncSpeechCloneRequestWithSubmitTaskID:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 contextBuff:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (long long)submitAsyncSpeechCloneRequestWithInfo:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)queryAsyncTTSRequestWithSubmitTaskID:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 contextBuff:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (long long)submitAsyncTTSRequestWithInfo:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)queryAsyncSpeechRequestWithSubmitTaskID:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 contextBuff:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (long long)submitAsyncSpeechRequestWithAudioData:(id)arg1 postParams:(id)arg2 voiceIDForHttp:(id)arg3 iLinkAppRequest:(id)arg4 iLinkCmd:(id)arg5 audioDurationMillis:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)cancelAll;
- (void)cancelTask:(long long)arg1;
- (long long)requestSpeechToSpeechWithAudioData:(id)arg1 postParams:(id)arg2 voiceIDForHttp:(id)arg3 iLinkAppRequest:(id)arg4 iLinkCmd:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (long long)requestFullSpeechRecognitionWithAudioData:(id)arg1 postParams:(id)arg2 voiceIDForHttp:(id)arg3 iLinkAppRequest:(id)arg4 iLinkCmd:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (long long)requestSpeechRecognitionWithAudioData:(id)arg1 postParams:(id)arg2 iLinkAppRequest:(id)arg3 iLinkCmd:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (long long)requestSpeechInfoWithRequestParams:(id)arg1 requestBuff:(id)arg2 iLinkAppRequest:(id)arg3 iLinkCmd:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithBackingSpeechManager:(const void *)arg1;

@end

