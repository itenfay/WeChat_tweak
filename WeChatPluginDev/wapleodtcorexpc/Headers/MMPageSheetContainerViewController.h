//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, MMPageSheetProviderView, NSString;
@protocol MMPageSheetContainerViewControllerDelegate;

@interface MMPageSheetContainerViewController
{
    _Bool _isPageSheetDismissed;
    id <MMPageSheetContainerViewControllerDelegate> _delegate;
    MMPageSheetProviderView *_providerView;
    unsigned long long _supportOrientation;
    MMPageSheetAdapter *_pageSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheet; // @synthesize pageSheet=_pageSheet;
@property(nonatomic) unsigned long long supportOrientation; // @synthesize supportOrientation=_supportOrientation;
@property(retain, nonatomic) MMPageSheetProviderView *providerView; // @synthesize providerView=_providerView;
@property(nonatomic) _Bool isPageSheetDismissed; // @synthesize isPageSheetDismissed=_isPageSheetDismissed;
@property(nonatomic) __weak id <MMPageSheetContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getContainerViewController;
- (void)onPageSheetDismiss:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)pageSheetContainerView;
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (void)popPageSheetTo:(id)arg1 animated:(_Bool)arg2;
- (void)popPageSheetWithAnimated:(_Bool)arg1;
- (void)pushPageSheet:(id)arg1 animated:(_Bool)arg2;
- (void)updateContentHeightWithAnimated:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showPageSheetAnimated:(_Bool)arg1 parentView:(id)arg2 parentViewController:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)setupWithProvider:(id)arg1;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)pageSheetPresentAnimateWillBegin:(id)arg1;
- (void)pageSheetContainerDidDismiss:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(_Bool)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)hostViewController;
- (id)pageSheetAdapter;
- (void)dealloc;
- (id)initWithPageSheet:(id)arg1;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfContainerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

