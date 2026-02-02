//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCImageFullScreenViewController, WCMediaItemWrap;

@interface WCImageFullScreanViewMgr
{
    _Bool _isFullScreenPresented;
    NSString *_nsFromVCName;
    WCImageFullScreenViewController *m_controller;
    WCMediaItemWrap *_currentMediaItemWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMediaItemWrap *currentMediaItemWrap; // @synthesize currentMediaItemWrap=_currentMediaItemWrap;
- (void)photoVCHideAnimationCompleted;
- (id)getViewController;
- (void)onAnimateFadeOut;
- (void)windowHideToLeft;
- (void)onViewControllerAnimationHideWillStop;
- (void)onViewControllerAnimationHideStop;
- (void)fullScreenViewController:(id)arg1 didClickOriginalArticle:(id)arg2;
- (void)fullScreenViewController:(id)arg1 didScrollFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)fullScreenViewControllerDidBePopedOrDismissed:(id)arg1;
- (void)fullScreenViewControllerWillBePushedOrPresented:(id)arg1;
- (void)updateCurrentMediaItemWrap:(id)arg1;
- (void)changePresentedState:(_Bool)arg1;
- (void)handleOnWindowAnimationHide;
- (void)onWindowAnimationHide;
- (void)onWindowAnimationWillHide;
- (_Bool)isWindowShown;
- (void)animationHideToLeft;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4 From3DTouch:(_Bool)arg5 scene:(unsigned long long)arg6 navigatingDelegate:(id)arg7;
- (void)animationShowWithParams:(id)arg1 fromViewController:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)animationShowWithHint:(id)arg1 fromViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

