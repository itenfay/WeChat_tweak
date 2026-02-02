//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAudioFileManager, NSMutableArray, NSMutableDictionary, UBDictionarySignal;

@interface MJSpeechManager : NSObject
{
    MJAudioFileManager *_audioFileManager;
    UBDictionarySignal *_stsRequestStatusDidUpdateSignal;
    UBDictionarySignal *_sttRequestStatusDidUpdateSignal;
    UBDictionarySignal *_ttsRequestStatusDidUpdateSignal;
    UBDictionarySignal *_vocalEnhancementRequestStatusDidUpdateSignal;
    UBDictionarySignal *_longSTTRequestStatusDidUpdateSignal;
    UBDictionarySignal *_speechCloneRequestStatusDidUpdateSignal;
    long long _maxConcurrentCount;
    NSMutableDictionary *_sttAsyncTasksByAudioID;
    NSMutableDictionary *_stsAsyncTasksByAudioID;
    NSMutableDictionary *_ttsAsyncTasksByText;
    NSMutableDictionary *_vocalEnhancementAsyncTasksByAudioID;
    NSMutableDictionary *_ttsAsyncTaskGroupsByAudioID;
    NSMutableDictionary *_sttAsyncTaskGroupsByAudioID;
    NSMutableDictionary *_speechCloneAsyncTaskGroupsByAudioID;
    NSMutableArray *_pendingSpeechAsyncRequestItems;
    NSMutableArray *_pendingVocalEnhancementItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *pendingVocalEnhancementItems; // @synthesize pendingVocalEnhancementItems=_pendingVocalEnhancementItems;
@property(readonly, nonatomic) NSMutableArray *pendingSpeechAsyncRequestItems; // @synthesize pendingSpeechAsyncRequestItems=_pendingSpeechAsyncRequestItems;
@property(readonly, nonatomic) NSMutableDictionary *speechCloneAsyncTaskGroupsByAudioID; // @synthesize speechCloneAsyncTaskGroupsByAudioID=_speechCloneAsyncTaskGroupsByAudioID;
@property(readonly, nonatomic) NSMutableDictionary *sttAsyncTaskGroupsByAudioID; // @synthesize sttAsyncTaskGroupsByAudioID=_sttAsyncTaskGroupsByAudioID;
@property(readonly, nonatomic) NSMutableDictionary *ttsAsyncTaskGroupsByAudioID; // @synthesize ttsAsyncTaskGroupsByAudioID=_ttsAsyncTaskGroupsByAudioID;
@property(readonly, nonatomic) NSMutableDictionary *vocalEnhancementAsyncTasksByAudioID; // @synthesize vocalEnhancementAsyncTasksByAudioID=_vocalEnhancementAsyncTasksByAudioID;
@property(readonly, nonatomic) NSMutableDictionary *ttsAsyncTasksByText; // @synthesize ttsAsyncTasksByText=_ttsAsyncTasksByText;
@property(readonly, nonatomic) NSMutableDictionary *stsAsyncTasksByAudioID; // @synthesize stsAsyncTasksByAudioID=_stsAsyncTasksByAudioID;
@property(readonly, nonatomic) NSMutableDictionary *sttAsyncTasksByAudioID; // @synthesize sttAsyncTasksByAudioID=_sttAsyncTasksByAudioID;
@property(readonly, nonatomic) long long maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
@property(readonly, nonatomic) UBDictionarySignal *speechCloneRequestStatusDidUpdateSignal; // @synthesize speechCloneRequestStatusDidUpdateSignal=_speechCloneRequestStatusDidUpdateSignal;
@property(readonly, nonatomic) UBDictionarySignal *longSTTRequestStatusDidUpdateSignal; // @synthesize longSTTRequestStatusDidUpdateSignal=_longSTTRequestStatusDidUpdateSignal;
@property(readonly, nonatomic) UBDictionarySignal *vocalEnhancementRequestStatusDidUpdateSignal; // @synthesize vocalEnhancementRequestStatusDidUpdateSignal=_vocalEnhancementRequestStatusDidUpdateSignal;
@property(readonly, nonatomic) UBDictionarySignal *ttsRequestStatusDidUpdateSignal; // @synthesize ttsRequestStatusDidUpdateSignal=_ttsRequestStatusDidUpdateSignal;
@property(readonly, nonatomic) UBDictionarySignal *sttRequestStatusDidUpdateSignal; // @synthesize sttRequestStatusDidUpdateSignal=_sttRequestStatusDidUpdateSignal;
@property(readonly, nonatomic) UBDictionarySignal *stsRequestStatusDidUpdateSignal; // @synthesize stsRequestStatusDidUpdateSignal=_stsRequestStatusDidUpdateSignal;
@property(readonly, nonatomic) MJAudioFileManager *audioFileManager; // @synthesize audioFileManager=_audioFileManager;
- (id)audioDataWithIdentifier:(id)arg1;
- (id)pcmDataWithIdentifier:(id)arg1;
- (void)cancelAllRequests;
- (id)ttsSpeechFilePathWithText:(id)arg1 roleID:(id)arg2;
- (id)speechFilePathWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)dealloc;
- (id)initWithAudioFileManager:(id)arg1;
- (void)cancelAllSpeechCloneAsyncRequests;
- (void)cancelSpeechClonesyncRequestWithAudioID:(id)arg1;
- (void)asyncRequestSpeechCloneWithAudioID:(id)arg1 audioData:(id)arg2 text:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)speechCloneAsyncRequestStatusWithAudioID:(id)arg1;
- (void)_sendSpeechCloneGroupAsyncRequestWithQueueItem:(id)arg1;
- (void)enqueueSpeechCloneGroupAsyncRequestWithAudioID:(id)arg1 audioData:(id)arg2 text:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getOrCreateSpeechCloneAsyncTaskGroupWithAudioID:(id)arg1;
- (id)getSpeechCloneAsyncTaskGroupWithAudioID:(id)arg1;
- (void)cancelAllVocalEnhancementAsyncRequests;
- (void)cancelVocalEnhancementAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)asyncVocalEnhancementRequestWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)vocalEnhancementAsyncRequestStatusWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)_sendVocalEnhancementAsyncRequestWithQueueItem:(id)arg1;
- (void)dequeueVocalEnhancementAsyncRequestAndSend;
- (void)checkVocalEnhancementAsyncRequestQueue;
- (void)enqueueVocalEnhancementAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)runningVocalEnhancementAsyncTaskCount;
- (id)getOrCreateVocalEnhancementAsyncTaskWithAudioID:(id)arg1 roleID:(id)arg2;
- (id)getVocalEnhancementAsyncTaskWithAudioID:(id)arg1 roleID:(id)arg2;
- (long long)runningSpeechAsyncTaskCount;
- (void)_sendSTTGroupAsyncRequestWithQueueItem:(id)arg1;
- (void)_sendTTSGroupAsyncRequestWithQueueItem:(id)arg1;
- (void)_sendTTSAsyncRequestWithQueueItem:(id)arg1;
- (void)_sendSTSAsyncRequestWithQueueItem:(id)arg1;
- (void)dequeueAsyncRequestAndSend;
- (void)checkSpeechAsyncRequestQueue;
- (void)enqueueSTTGroupAsyncRequestWithAudioID:(id)arg1 audioData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enqueueTTSGroupAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3 captionItems:(id)arg4 totalDuration:(CDStruct_1b6d18a9)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)enqueueTTSAsyncRequestWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enqueueSTSAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2 audioData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getOrCreateSTTAsyncTaskGroupWithAudioID:(id)arg1;
- (id)getSTTAsyncTaskGroupWithAudioID:(id)arg1;
- (void)cancelAllLongSTTAsyncRequests;
- (void)cancelLongSTTAsyncRequestWithAudioID:(id)arg1;
- (void)asyncRequestLongSTTWithAudioID:(id)arg1 audioData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)longSTTAsyncRequestStatusWithAudioID:(id)arg1;
- (id)sttAsyncTaskWithAudioID:(id)arg1;
- (void)cancelAllSTTAsyncRequests;
- (void)cancelSTTAsyncRequestWithAudioID:(id)arg1;
- (void)asyncRequestSTTWithAudioID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)sttAsyncRequestStatusWithAudioID:(id)arg1;
- (id)getOrCreateTTSAsyncTaskGroupWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3;
- (id)getTTSAsyncTaskGroupWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)cancelAllTTSAsyncRequests;
- (void)cancelTTSAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)asyncRequestTTSWithAudioID:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3 captionItems:(id)arg4 totalDuration:(CDStruct_1b6d18a9)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (unsigned long long)ttsAsyncRequestStatusWithAudioID:(id)arg1 roleID:(id)arg2;
- (id)getOrCreateTTSAsyncTaskWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3;
- (id)getTTSAsyncTaskWithText:(id)arg1 roleID:(id)arg2;
- (void)cancelTTSAsyncRequestWithText:(id)arg1 roleID:(id)arg2;
- (void)asyncRequestTTSWithText:(id)arg1 roleID:(id)arg2 isCloneTimbre:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)ttsAsyncRequestStatusWithText:(id)arg1 roleID:(id)arg2;
- (id)getOrCreateSTSAsyncTaskWithAudioID:(id)arg1 roleID:(id)arg2;
- (id)getSTSAsyncTaskWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)cancelAllSTSAsyncRequests;
- (void)cancelSTSAsyncRequestWithAudioID:(id)arg1 roleID:(id)arg2;
- (void)asyncRequestSTSWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)stsAsyncRequestStatusWithAudioID:(id)arg1 roleID:(id)arg2;

@end

