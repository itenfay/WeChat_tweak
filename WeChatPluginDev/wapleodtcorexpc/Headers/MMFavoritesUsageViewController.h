//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavBaseTableDataController, MMTableView, MMUIButton, MMUIView, MMUIWindow, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIActivityIndicatorView, UIView;

@interface MMFavoritesUsageViewController
{
    FavBaseTableDataController *m_dataController;
    UIView *m_multiSelectActionView;
    MMUIButton *m_delBtn;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    UIView *m_footerView;
    MMUIView *m_maskTypeView;
    MMUIView *m_maskSortView;
    MMUIView *m_sortSelectView;
    MMUIView *m_selectView;
    MMUIView *m_typeSelectView;
    MMUIButton *m_type;
    MMUIButton *m_sort;
    NSArray *m_typeArray;
    NSMutableSet *m_typeSet;
    NSMutableArray *m_realTypeArray;
    UIActivityIndicatorView *m_activityView;
    MMUIWindow *m_fullScreenWindow;
    MMUIView *m_headLine;
    _Bool m_bFistLoadFromCache;
    _Bool m_isSortSelectUp;
    _Bool m_isTypeSelectUp;
    int m_selectedType;
    unsigned short m_selectedSort;
    unsigned long long m_leftSize;
    unsigned long long m_curMinItemDataSize;
    unsigned int m_curMinUsedTimes;
    unsigned int m_curMinUpdateTime;
    NSMutableArray *m_typeSelectBtnArray;
    NSMutableArray *m_sortSelectBtnArray;
    NSMutableDictionary *m_typeTitleMap;
    NSMutableDictionary *m_sortTitleMap;
    UIView *m_canvasPageAnimateOriginView;
    unsigned int m_enterPageTimeInS;
    unsigned long long m_startTime;
    unsigned int m_multiBtnClickTimes;
    int m_reportFilterType;
    int m_deleteType;
    NSMutableArray *m_deletedMsgInfos;
    MMUIView *m_typeSelectContainView;
    MMUIView *m_sortSelectContainView;
    int fromScene;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int fromScene; // @synthesize fromScene;
- (void)registerYReportSdk;
- (void)onClickPurgeSelectBtn:(_Bool)arg1 favItem:(id)arg2;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (void)addItemList:(id)arg1;
- (double)getHeightForItem:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (_Bool)isSameAsSelectedType:(id)arg1;
- (void)onUpdateUnexistItem:(id)arg1;
- (void)OnGetNextPageFavoritesByType:(id)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesByType:(id)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (_Bool)onResponseForSelectFavItem:(id)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)reloadTableView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (int)getSortType;
- (void)onLoadMore;
- (void)onShowEmptyView;
- (id)getCurrentViewController;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (void)realDeleteFavItem:(id)arg1;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectItem:(id)arg1;
- (void)jumpToViewStreamVideo:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)showChoosenCapacityUI;
- (unsigned long long)getSelectCapacity;
- (void)onDeleteItems;
- (void)hideSelectActionView;
- (void)initDelBtn;
- (void)initEmptyView;
- (void)HideLoadingView;
- (void)initLoadingView;
- (_Bool)isTypelistEmpty:(int)arg1;
- (void)maskSortTouchHandler;
- (void)initSortMaskView;
- (void)maskTagTouchHandler;
- (void)initTagMaskView;
- (void)onSelectSortBtnHandler:(id)arg1;
- (void)showSortSelectView:(id)arg1;
- (int)getReportSortType;
- (void)initSortSelectView;
- (void)onSelectTagBtnHandler:(id)arg1;
- (void)showTagSelectView:(id)arg1;
- (void)updateReportFileterType;
- (void)initTagSelectView;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)initSelectView;
- (void)initTableView;
- (void)initData;
- (void)setViewTitle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)switchToMutiDelete;
- (void)backToPreView;
- (void)switchToDefaultDelete;
- (void)initNavLeftBar;
- (void)initNavRightBar;
- (_Bool)showNavigationBarSepLine;
- (unsigned char)getReportStatus;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

