//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCImageFullScreenWindowForHBV4;

@interface WCImageFullScreanViewMgrForHBV4
{
    WCImageFullScreenWindowForHBV4 *m_view;
}

- (void).cxx_destruct;
- (void)onWindowAnimationHide;
- (void)onWindowAnimationWillHide;
- (void)showErrorTip:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlocked;
- (void)cancelCaptureFakeWindow;
- (void)captureFakeWindow;
- (_Bool)isWindowShown;
- (void)animationHideToLeft;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)animationShowWithHint:(id)arg1;
- (void)forceHideWindow;
- (id)getWCImageFullScreenView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

