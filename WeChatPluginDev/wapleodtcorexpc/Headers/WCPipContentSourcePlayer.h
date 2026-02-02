//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPictureInPictureControllerContentSource, NSString, UIView, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerView;
@protocol WCPipContentSourcePlayerDelegate;

@interface WCPipContentSourcePlayer : NSObject
{
    _Bool _isPipPlaying;
    _Bool _isErrorState;
    _Bool _isDisplayingOnPipWindow;
    _Bool _isOccupyAudioModuleSucc;
    _Bool _isNeedDestoryWhenPipStop;
    _Bool _isDisplayedInPipSucc;
    _Bool _isExpectStartPipWhenResignActive;
    _Bool _isPauseMainPlayerWhenNotStartPip;
    _Bool _ignoreUpdateDisplayLayerViewFrame;
    unsigned int _taskId;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    AVPictureInPictureControllerContentSource *_pipContentSource;
    UIView *_playerSuperView;
    WCPlayerView<WCPipContentSourcePlayerDelegate> *_playerView;
    double _duration;
    long long _displayStopReason;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) long long displayStopReason; // @synthesize displayStopReason=_displayStopReason;
@property(nonatomic) _Bool ignoreUpdateDisplayLayerViewFrame; // @synthesize ignoreUpdateDisplayLayerViewFrame=_ignoreUpdateDisplayLayerViewFrame;
@property(nonatomic) _Bool isPauseMainPlayerWhenNotStartPip; // @synthesize isPauseMainPlayerWhenNotStartPip=_isPauseMainPlayerWhenNotStartPip;
@property(nonatomic) _Bool isExpectStartPipWhenResignActive; // @synthesize isExpectStartPipWhenResignActive=_isExpectStartPipWhenResignActive;
@property(nonatomic) _Bool isDisplayedInPipSucc; // @synthesize isDisplayedInPipSucc=_isDisplayedInPipSucc;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak WCPlayerView<WCPipContentSourcePlayerDelegate> *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak UIView *playerSuperView; // @synthesize playerSuperView=_playerSuperView;
@property(retain, nonatomic) AVPictureInPictureControllerContentSource *pipContentSource; // @synthesize pipContentSource=_pipContentSource;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(nonatomic) _Bool isNeedDestoryWhenPipStop; // @synthesize isNeedDestoryWhenPipStop=_isNeedDestoryWhenPipStop;
@property(nonatomic) _Bool isOccupyAudioModuleSucc; // @synthesize isOccupyAudioModuleSucc=_isOccupyAudioModuleSucc;
@property(nonatomic) _Bool isDisplayingOnPipWindow; // @synthesize isDisplayingOnPipWindow=_isDisplayingOnPipWindow;
@property(nonatomic) _Bool isErrorState; // @synthesize isErrorState=_isErrorState;
@property(nonatomic) _Bool isPipPlaying; // @synthesize isPipPlaying=_isPipPlaying;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (void)onPipSourcePlayerUnRegisterPipResource:(id)arg1;
- (void)failToStartPictureInPictureWithError:(id)arg1;
- (void)restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pictureInPictureStateDidChange:(long long)arg1;
- (void)onWillGeneratePipWindowWhenResignActive;
- (void)onApplicationWillResignActive;
- (_Bool)isWillGeneratePipWindow;
@property(readonly, nonatomic) _Bool isRegisteredPipResource;
- (void)onStopDisplayOnPipWindow:(long long)arg1;
- (void)onStartDisplayOnPipWindow:(long long)arg1;
- (id)getDisplayView;
- (void)updateDisplayLayerViewFrame;
- (void)onRenderedOneFrame:(id)arg1;
- (void)onPlayCallback:(double)arg1;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayerDidPlayToEnd;
- (void)onPlayerEnterErrorState;
- (void)setLoopBack:(_Bool)arg1;
- (void)setRate:(double)arg1;
- (void)onBufferingComplete;
- (void)onStartBuffering;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)pause:(_Bool)arg1;
- (void)play;
- (_Bool)isForbidStartPlay;
- (void)occupyAudioModuleSucc:(_Bool)arg1;
- (id)getPipActiveAudioModule;
- (void)onActiveAudioModuleFail;
- (void)stopPipAndCleanResource;
- (void)tryRegisterPipControllerResource;
- (void)unregisterPipResourcre;
- (void)createPipResouce;
- (void)tryCreateAndRegisterPipResource;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)arg1;
- (_Bool)isEnqueueSampleBufferType;
- (id)displayLayerView;
- (void)cleanResourceWhenPipNotSuccStart;
- (void)onApplicationBecomeActive;
- (void)tryClosePipWhenAppActive;
- (void)addNotification;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 playArgs:(id)arg2 playbackInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

