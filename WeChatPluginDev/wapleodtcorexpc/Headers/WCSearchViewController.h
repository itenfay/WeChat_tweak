//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, NSString, UINavigationController, UIScreenEdgePanGestureRecognizer, UIView, UIViewController, WCSearchBar, _TtC6WeChat25WCSearchTransitionManager;

@interface WCSearchViewController
{
    _Bool _isPresentFromHeroAnimation;
    _Bool _forceFullScreenPresent;
    _Bool _focusTexfieldWhenFirstShow;
    _Bool _useNoSnapshotTransition;
    _Bool _focusTextfieldWhenViewAppear;
    _Bool _shouldRestoreNavigationBar;
    WCSearchBar *_searchBar;
    UIView *_contentView;
    UIView *_navBarContainerView;
    UIScreenEdgePanGestureRecognizer *_leftEdgePanGestureRecognizer;
    _TtC6WeChat25WCSearchTransitionManager *_transitionMgr;
    MMPageSheetAdapter *_sheetAdapter;
    WCSearchBar *_fromSearchBar;
    UIViewController *_fromVC;
    UINavigationController *_originalNav;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *originalNav; // @synthesize originalNav=_originalNav;
@property(nonatomic) _Bool shouldRestoreNavigationBar; // @synthesize shouldRestoreNavigationBar=_shouldRestoreNavigationBar;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) __weak WCSearchBar *fromSearchBar; // @synthesize fromSearchBar=_fromSearchBar;
@property(nonatomic) _Bool focusTextfieldWhenViewAppear; // @synthesize focusTextfieldWhenViewAppear=_focusTextfieldWhenViewAppear;
@property(nonatomic) __weak MMPageSheetAdapter *sheetAdapter; // @synthesize sheetAdapter=_sheetAdapter;
@property(nonatomic) _Bool useNoSnapshotTransition; // @synthesize useNoSnapshotTransition=_useNoSnapshotTransition;
@property(nonatomic) _Bool focusTexfieldWhenFirstShow; // @synthesize focusTexfieldWhenFirstShow=_focusTexfieldWhenFirstShow;
@property(nonatomic) _Bool forceFullScreenPresent; // @synthesize forceFullScreenPresent=_forceFullScreenPresent;
@property(nonatomic) _Bool isPresentFromHeroAnimation; // @synthesize isPresentFromHeroAnimation=_isPresentFromHeroAnimation;
@property(retain, nonatomic) _TtC6WeChat25WCSearchTransitionManager *transitionMgr; // @synthesize transitionMgr=_transitionMgr;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *leftEdgePanGestureRecognizer; // @synthesize leftEdgePanGestureRecognizer=_leftEdgePanGestureRecognizer;
@property(retain, nonatomic) UIView *navBarContainerView; // @synthesize navBarContainerView=_navBarContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (id)getContentView;
- (id)getNavBackgroundView;
- (id)getSearchBar;
- (void)onEndInteractivePop:(_Bool)arg1;
- (void)onStartInteractivePop;
- (unsigned long long)interactiveTransitionType;
- (id)animatableViews;
- (void)heroDidEndAnimatingFromViewController:(id)arg1;
- (void)heroWillStartAnimatingFromViewController:(id)arg1;
- (void)heroDidCancelTransition;
- (void)heroDidEndTransition;
- (_Bool)isHalfPage;
- (double)searchBarHeight;
- (id)customSearchBar;
- (_Bool)enableShowKeyboardWhenViewWillAppear;
- (void)onNavigationCancelItemClick;
- (void)onNavigationBackItemClick;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)addLeftEdgeGestureState;
- (void)__startSearchFrom:(id)arg1 forceFullScreen:(_Bool)arg2;
- (void)__startSearchFrom:(id)arg1;
- (void)realStartSearchFrom:(id)arg1 forceFullScreen:(_Bool)arg2;
- (void)startSearchFrom:(id)arg1 searchBarOffset:(double)arg2;
- (void)startSearchFrom:(id)arg1;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2 forceFullScreen:(_Bool)arg3;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (void)configLeftBackButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)useCustomNavibar;
- (_Bool)shouldHideNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initWCSearchViewControllerView;
- (void)viewDidLoad;
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

