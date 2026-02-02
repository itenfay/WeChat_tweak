//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoBGMPlayer, NSString, WCWidgetPlayerParams;

@interface WCWidgetPlayer : NSObject
{
    WCWidgetPlayerParams *_params;
    EditVideoBGMPlayer *_bgmPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) WCWidgetPlayerParams *params; // @synthesize params=_params;
- (void)_initBGMPlayerIfNeeded;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)_tryToUpdateBgmPlayerToMute:(_Bool)arg1;
- (void)_deactiveAudioModule;
- (void)_activeAudioModule;
- (void)_updateAudioSession;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)_changeHiddenOverlayView:(_Bool)arg1;
- (void)onPlayerChangeHidden:(_Bool)arg1;
- (_Bool)isPlayerMuted;
- (void)_changeMutedBGMMusic:(_Bool)arg1;
- (void)onPlayerChangedMute:(_Bool)arg1;
- (void)_restartBGMMusic;
- (void)_restartOverlayView;
- (void)onPlayerRestarted;
- (void)_stopBGMMusic;
- (void)_stopOverlayView;
- (void)onPlayerStopped;
- (void)_seekBGMMusicToTimeSec:(double)arg1;
- (void)_seekOverlayViewToTimeSec:(double)arg1;
- (void)onPlayerSeekedToTimeSec:(double)arg1;
- (void)_pauseBGMMusic;
- (void)_pauseOverlayViewLayer;
- (void)_pauseOverlayView;
- (void)onPlayerPaused;
- (void)_resumeBGMMusic;
- (void)_resumeOverlayViewLayer;
- (void)_resumeOverlayView;
- (void)onPlayerResumed;
- (void)onPlayerRelayoutToSize:(struct CGSize)arg1 atCenter:(struct CGPoint)arg2 scaleByHeight:(_Bool)arg3;
- (void)onPlayerRelayoutToSize:(struct CGSize)arg1 atOrigin:(struct CGPoint)arg2 scaleByHeight:(_Bool)arg3;
- (void)_unbindSuperlayer;
- (void)_unbindSuperview;
- (void)unbindPlayer;
- (_Bool)hasBoundSuperlayer:(id)arg1;
- (void)bindSuperlayer:(id)arg1 atZPosition:(double)arg2;
- (void)bindSuperlayer:(id)arg1;
- (_Bool)hasBoundSuperview:(id)arg1;
- (void)bindSuperview:(id)arg1 aboveView:(id)arg2;
- (void)bindSuperview:(id)arg1;
- (void)_clear;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

