//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCImageFullScreenViewControllerForHBV4;
@protocol WCImageFullScreenWindowDelegate;

@interface WCImageFullScreenWindowForHBV4
{
    WCImageFullScreenViewControllerForHBV4 *m_controller;
    id <WCImageFullScreenWindowDelegate> _wc_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id <WCImageFullScreenWindowDelegate> wc_delegate; // @synthesize wc_delegate=_wc_delegate;
- (void)showErrorTip:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlocked;
- (void)cancelCaptureFakeWindow;
- (void)captureFakeWindow;
- (void)onViewBePopByMsgBar;
- (void)onAnimateFadeOut;
- (void)windowHideToLeft;
- (void)windowNeed2Show;
- (void)windowNeed2Hide;
- (void)onViewControllerAnimationHideWillStop;
- (void)onViewControllerAnimationHideStop;
- (void)onViewControllerAnimationShowWillStart;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)animationShowWithHint:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
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

