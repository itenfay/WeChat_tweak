//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EVADProcessor, NSMutableArray, NSString, StreamInputResult, UploadStreamVoiceDataMgr;
@protocol MMNewVoiceInputCacheLogicDelegate;

@interface MMNewVoiceInputCacheLogic : NSObject
{
    unsigned int _audioId;
    unsigned int _voiceOffset;
    unsigned int _currentInputId;
    unsigned int _processVoiceCount;
    unsigned int _languageType;
    NSString *_nsChatName;
    id <MMNewVoiceInputCacheLogicDelegate> _delegate;
    EVADProcessor *_evad;
    UploadStreamVoiceDataMgr *_uploadMgr;
    NSString *_sessionId;
    NSString *_currentVoiceId;
    NSMutableArray *_voiceIdArray;
    StreamInputResult *_result;
    NSString *_nsTranslatedText;
    NSMutableArray *_arrInputQueueItem;
    NSMutableArray *_arrInputQueueItemWhenPausing;
    unsigned long long _transState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long transState; // @synthesize transState=_transState;
@property(retain, nonatomic) NSMutableArray *arrInputQueueItemWhenPausing; // @synthesize arrInputQueueItemWhenPausing=_arrInputQueueItemWhenPausing;
@property(retain, nonatomic) NSMutableArray *arrInputQueueItem; // @synthesize arrInputQueueItem=_arrInputQueueItem;
@property(retain, nonatomic) NSString *nsTranslatedText; // @synthesize nsTranslatedText=_nsTranslatedText;
@property(retain) StreamInputResult *result; // @synthesize result=_result;
@property(nonatomic) unsigned int languageType; // @synthesize languageType=_languageType;
@property(nonatomic) unsigned int processVoiceCount; // @synthesize processVoiceCount=_processVoiceCount;
@property(nonatomic) unsigned int currentInputId; // @synthesize currentInputId=_currentInputId;
@property(nonatomic) unsigned int voiceOffset; // @synthesize voiceOffset=_voiceOffset;
@property(retain, nonatomic) NSMutableArray *voiceIdArray; // @synthesize voiceIdArray=_voiceIdArray;
@property(copy, nonatomic) NSString *currentVoiceId; // @synthesize currentVoiceId=_currentVoiceId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) UploadStreamVoiceDataMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(retain, nonatomic) EVADProcessor *evad; // @synthesize evad=_evad;
@property(nonatomic) __weak id <MMNewVoiceInputCacheLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onGetText:(id)arg1;
- (void)onVADDetectDelayVoice:(id)arg1 Pcm:(id)arg2;
- (void)onVADFilterdSpeakingVoice:(id)arg1;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(id)arg2 HasSpeak:(_Bool)arg3;
- (void)onVADDetectFirstStart:(id)arg1;
- (_Bool)shouldAcceptFirstSlice;
- (void)processDataWithEvad:(id)arg1;
- (void)processVoiceData:(id)arg1;
- (void)endProcessVoiceData;
- (void)startProcessVoiceData;
- (void)transVoiceWithInputQueueItem:(id)arg1;
- (id)getInputQueueItemWithItem:(id)arg1;
- (void)stopTransVoiceWithInputId:(unsigned int)arg1;
- (void)notifyRecordStop;
- (void)resumeVoiceTranslating;
- (void)pauseVoiceTranslating;
- (unsigned int)reTransVoiceWithLanguage:(unsigned int)arg1;
- (unsigned int)startTransVoiceWithLanguage:(unsigned int)arg1 StopNow:(_Bool)arg2;
- (void)createNewVoiceId;
- (_Bool)hadAnyDataSliceToStartTrans;
- (void)setUserName:(id)arg1 AudioId:(unsigned int)arg2;
- (void)initVoiceDataMgr;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

