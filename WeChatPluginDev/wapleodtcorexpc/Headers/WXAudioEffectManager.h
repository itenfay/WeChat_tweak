//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, WXAudioEffectManagerDelegate;

@interface WXAudioEffectManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    void *_manager;
    NSMutableDictionary *_audioEffectMap;
    void *_audioEngine;
    id <WXAudioEffectManagerDelegate> _delegate;
    shared_ptr_e3b70170 _callback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WXAudioEffectManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) void *audioEngine; // @synthesize audioEngine=_audioEngine;
@property(retain, nonatomic) NSMutableDictionary *audioEffectMap; // @synthesize audioEffectMap=_audioEffectMap;
@property(nonatomic) shared_ptr_e3b70170 callback; // @synthesize callback=_callback;
@property(nonatomic) void *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)onBgmPlayEnd:(long long)arg1 code:(long long)arg2 reason:(id)arg3;
- (void)onBgmPlayProgress:(long long)arg1 currentTime:(long long)arg2 totalTime:(long long)arg3;
- (void)onBgmPlayStart:(long long)arg1 code:(long long)arg2 reason:(id)arg3;
- (void)logApi:(id)arg1;
- (void)dispatchOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 isAsync:(_Bool)arg3;
- (void)syncRun:(CDUnknownBlockType)arg1;
- (void)asyncDelegateRun:(CDUnknownBlockType)arg1;
- (void)asyncRun:(CDUnknownBlockType)arg1;
- (void)_seekMusicToPosInMS:(long long)arg1 pts:(long long)arg2;
- (void)_seekMusicToPosInBytes:(long long)arg1 position:(long long)arg2;
- (long long)_getMusicCurrentPosInMS:(long long)arg1;
- (void)_setMusicPlayoutVolume:(long long)arg1 volume:(long long)arg2;
- (void)_setMusicPublishVolume:(long long)arg1 volume:(long long)arg2;
- (void)_setAllMusicVolume:(long long)arg1;
- (void)_resumePlayMusic:(long long)arg1;
- (void)_pausePlayMusic:(long long)arg1;
- (void)_stopPlayMusic:(long long)arg1;
- (void)_startPlayMusic:(long long)arg1 params:(id)arg2 onStart:(CDUnknownBlockType)arg3 onProgress:(CDUnknownBlockType)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)resumeAll;
- (void)pauseAll;
- (void)setAllAudioEffectsVolume:(long long)arg1;
- (void)stopAllAudioEffects;
- (void)stopAll;
- (long long)getMusicDurationInMS:(id)arg1;
- (void)seekMusicToPosInMS:(int)arg1 pts:(long long)arg2;
- (long long)getMusicCurrentPosInMS:(int)arg1;
- (void)setAllMusicVolume:(long long)arg1;
- (void)setMusicPlayoutVolume:(int)arg1 volume:(long long)arg2;
- (void)setMusicPublishVolume:(int)arg1 volume:(long long)arg2;
- (void)resumePlayMusic:(int)arg1;
- (void)pausePlayMusic:(int)arg1;
- (void)stopPlayMusic:(int)arg1;
- (void)startPlayMusic:(id)arg1 onStart:(CDUnknownBlockType)arg2 onProgress:(CDUnknownBlockType)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)setVoiceVolume:(long long)arg1;
- (void)setVoiceEarMonitorVolume:(long long)arg1;
- (void)enableVoiceEarMonitor:(_Bool)arg1;
- (id)initWithQueue:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

