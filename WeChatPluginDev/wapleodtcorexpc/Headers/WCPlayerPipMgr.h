//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCAudioModule, WCPictureInPictureController, WCPipContentSourcePlayer, WCPlayerPipSessionInfo;

@interface WCPlayerPipMgr
{
    _Bool _enablePictureInPictureSeekButton;
    WCPlayerPipSessionInfo *_sessionInfo;
    WCAudioModule *_activeAudioModule;
    WCPictureInPictureController *_pipController;
    WCPipContentSourcePlayer *_pipSourcePlayer;
    WCPipContentSourcePlayer *_oldPipSourcePlayer;
    NSMutableArray *_arrSessionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrSessionInfo; // @synthesize arrSessionInfo=_arrSessionInfo;
@property(nonatomic) _Bool enablePictureInPictureSeekButton; // @synthesize enablePictureInPictureSeekButton=_enablePictureInPictureSeekButton;
@property(retain, nonatomic) WCPipContentSourcePlayer *oldPipSourcePlayer; // @synthesize oldPipSourcePlayer=_oldPipSourcePlayer;
@property(retain, nonatomic) WCPipContentSourcePlayer *pipSourcePlayer; // @synthesize pipSourcePlayer=_pipSourcePlayer;
@property(retain, nonatomic) WCPictureInPictureController *pipController; // @synthesize pipController=_pipController;
@property(retain, nonatomic) WCAudioModule *activeAudioModule; // @synthesize activeAudioModule=_activeAudioModule;
@property(retain, nonatomic) WCPlayerPipSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)onPictureInPicturePossibleChanged:(_Bool)arg1;
- (void)printPictureInPictureStatus;
- (void)pictureInPictureStateDidChange:(long long)arg1;
- (void)recoverPlayerViewToOriginSuperview:(id)arg1 reason:(long long)arg2;
- (void)movePlayerViewToPipView:(id)arg1 reason:(long long)arg2;
- (id)pipView;
- (_Bool)pictureInPictureActive;
- (long long)pictureInPictureState;
- (void)destoryPipController;
- (void)destoryPipSourcePlayer;
- (void)audioModuleDidDeactive:(id)arg1;
- (void)audioModuleDidActive:(id)arg1;
- (_Bool)isCloseInterruptCleanPipResouce;
- (void)tryDelayStopAutoPipWhenEnterForeground:(id)arg1;
- (void)cleanResourceWhenPipNotSuccStart:(id)arg1;
- (void)stopPipAndCleanResource:(id)arg1;
- (void)unregisterPipSourcePlayer:(id)arg1;
- (void)createPipControllerWithSourcePlayer:(id)arg1;
- (_Bool)tryRegisterPipSourcePlayer:(id)arg1;
- (_Bool)canRegisterNewPipSourcePlayer;
- (id)getPipSessionInfo;
- (void)showPictureInPictureSeekButton:(_Bool)arg1;
- (_Bool)isPipingWithSourcePlayer:(id)arg1;
- (_Bool)isRegisteredPipResource:(id)arg1;
- (_Bool)isPictureInPictureActive;
- (_Bool)isAudioModuleInterruptPipResource;
- (void)invalidatePlaybackState;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

