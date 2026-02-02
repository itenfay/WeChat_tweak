//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIViewController, WCFinderSteramProfileBarView, WCWebSearchViewControllerNewH5;

@interface WCWebSearchHalfScreenViewController
{
    _Bool _isFullScreen;
    WCFinderSteramProfileBarView *_headerView;
    WCWebSearchViewControllerNewH5 *_searchPage;
    UIViewController *_actualPresentingViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *actualPresentingViewController; // @synthesize actualPresentingViewController=_actualPresentingViewController;
@property(retain, nonatomic) WCWebSearchViewControllerNewH5 *searchPage; // @synthesize searchPage=_searchPage;
@property(retain, nonatomic) WCFinderSteramProfileBarView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (_Bool)needCloseOnOrientationChanged;
- (_Bool)shouldHideNavigationBar;
- (_Bool)useTransparentNavibar;
- (void)handleViewPanGesture:(id)arg1 fromScrollView:(_Bool)arg2;
- (void)handleScrollViewPanGesture:(id)arg1;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1 uiConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

