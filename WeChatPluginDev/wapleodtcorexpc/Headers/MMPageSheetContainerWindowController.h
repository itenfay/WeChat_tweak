//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetProviderView, NSString;
@protocol MMPageSheetContainerDelegate;

@interface MMPageSheetContainerWindowController
{
    _Bool _pageSheetDismissed;
    MMPageSheetProviderView *_providerView;
    unsigned long long _supportOrientation;
    id <MMPageSheetContainerDelegate> _containerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pageSheetDismissed; // @synthesize pageSheetDismissed=_pageSheetDismissed;
@property(nonatomic) __weak id <MMPageSheetContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) unsigned long long supportOrientation; // @synthesize supportOrientation=_supportOrientation;
@property(retain, nonatomic) MMPageSheetProviderView *providerView; // @synthesize providerView=_providerView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)getCurTargetRatioValue;
- (id)pageSheetContainerView;
- (void)popPageSheetTo:(id)arg1 animated:(_Bool)arg2;
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (void)popPageSheetWithAnimated:(_Bool)arg1;
- (void)pushPageSheet:(id)arg1 animated:(_Bool)arg2;
- (void)updateContentHeightWithAnimated:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showPageSheetAnimated:(_Bool)arg1 parentView:(id)arg2 parentViewController:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)setupWithProvider:(id)arg1;
- (id)getContainerViewController;
- (void)onPageSheetDismiss:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)resetSupportOrientation;
- (void)notifySupportedOrientationMaskShouldAdjust;
- (_Bool)supportAdjustOrientationMask;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldTransferTouchEventInPoint:(struct CGPoint)arg1;
- (_Bool)shouldHandleStatusBarAppearance;
- (void)hideWithAnimated:(int)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

