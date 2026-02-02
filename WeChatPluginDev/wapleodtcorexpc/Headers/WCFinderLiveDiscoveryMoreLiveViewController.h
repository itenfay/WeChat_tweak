//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCFinderDiscoveryLiveTabPageViewModel, WCFinderLiveDiscoveryCacheModel, WCFinderRedDotCtrlInfo, WCFinderTabPageModel;
@protocol WCFinderLiveDiscoveryMoreLiveViewControllerDelegate;

@interface WCFinderLiveDiscoveryMoreLiveViewController
{
    _Bool _directlyOpenJumpInfoPage;
    _Bool _isLocationServiceAuthrized;
    CDUnknownBlockType _cacheModelUpdateBlock;
    WCFinderRedDotCtrlInfo *_finderLiveEntryRedDotCtrlInfo;
    id <WCFinderLiveDiscoveryMoreLiveViewControllerDelegate> _delegate;
    UIView *_placeHolderView;
    WCFinderTabPageModel *_liveModel;
    WCFinderLiveDiscoveryCacheModel *_cacheModel;
    unsigned long long _selectedSubTabId;
    WCFinderDiscoveryLiveTabPageViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDiscoveryLiveTabPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long selectedSubTabId; // @synthesize selectedSubTabId=_selectedSubTabId;
@property(nonatomic) _Bool isLocationServiceAuthrized; // @synthesize isLocationServiceAuthrized=_isLocationServiceAuthrized;
@property(retain, nonatomic) WCFinderLiveDiscoveryCacheModel *cacheModel; // @synthesize cacheModel=_cacheModel;
@property(retain, nonatomic) WCFinderTabPageModel *liveModel; // @synthesize liveModel=_liveModel;
@property(retain, nonatomic) UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(nonatomic) __weak id <WCFinderLiveDiscoveryMoreLiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool directlyOpenJumpInfoPage; // @synthesize directlyOpenJumpInfoPage=_directlyOpenJumpInfoPage;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderLiveEntryRedDotCtrlInfo; // @synthesize finderLiveEntryRedDotCtrlInfo=_finderLiveEntryRedDotCtrlInfo;
@property(copy, nonatomic) CDUnknownBlockType cacheModelUpdateBlock; // @synthesize cacheModelUpdateBlock=_cacheModelUpdateBlock;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)checkAbnormalLiveIfNeeded;
- (void)onFinderGetLiveTabsInfoFinished:(_Bool)arg1;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(_Bool)arg1;
- (void)_openJumpInfoPageWithCtrlInfo:(id)arg1;
- (void)onSearchClicked;
- (void)onBackButtonClicked:(id)arg1;
- (void)refreshPage;
- (void)setRedDotModeObjectID:(id)arg1;
- (id)cacheViewModel;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)viewWillLayoutSubviews;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldInteractivePop;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLiveCacheModel:(id)arg1 tabId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

