//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveGamePlayTogether, MMFinderLiveGameTeamInfo, MMFinderLiveTaskId, MMLiveGamePlayTogetherJoinTeamCell, MMLiveGamePlayTogetherJoinTeamItem, MMLiveGamePlayTogetherJoinTeamSettingCell, MMLiveGamePlayTogetherJoinTeamSettingItem, MMTableView, MMUIActivityIndicatorView, MMUILabel, MMUIView, NSMutableArray, NSString, UILabel;
@protocol MMLiveGamePlayTogetherOperationPanelDataSource, MMLiveGamePlayTogetherOperationPanelDelegate;

@interface MMLiveGamePlayTogetherOperationPanel
{
    _Bool _hasData;
    _Bool _pendingHideLoading;
    _Bool _notFirstTimeAppear;
    _Bool _isFetchingNextPage;
    unsigned int _curJoinTeamMode;
    id <MMLiveGamePlayTogetherOperationPanelDelegate> _delegate;
    id <MMLiveGamePlayTogetherOperationPanelDataSource> _dataSource;
    NSString *_appId;
    FinderLiveGamePlayTogether *_togetherInfo;
    MMFinderLiveGameTeamInfo *_gameTeamInfo;
    MMFinderLiveTaskId *_taskId;
    MMUIView *_contentView;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMTableView *_gameTogetherTableView;
    MMUILabel *_anchorNoDataTips;
    NSMutableArray *_operationItems;
    NSString *_dynamicCardRootId;
    UILabel *_footerLabel;
    NSString *_lastBuffer;
    MMLiveGamePlayTogetherJoinTeamItem *_joinTeamItem;
    MMLiveGamePlayTogetherJoinTeamCell *_joinTeamCell;
    MMLiveGamePlayTogetherJoinTeamSettingItem *_joinTeamSettingItem;
    MMLiveGamePlayTogetherJoinTeamSettingCell *_joinTeamSettingCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveGamePlayTogetherJoinTeamSettingCell *joinTeamSettingCell; // @synthesize joinTeamSettingCell=_joinTeamSettingCell;
@property(retain, nonatomic) MMLiveGamePlayTogetherJoinTeamSettingItem *joinTeamSettingItem; // @synthesize joinTeamSettingItem=_joinTeamSettingItem;
@property(retain, nonatomic) MMLiveGamePlayTogetherJoinTeamCell *joinTeamCell; // @synthesize joinTeamCell=_joinTeamCell;
@property(retain, nonatomic) MMLiveGamePlayTogetherJoinTeamItem *joinTeamItem; // @synthesize joinTeamItem=_joinTeamItem;
@property(nonatomic) _Bool isFetchingNextPage; // @synthesize isFetchingNextPage=_isFetchingNextPage;
@property(retain, nonatomic) NSString *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(nonatomic) unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property(nonatomic) _Bool notFirstTimeAppear; // @synthesize notFirstTimeAppear=_notFirstTimeAppear;
@property(retain, nonatomic) NSString *dynamicCardRootId; // @synthesize dynamicCardRootId=_dynamicCardRootId;
@property(retain, nonatomic) NSMutableArray *operationItems; // @synthesize operationItems=_operationItems;
@property(retain, nonatomic) MMUILabel *anchorNoDataTips; // @synthesize anchorNoDataTips=_anchorNoDataTips;
@property(retain, nonatomic) MMTableView *gameTogetherTableView; // @synthesize gameTogetherTableView=_gameTogetherTableView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool pendingHideLoading; // @synthesize pendingHideLoading=_pendingHideLoading;
@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
@property(retain, nonatomic) MMFinderLiveGameTeamInfo *gameTeamInfo; // @synthesize gameTeamInfo=_gameTeamInfo;
@property(retain, nonatomic) FinderLiveGamePlayTogether *togetherInfo; // @synthesize togetherInfo=_togetherInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <MMLiveGamePlayTogetherOperationPanelDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MMLiveGamePlayTogetherOperationPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)audienceLogReporter;
- (void)onLiveViewControllerDidAppear:(id)arg1;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)onFirstFrameRendered:(id)arg1;
- (void)onClosePlayTogetherActionSheet:(id)arg1;
- (void)onCellTeamUpStartButtonClicked:(_Bool)arg1;
- (void)onClickJoinTeamSettingCell;
- (void)onClickJoinTeamCell;
- (void)fetchNextPageData;
- (void)fetchNextPageDataIfNeed;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getCellWithTableView:(id)arg1 item:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)createFooterView;
- (_Bool)isLandscape;
- (double)contentHeight;
- (double)contentWidth;
- (id)liveTask;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)_jumpToGameLiveAppVC;
- (void)pageSheetDidAppear;
- (id)getCurrentRightButton;
- (id)getCurrentLeftButton;
- (void)stopLoading;
- (void)startLoading;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (id)getAllDynamicCardItems;
- (void)stopDynamicCard;
- (void)updateTeamInfoCellWith:(id)arg1;
- (void)genJoinTeamItemWith:(id)arg1;
- (void)genJoinTeamSettingItem;
- (void)genOperationItemsWithInfo:(id)arg1;
- (void)setupRightButton;
- (void)fetchDataForAudienceWithParams:(id)arg1;
- (void)fetchDataForManagerInStarterWithParams:(id)arg1;
- (void)fetchDataForManagerInLiveWithParams:(id)arg1;
- (void)fetchDataWithParams:(id)arg1;
- (void)fetchData;
- (void)fetchDataForTeamInfo;
- (void)appendOperationItemsWith:(id)arg1;
- (void)initAudienceDataWith:(id)arg1 teamInfo:(id)arg2;
- (void)updateAnchorDataWith:(id)arg1;
- (void)initAnchorDataWith:(id)arg1;
- (void)layoutAnchorNoDataTips;
- (void)layoutActivityIndicatorView;
- (void)layoutTableView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateNavBarUI;
- (void)setupPageSheetConfig;
- (void)setupDynamicCardEnv;
- (void)setupDatas;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 appId:(id)arg2 fetchData:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

