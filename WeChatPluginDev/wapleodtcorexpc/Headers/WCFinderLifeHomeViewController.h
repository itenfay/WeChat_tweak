//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMapTable, NSNumber, NSString, WCFinderArbitraryPageView, WCFinderLifeHomeNoLocationAuthView, WCFinderLifeHomeViewModel, WCFinderRedDotTipsShowInfo;

@interface WCFinderLifeHomeViewController
{
    _Bool _displayNearPeople;
    _Bool _nearbyLocationServiceAuthed;
    _Bool _shouldSwitchToNearbyTab;
    _Bool _fetchingLocation;
    unsigned long long _entranceRedDotCtrlType;
    WCFinderRedDotTipsShowInfo *_entranceRedDotShowInfo;
    unsigned long long _mentionEntranceRedDotCtrlType;
    WCFinderRedDotTipsShowInfo *_mentionEntranceRedDotShowInfo;
    WCFinderLifeHomeViewModel *_viewModel;
    WCFinderArbitraryPageView *_tabPageView;
    WCFinderLifeHomeNoLocationAuthView *_noAuthView;
    MMUIButton *_searchBarBtn;
    NSMapTable *_adapterMap;
    NSMapTable *_selectorDelegateMap;
    long long _menuFlag;
    NSNumber *_locationStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fetchingLocation; // @synthesize fetchingLocation=_fetchingLocation;
@property(retain, nonatomic) NSNumber *locationStatus; // @synthesize locationStatus=_locationStatus;
@property(nonatomic) long long menuFlag; // @synthesize menuFlag=_menuFlag;
@property(retain, nonatomic) NSMapTable *selectorDelegateMap; // @synthesize selectorDelegateMap=_selectorDelegateMap;
@property(retain, nonatomic) NSMapTable *adapterMap; // @synthesize adapterMap=_adapterMap;
@property(retain, nonatomic) MMUIButton *searchBarBtn; // @synthesize searchBarBtn=_searchBarBtn;
@property(retain, nonatomic) WCFinderLifeHomeNoLocationAuthView *noAuthView; // @synthesize noAuthView=_noAuthView;
@property(retain, nonatomic) WCFinderArbitraryPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) WCFinderLifeHomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *mentionEntranceRedDotShowInfo; // @synthesize mentionEntranceRedDotShowInfo=_mentionEntranceRedDotShowInfo;
@property(nonatomic) unsigned long long mentionEntranceRedDotCtrlType; // @synthesize mentionEntranceRedDotCtrlType=_mentionEntranceRedDotCtrlType;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *entranceRedDotShowInfo; // @synthesize entranceRedDotShowInfo=_entranceRedDotShowInfo;
@property(nonatomic) unsigned long long entranceRedDotCtrlType; // @synthesize entranceRedDotCtrlType=_entranceRedDotCtrlType;
@property(nonatomic) _Bool shouldSwitchToNearbyTab; // @synthesize shouldSwitchToNearbyTab=_shouldSwitchToNearbyTab;
@property(nonatomic) _Bool nearbyLocationServiceAuthed; // @synthesize nearbyLocationServiceAuthed=_nearbyLocationServiceAuthed;
@property(nonatomic) _Bool displayNearPeople; // @synthesize displayNearPeople=_displayNearPeople;
- (id)entranceRedDotReportJsonStrWithType:(unsigned long long)arg1 showInfo:(id)arg2;
- (void)registerYReportSdk;
- (void)onFriendAssistUnreadCountChanged;
- (void)onClickSayHelloButton;
- (void)onSettingExtChanged:(long long)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)updateNearByPeopleTabView:(id)arg1;
- (void)_updateNearPeopleTab;
- (void)reloadNearByView:(id)arg1;
- (_Bool)switchToOtherTab;
- (_Bool)switchToLiveTab;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)handleMenuPeople;
- (void)handleMenuOpenCollect;
- (void)handleMenuPost;
- (void)onSelectorWithTag:(id)arg1 changeSelectFilter:(id)arg2;
- (id)fixAssibilityElementsForView:(id)arg1;
- (void)onSearchBarBtnClick:(id)arg1;
- (id)arbitraryTabView:(id)arg1 innerScrollViewForPageView:(id)arg2;
- (void)onArbitraryTabViewClickRetry:(id)arg1;
- (void)arbitraryTabView:(id)arg1 expectPageContentInset:(struct UIEdgeInsets)arg2 minSize:(struct CGSize)arg3 forIndex:(long long)arg4 pageView:(id)arg5 pageVC:(id)arg6 identifier:(id)arg7;
- (id)createFeedFlowView;
- (id)apdaterForPageIndex:(long long)arg1;
- (void)onArbitraryTabView:(id)arg1 selectedPageChangedFrom:(long long)arg2 to:(long long)arg3;
- (void)arbitraryTabView:(id)arg1 didDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)arbitraryTabView:(id)arg1 willDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (void)arbitraryTabView:(id)arg1 didEndDisplayViewAtIndex:(long long)arg2 pageView:(id)arg3;
- (id)nearbyBannerViewWithTabView:(id)arg1 index:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 bannerViewForIndex:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 uniqueObjectForPage:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 pageTabViewForIndex:(long long)arg2;
- (id)arbitraryTabView:(id)arg1 pageTabNameForIdentifier:(id)arg2 index:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageViewForIdentifier:(id)arg2 index:(long long)arg3;
- (void)onLifeHomeVM:(id)arg1 selectPage:(id)arg2;
- (void)onLifeHomeVM:(id)arg1 pageDatasChangedAtIndex:(long long)arg2;
- (void)onLifeHomeVMLocationAuthChanged:(id)arg1;
- (void)onLifeHomeVM:(id)arg1 firstPageFinish:(_Bool)arg2;
- (int)commentScene;
- (id)createMenuItem:(id)arg1 iconName:(id)arg2 action:(SEL)arg3;
- (void)refreshMenuPost;
- (void)updateMenuWhenTabChange;
- (void)onOpenFinderLongVideoViewController:(CDUnknownBlockType)arg1;
- (_Bool)showNavigationBarSepLine;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)setupShowContent:(_Bool)arg1;
- (void)setupShowNoAuthView:(_Bool)arg1;
- (void)onLocationFetched;
- (void)reloadData;
- (void)setupViews:(_Bool)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onVCEnterForeground:(id)arg1;
- (void)onVCEnterBackground:(id)arg1;
- (void)removeNotifications;
- (void)setupNotifications;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

