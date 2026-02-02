//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AudioRecorderUserData, MMTimer, NSRecursiveLock, NSString;

@interface BaseAudioRecorder : NSObject
{
    struct RecorderState *mAqData;
    _Bool mIsNeedNotifyOtherAudio;
    NSRecursiveLock *_dataLock;
    _Bool needStopInBackground;
    _Bool _receivedHandleInputBufferCallback;
    _Bool _bHadTryFixRecord;
    _Bool _isInputMuted;
    _Bool _fixInputMutedFlag;
    _Bool _fixInputMutedResult;
    _Bool _shouldMixWithSpeaker;
    unsigned int _receivedBufferCount;
    int _tryFixRecordFlag;
    unsigned int _availableChannels;
    AudioRecorderUserData *_mUserData;
    MMTimer *_meterTimer;
    NSRecursiveLock *_lock;
    struct AudioChannelLayout _availableChannelLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) MMTimer *meterTimer; // @synthesize meterTimer=_meterTimer;
@property(readonly, nonatomic) struct AudioChannelLayout availableChannelLayout; // @synthesize availableChannelLayout=_availableChannelLayout;
@property(readonly, nonatomic) unsigned int availableChannels; // @synthesize availableChannels=_availableChannels;
@property(nonatomic) _Bool shouldMixWithSpeaker; // @synthesize shouldMixWithSpeaker=_shouldMixWithSpeaker;
@property(nonatomic) _Bool fixInputMutedResult; // @synthesize fixInputMutedResult=_fixInputMutedResult;
@property(nonatomic) _Bool fixInputMutedFlag; // @synthesize fixInputMutedFlag=_fixInputMutedFlag;
@property(nonatomic) _Bool isInputMuted; // @synthesize isInputMuted=_isInputMuted;
@property(nonatomic) int tryFixRecordFlag; // @synthesize tryFixRecordFlag=_tryFixRecordFlag;
@property(nonatomic) _Bool bHadTryFixRecord; // @synthesize bHadTryFixRecord=_bHadTryFixRecord;
@property(nonatomic) unsigned int receivedBufferCount; // @synthesize receivedBufferCount=_receivedBufferCount;
@property(nonatomic) _Bool receivedHandleInputBufferCallback; // @synthesize receivedHandleInputBufferCallback=_receivedHandleInputBufferCallback;
@property(retain) AudioRecorderUserData *mUserData; // @synthesize mUserData=_mUserData;
@property(nonatomic) _Bool needStopInBackground; // @synthesize needStopInBackground;
@property(readonly, retain, nonatomic) NSRecursiveLock *dataLock; // @synthesize dataLock=_dataLock;
@property(nonatomic) struct RecorderState *pAqData; // @synthesize pAqData=mAqData;
@property(nonatomic) _Bool needNotifyOtherAudio; // @synthesize needNotifyOtherAudio=mIsNeedNotifyOtherAudio;
- (void)TimerCheckMeter;
- (void)setBeginSendData;
- (void)setForTranslate;
- (void)setForceDelete;
- (long long)getVoiceFormat;
- (void)setUserData:(id)arg1;
- (long long)RecordingTime;
- (void)setRecordStatus:(int)arg1;
- (unsigned int)RecordStatus;
- (_Bool)isRecording;
- (void)autostop;
- (void)stopInBackground;
- (void)cleanResource;
- (void)stopWithFail;
- (void)stop;
- (void)destoryQueue;
- (void)stopButNotNotify;
- (_Bool)prepareRecordButNotNotify;
- (void)ayncPrepareRecordWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)prepareRecord;
- (void)setDelegate:(id)arg1;
- (void)createFile:(id)arg1;
- (void)EndNotifyOnMainThread;
- (void)asyncRecord:(CDUnknownBlockType)arg1;
- (void)record;
- (int)real_record;
- (_Bool)canAutoRestart;
- (_Bool)shouldAutoRestartWith:(int)arg1;
- (_Bool)isArgumentError:(int)arg1;
- (void)reportAudioQueueRestartError:(int)arg1;
- (void)reportAudioQueueRestartOk;
- (void)reportAudioQueueRestartFailed;
- (void)reportAudioQueueStartError:(int)arg1;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)updateStatus;
- (_Bool)initQueue;
- (void)dealloc;
- (void)updateSession;
- (id)init;
- (void)unregisterInter;
- (void)registerInter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

