//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, TingItem, TingPlatformPlayerCore, TingPlayTaskListenerBridge, TingPlayerAudioModuleHelper, TingPlayerContext, TingPlayerDisplayElement;
@protocol TingAudioFocusCallback, TingPlayTask;

@interface TingPlatformPlayer : NSObject
{
    int _playTaskType;
    unsigned int _playerId;
    id <TingPlayTask> _playTask;
    NSString *_playTaskId;
    TingPlatformPlayerCore *_curPlayerCore;
    TingPlatformPlayerCore *_playerCore;
    TingPlayerAudioModuleHelper *_audioModuleHelper;
    id <TingAudioFocusCallback> _audioFocusCallback;
    TingPlayerContext *_playingContext;
    TingPlayTaskListenerBridge *_listenerBridge;
    NSRecursiveLock *_lock;
}

+ (id)fromURObj:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) TingPlayTaskListenerBridge *listenerBridge; // @synthesize listenerBridge=_listenerBridge;
@property(retain, nonatomic) TingPlayerContext *playingContext; // @synthesize playingContext=_playingContext;
@property(retain, nonatomic) id <TingAudioFocusCallback> audioFocusCallback; // @synthesize audioFocusCallback=_audioFocusCallback;
@property(retain, nonatomic) TingPlayerAudioModuleHelper *audioModuleHelper; // @synthesize audioModuleHelper=_audioModuleHelper;
@property(retain, nonatomic) TingPlatformPlayerCore *playerCore; // @synthesize playerCore=_playerCore;
@property(retain, nonatomic, getter=curPlayerCore) TingPlatformPlayerCore *curPlayerCore; // @synthesize curPlayerCore=_curPlayerCore;
@property(nonatomic) unsigned int playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) NSString *playTaskId; // @synthesize playTaskId=_playTaskId;
@property(retain, nonatomic) id <TingPlayTask> playTask; // @synthesize playTask=_playTask;
@property(nonatomic) int playTaskType; // @synthesize playTaskType=_playTaskType;
- (id)currentPlayTaskPlayingContext;
- (void)logError:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)onTingPlayTaskReportAction:(int)arg1 context:(id)arg2;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)notifyPlayTaskEvent:(int)arg1 previousStatus:(int)arg2 currentStatus:(int)arg3 message:(id)arg4;
- (void)notifyPlayTaskStatusChaged:(int)arg1 item:(id)arg2 event:(int)arg3 context:(id)arg4;
- (void)onPlayTaskEvent:(int)arg1 currentState:(int)arg2 previousState:(int)arg3 message:(id)arg4;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onTingPlayerStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)handlePlayingContextChanged:(id)arg1;
- (void)onPlayingIndexChanged:(int)arg1;
- (void)onPlayModeChanged;
- (void)onPlayingItemUpdate:(id)arg1;
- (void)onServiceChanged:(id)arg1;
- (void)onTingItemListenIdAvailable:(id)arg1 item:(id)arg2;
- (void)tingPlayerCore:(id)arg1 onDisplayViewMTKViewCreated:(id)arg2;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onDisplayElementAvailable:(id)arg3;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onDisplayElementFrameOut:(id)arg3;
- (void)_onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onInactivated:(id)arg1 update:(_Bool)arg2;
- (void)onActivated:(id)arg1 taskId:(id)arg2 update:(_Bool)arg3;
- (void)onHeartbeatResponseUpdateWithContext:(id)arg1 extInfo:(id)arg2;
- (void)_onPlayInfoEvent:(int)arg1 context:(id)arg2 msg:(id)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)performOnMainThread:(CDUnknownBlockType)arg1;
- (void)_onPlayerEvent:(int)arg1 item:(id)arg2 msg:(id)arg3;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)requestFocus:(int)arg1 context:(id)arg2;
- (void)_requestFocus:(int)arg1 context:(id)arg2;
- (id)reportContext;
- (id)currentPlayingInfo;
@property(nonatomic) _Bool isDissociative;
@property(nonatomic) _Bool isIsolateModule;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double currentTime;
- (_Bool)checkAndActiveAudioModule;
- (void)setDisableSyncPlayRecord:(_Bool)arg1;
- (void)refreshPlayList;
- (void)switchToMVContext:(id)arg1;
- (void)playWithContext:(id)arg1;
@property(nonatomic) _Bool enableAutoPlayRecommendList;
@property(readonly, nonatomic) TingPlayerDisplayElement *currentDisplayElement;
- (id)tapeItem;
- (void)refreshMembershipOpenStatusIfNeeded;
- (void)setEnableSqQualityOnWwan:(_Bool)arg1;
- (int)getPreferredAudioQuality;
- (void)setPreferredAudioQuality:(int)arg1;
- (_Bool)isPlayRateSupported;
@property(nonatomic) float playRate;
- (void)setPlayRate:(double)arg1 needSave:(_Bool)arg2;
- (void)updatePlayingItem:(id)arg1;
@property(readonly, nonatomic) long long playListCount;
@property(readonly, nonatomic) long long currentIndex;
- (id)genearetePlayingContext;
- (id)generateCurrentItem;
@property(readonly, nonatomic) _Bool shuffled;
- (void)setShuffled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isPlayModeInteractionEnabled;
@property(readonly, nonatomic) int playMode;
- (void)setPlayMode:(int)arg1;
- (void)setShuffled:(_Bool)arg1 saveSettings:(_Bool)arg2;
- (void)setPlayMode:(int)arg1 saveSettings:(_Bool)arg2;
- (void)playNextItemOrTape;
- (_Bool)playNext;
- (_Bool)canPlayNext;
- (void)playPreviousOrSeekToStartPos;
- (_Bool)playPrevious;
- (_Bool)canPlayPrevious;
- (void)clear;
- (void)seek:(double)arg1;
- (_Bool)canSeek;
- (void)resume;
- (void)passivePause;
- (void)pause;
- (void)stopWithContext:(id)arg1;
- (void)stop;
- (void)playCurrentIndex;
- (void)play;
- (void)playWithIndex:(long long)arg1;
- (void)setupPlayerWithconfiguration:(id)arg1;
- (void)_loadListSource:(id)arg1 index:(unsigned long long)arg2 configuration:(id)arg3;
- (void)playWithModel:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (_Bool)hasTapeLoaded;
- (void)setEnableBackupItemFetching:(_Bool)arg1;
@property(readonly, nonatomic) TingItem *currentItem;
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

