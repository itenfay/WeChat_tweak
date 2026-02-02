//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LVMinimizeContainerView, LVMinimizeContext, LVStarHandler, NSString, WCFinderLandScapePlayCompleteTipsView;

@interface LVMinimize : NSObject
{
    _Bool _supportContinuePlay;
    LVMinimizeContext *_minimizeContext;
    LVStarHandler *_starHandler;
    LVMinimizeContainerView *_containerView;
    NSString *_sessionId;
    WCFinderLandScapePlayCompleteTipsView *_playCompleteTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLandScapePlayCompleteTipsView *playCompleteTipsView; // @synthesize playCompleteTipsView=_playCompleteTipsView;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool supportContinuePlay; // @synthesize supportContinuePlay=_supportContinuePlay;
@property(retain, nonatomic) LVMinimizeContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) LVStarHandler *starHandler; // @synthesize starHandler=_starHandler;
@property(retain, nonatomic) LVMinimizeContext *minimizeContext; // @synthesize minimizeContext=_minimizeContext;
- (void)_reportPlayTime;
- (void)_reportEndPlay:(unsigned long long)arg1;
- (void)_report:(id)arg1 extraParams:(id)arg2;
- (void)_playNextFeed;
- (void)_cancelPlayNext;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoHiddenBufferingView;
- (void)onVideoShowBufferingView;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)arg1;
- (void)onSimplePlayerRestoreUserInterfaceForPictureInPictureStop:(id)arg1;
- (void)onSimplePlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)finderLandScapePlayCompleteTipsViewDidCountdownActionOver:(id)arg1;
- (void)_enterPlayerDetail;
- (void)minimizeContainerViewClicked:(id)arg1;
- (void)minimizeContainerView:(id)arg1 closeClicked:(id)arg2;
- (void)minimizeContainerView:(id)arg1 playPauseClicked:(id)arg2;
- (_Bool)isMinimizeTaskPlaying:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (id)takeSnapshot:(id)arg1;
- (id)clearMinimize;
- (void)deactiveMinimize:(_Bool)arg1;
- (void)activeMinimize:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_activeMinimize:(_Bool)arg1;
- (void)_updateMinimize:(id)arg1 context:(id)arg2 playerView:(id)arg3;
- (void)setMinimizeFold:(_Bool)arg1;
- (_Bool)isPlaying;
- (_Bool)hasMinimizeTask;
- (_Bool)canMinimize;
- (_Bool)checkCanMinimize:(_Bool)arg1;
- (id)minimizeTaskData;
- (id)minimizeContainerInfo:(id)arg1 size:(struct CGSize)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

