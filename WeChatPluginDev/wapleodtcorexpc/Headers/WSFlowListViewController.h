//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIView, WCFinderFeedListView, _TtC6WeChat15WSFlowListLogic, _TtC6WeChat21WSFlowListLiteAppCell, _TtC6WeChat24WSFlowListLiteAppAdapter;

@interface WSFlowListViewController
{
    _Bool _hasLoadFirstLiteAppCell;
    _TtC6WeChat15WSFlowListLogic *_flowListLogic;
    _TtC6WeChat24WSFlowListLiteAppAdapter *_liteAppAdapter;
    WCFinderFeedListView *_feedListView;
    unsigned long long _currentShowIndex;
    NSArray *_listData;
    NSString *_extInfo;
    NSString *_reportExtraInfo;
    UIView *_retryButton;
    NSString *_enterItemId;
    _TtC6WeChat21WSFlowListLiteAppCell *_currentActiveLiteAppCell;
    unsigned long long _currentActiveLiteAppCellIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentActiveLiteAppCellIndex; // @synthesize currentActiveLiteAppCellIndex=_currentActiveLiteAppCellIndex;
@property(retain, nonatomic) _TtC6WeChat21WSFlowListLiteAppCell *currentActiveLiteAppCell; // @synthesize currentActiveLiteAppCell=_currentActiveLiteAppCell;
@property(nonatomic) _Bool hasLoadFirstLiteAppCell; // @synthesize hasLoadFirstLiteAppCell=_hasLoadFirstLiteAppCell;
@property(copy, nonatomic) NSString *enterItemId; // @synthesize enterItemId=_enterItemId;
@property(retain, nonatomic) UIView *retryButton; // @synthesize retryButton=_retryButton;
@property(copy, nonatomic) NSString *reportExtraInfo; // @synthesize reportExtraInfo=_reportExtraInfo;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
@property(nonatomic) unsigned long long currentShowIndex; // @synthesize currentShowIndex=_currentShowIndex;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) _TtC6WeChat24WSFlowListLiteAppAdapter *liteAppAdapter; // @synthesize liteAppAdapter=_liteAppAdapter;
@property(retain, nonatomic) _TtC6WeChat15WSFlowListLogic *flowListLogic; // @synthesize flowListLogic=_flowListLogic;
- (void)clearActiveCell;
- (void)setCellActive:(id)arg1 index:(unsigned long long)arg2;
- (id)currentCellModel;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)scrollToIndex:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)updateTableDataWithInsertionFromIndex:(long long)arg1 length:(long long)arg2;
- (void)reloadData;
- (id)getLiteAppCellAtIndex:(long long)arg1;
- (_Bool)isLiteAppPageAtIndex:(long long)arg1;
- (void)onChangeToNewIndex:(unsigned int)arg1;
- (void)onScrollEnd:(id)arg1;
- (void)finderFeedListViewDidEndScrollingAnimation:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (void)onScrollFromLiteAppCell:(id)arg1 toLiteAppCell:(id)arg2;
- (void)finderFeedListView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)fetchMoreData:(unsigned int)arg1;
- (void)fetchFirstPageData;
- (void)fetchEnterFinderItemIfNeeded;
- (void)initFeedListView;
- (void)updateFinderReportInfo;
- (_Bool)forbidCreateNavHeader;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (void)onNavBarLeftBackButtonClicked:(id)arg1;
- (void)configNavigationBar;
- (void)dealloc;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)initRetryButton;
- (void)initView;
- (id)initWithExtInfo:(id)arg1 enterItemId:(id)arg2 reportExtraInfo:(id)arg3 enterExportId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

