//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, LbsLife, LocationRetriever, MMAutoSearchLogic, MMLocationAccuracyAuthorizationTipView, MMTableView, NSIndexPath, NSMutableArray, NSString, UIColor, UILabel, UIView, WCDataSearcher, WCTimeLineFooterView, WCUIAlertView;
@protocol WCTimelinePOIPickerViewControllerDelegate;

@interface WCTimelinePOIPickerViewController
{
    id <WCTimelinePOIPickerViewControllerDelegate> _delegate;
    _Bool _bSightScene;
    NSString *_searchKeyword;
    MMTableView *_tableView;
    WCDataSearcher *_searcher;
    UIView *_logoFooterView;
    LocationRetriever *_locationRetriever;
    CLLocation *_lastUpdateLocation;
    WCTimeLineFooterView *_getListTableFooterView;
    WCTimeLineFooterView *_searchTableFooterView;
    unsigned int _scene;
    NSMutableArray *_lifeList;
    NSMutableArray *_searchResultList;
    unsigned long long _geoTag;
    UILabel *_searchErrorTips;
    NSString *_address;
    LbsLife *_selectedItem;
    int _poiCreateForbiden;
    _Bool _showCreatePOI;
    long long _startGetListTime;
    long long _firstGetListTime;
    long long _endGetListTime;
    unsigned int _getListPageCount;
    long long _startSearchTime;
    long long _firstSearchTime;
    long long _endSearchTime;
    unsigned int _searchPageCount;
    unsigned int _entryTime;
    NSString *_lastSelectLog;
    NSString *_currentSearchID;
    unsigned int _statImageCount;
    unsigned int _statLocationImageCount;
    _Bool _statHadSearch;
    NSString *_requestId;
    MMAutoSearchLogic *_autoSearchLogic;
    NSIndexPath *_currentIndexPath;
    NSIndexPath *_tempSelectedIndexPath;
    UIView *_authorizationTipContainerView;
    MMLocationAccuracyAuthorizationTipView *_accuracyAuthorizationTipView;
    WCUIAlertView *_currAlertView;
    _Bool _canAlert;
    _Bool _enterBackground;
    _Bool _isSearching;
    _Bool _ignoreCityInfo;
    _Bool _ignoreNotCheckInItem;
    _Bool _isUseDrakMode;
    _Bool _isShowDistance;
    _Bool _forceAdjustTableViewInsetInLayout;
    _Bool _enableFullRangeSearch;
    _Bool _showAccuracyAuthorizationTip;
    int _lbsLifeScene;
    int _currentAuthLogType;
    UIColor *_selectTintColor;
    unsigned long long _locationAuthScene;
}

+ (void)reportOnCommitWithString:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int currentAuthLogType; // @synthesize currentAuthLogType=_currentAuthLogType;
@property(nonatomic) _Bool showAccuracyAuthorizationTip; // @synthesize showAccuracyAuthorizationTip=_showAccuracyAuthorizationTip;
@property(nonatomic) _Bool enableFullRangeSearch; // @synthesize enableFullRangeSearch=_enableFullRangeSearch;
@property(nonatomic) _Bool forceAdjustTableViewInsetInLayout; // @synthesize forceAdjustTableViewInsetInLayout=_forceAdjustTableViewInsetInLayout;
@property(nonatomic) _Bool isShowDistance; // @synthesize isShowDistance=_isShowDistance;
@property(nonatomic) _Bool isUseDrakMode; // @synthesize isUseDrakMode=_isUseDrakMode;
@property(nonatomic) unsigned long long locationAuthScene; // @synthesize locationAuthScene=_locationAuthScene;
@property(retain, nonatomic) UIColor *selectTintColor; // @synthesize selectTintColor=_selectTintColor;
@property(nonatomic) _Bool ignoreNotCheckInItem; // @synthesize ignoreNotCheckInItem=_ignoreNotCheckInItem;
@property(nonatomic) _Bool ignoreCityInfo; // @synthesize ignoreCityInfo=_ignoreCityInfo;
@property(nonatomic) int lbsLifeScene; // @synthesize lbsLifeScene=_lbsLifeScene;
@property(nonatomic) _Bool bSightScene; // @synthesize bSightScene=_bSightScene;
@property(nonatomic) __weak id <WCTimelinePOIPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
@property(nonatomic) int forbidCreatePOI;
- (_Bool)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)goToSettingLocationAuthorization;
- (void)showAlertForLocationAuthorization;
- (void)adjustTableViewFrame;
- (void)updateAccuracyAuthorizationTipHidden;
- (void)onGetPOIDisplayName:(id)arg1 ForLocation:(id)arg2 Scene:(int)arg3 SrcDisplayName:(id)arg4 extraInfo:(id)arg5 Error:(int)arg6;
- (void)onPOICreated:(id)arg1 poiDistrict:(id)arg2 poiStreet:(id)arg3 PoiID:(id)arg4;
- (void)autoSearchShouldBeginWithKey:(id)arg1 StartFromFirst:(_Bool)arg2;
- (void)setSearchTableResultText:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)didScrollViewScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)makeCellForCreatePOIItem:(id)arg1;
- (id)descLabelTextWithLBSLifeItem:(id)arg1;
- (id)makeCell:(id)arg1 forLBSLifeItem:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)selectLBSLife:(id)arg1 poiSourceType:(long long)arg2;
- (id)evolvePoiAddressFromLbsLife:(id)arg1;
- (id)poiCityFromLbsLife:(id)arg1;
- (void)removeCreatePOIItem;
- (void)addCreatePOIItem;
- (void)addSearchResultItem:(id)arg1;
- (void)addLBSLifeListItem:(id)arg1;
- (void)OnSearchLBSLife:(id)arg1 Keyword:(id)arg2 Error:(int)arg3 IsStartFromFirst:(_Bool)arg4;
- (void)filterSearchResultList;
- (void)OnAutoSearchLBSLife:(id)arg1 Keyword:(id)arg2 NextQueryInterval:(double)arg3 Error:(int)arg4 IsStartFromFirst:(_Bool)arg5;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (void)searchLBSLife:(id)arg1 StartFromFirst:(_Bool)arg2;
- (void)getLBSLife:(_Bool)arg1;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)stopGeocoder;
- (void)getAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (void)addCityItem:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)stopUpdateLocation;
- (void)startUpdateLocation;
- (unsigned int)getTrue11135ReportTypeFor:(unsigned int)arg1;
- (id)getPOIReportStr4Commit;
- (void)onDone;
- (void)onCancel;
- (void)showDataProviderInfo:(id)arg1;
- (void)showSearchTableLoadMore;
- (void)adjustSubviewRects;
- (void)setSelectedItemByLocationInfo:(id)arg1;
- (void)addSelectedItem;
- (void)addNotCheckInItem;
- (void)initTableView;
- (void)hideSearchBarTips;
- (void)updateSearchBarTips;
- (void)initSearchBar;
- (void)initAccuracyAuthorizationTipView;
- (_Bool)showNavigationBarSepLine;
- (void)initView;
- (void)checkLocationAuthorization;
- (double)getTableViewMarginTop;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)reset;
- (void)updateLocation:(id)arg1 imageCount:(unsigned int)arg2 locaionImageCount:(unsigned int)arg3;
- (void)initNotifications;
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

