//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXLiveContainerView, V2TXLivePlayerJSAdapter, WAMediaCastingRoutePickerController;
@protocol TXLivePlayJSAdapterDelegate;

@interface TXLivePlayJSAdapter : NSObject
{
    _Bool _isVoip;
    _Bool _autoPauseIfNavigate;
    _Bool _autoPauseIfOpenNative;
    _Bool _userNeedPlay;
    _Bool _autoPlay;
    _Bool _autoRotate;
    _Bool _audioOnlyMode;
    _Bool _isFullScreen;
    _Bool _isDebug;
    _Bool _needEvent;
    _Bool _needNetStatus;
    _Bool _needVolumeNotify;
    _Bool _bIsBackgroundInterrupted;
    _Bool _underNativeLive;
    _Bool _needUnmuteAfterInterruption;
    _Bool _enableCasting;
    unsigned int _playerId;
    id <TXLivePlayJSAdapterDelegate> _delegate;
    long long _playStateID;
    NSString *_playUrl;
    NSString *_title;
    V2TXLivePlayerJSAdapter *_v2LivePlayer;
    TXLiveContainerView *_containerView;
    NSString *_appId;
    long long _direction;
    NSString *_objectFit;
    long long _mode;
    long long _audioRoute;
    unsigned long long _pauseType;
    WAMediaCastingRoutePickerController *_mediaCastingRoutePickerController;
    double _currOutputVolume;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(nonatomic) double currOutputVolume; // @synthesize currOutputVolume=_currOutputVolume;
@property(retain, nonatomic) WAMediaCastingRoutePickerController *mediaCastingRoutePickerController; // @synthesize mediaCastingRoutePickerController=_mediaCastingRoutePickerController;
@property(nonatomic) unsigned long long pauseType; // @synthesize pauseType=_pauseType;
@property(nonatomic) _Bool enableCasting; // @synthesize enableCasting=_enableCasting;
@property(nonatomic) _Bool needUnmuteAfterInterruption; // @synthesize needUnmuteAfterInterruption=_needUnmuteAfterInterruption;
@property(nonatomic) _Bool underNativeLive; // @synthesize underNativeLive=_underNativeLive;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) _Bool bIsBackgroundInterrupted; // @synthesize bIsBackgroundInterrupted=_bIsBackgroundInterrupted;
@property(nonatomic) _Bool needVolumeNotify; // @synthesize needVolumeNotify=_needVolumeNotify;
@property(nonatomic) _Bool needNetStatus; // @synthesize needNetStatus=_needNetStatus;
@property(nonatomic) _Bool needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) long long audioRoute; // @synthesize audioRoute=_audioRoute;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *objectFit; // @synthesize objectFit=_objectFit;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) TXLiveContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) V2TXLivePlayerJSAdapter *v2LivePlayer; // @synthesize v2LivePlayer=_v2LivePlayer;
@property(readonly, nonatomic) unsigned int playerId; // @synthesize playerId=_playerId;
@property(nonatomic) _Bool audioOnlyMode; // @synthesize audioOnlyMode=_audioOnlyMode;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool userNeedPlay; // @synthesize userNeedPlay=_userNeedPlay;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) long long playStateID; // @synthesize playStateID=_playStateID;
@property(readonly, nonatomic) _Bool autoPauseIfOpenNative; // @synthesize autoPauseIfOpenNative=_autoPauseIfOpenNative;
@property(readonly, nonatomic) _Bool autoPauseIfNavigate; // @synthesize autoPauseIfNavigate=_autoPauseIfNavigate;
@property(nonatomic) __weak id <TXLivePlayJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isVoip; // @synthesize isVoip=_isVoip;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserveOutputVolume;
- (void)startObserveOutputVolume;
- (_Bool)isVideoPlayerInFullScreenModeWithMediaCastingRoutePickerController:(id)arg1;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoDidCast:(_Bool)arg2;
- (void)onMediaCastingRoutePickerController:(id)arg1 userSelected:(id)arg2;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoPlayerPositionInfoChanged:(double)arg2 duration:(double)arg3;
- (id)navigationControllerToShowGuideWebViewWithMediaCastingRoutePickerController:(id)arg1;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoPlayerStateChanged:(unsigned long long)arg2;
- (void)updateCastingUrlIfNeeded:(id)arg1;
- (void)upnp_pause;
- (void)upnp_play;
- (void)exitCasting;
- (void)reconnectCasting;
- (void)switchCasting;
- (void)startCasting:(id)arg1;
- (_Bool)isAirPlaying;
- (_Bool)isDLNACasting;
- (_Bool)isCasting;
- (void)sendVideoJsEvent:(id)arg1 param:(id)arg2;
- (id)getIdentifier;
- (id)mixListForAudioModule:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioSessionInterruptionBegan;
- (void)audioSessionInterruptionEnd;
- (void)innerAppAudioInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;
- (void)resumeLivePlay;
- (void)pauseLivePlay;
- (void)onSetLivePlaying;
- (void)onAudioVolumeEvaluation:(long long)arg1;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(long long)arg1 withParam:(id)arg2;
- (void)onConfigApplied:(_Bool)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (_Bool)setAudioActive:(_Bool)arg1;
- (_Bool)isPause;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)activeAudioSession;
- (long long)getDirection;
- (void)snapshotVideoEnd;
- (void)snapshotVideoBegin;
- (void)enterForeground;
- (void)enterBackground;
- (void)disbaleFull;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(struct CGRect)arg1;
- (struct CGRect)fullScreenFrame;
- (void)relayoutForRotationWhileFullScreen;
- (void)enableFull;
- (void)resume;
- (void)pause:(unsigned long long)arg1;
- (void)pauseByManual;
- (void)stop;
- (void)play;
- (void)setAudioRoute;
- (void)parseConfigs:(id)arg1;
- (void)handlePlayUrl:(_Bool)arg1;
- (void)snapshotLivePlayer:(_Bool)arg1 isSnapshotStream:(_Bool)arg2 snapshotCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)updateAudioOnlyMode:(_Bool)arg1;
- (void)operateLivePlayerWithType:(id)arg1 data:(id)arg2;
- (void)updateLivePlayerWithConfigs:(id)arg1;
- (void)updateContainerViewRect:(struct CGRect)arg1;
- (id)initLivePlayerWithId:(unsigned int)arg1 configs:(id)arg2 containerView:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

