//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, TencentLBSLocationManager, WAMainFrameTaskBarSectionViewModel, WAMainFrameTaskBarSectionWeAppViewModel, WAPackageSweeperLogic, WAReportMainFrameTaskBarActionItem;
@protocol WAMainFrameTaskBarLogicDelegate;

@interface WAMainFrameTaskBarLogic
{
    _Bool _needForceReload;
    _Bool _isPullingWhyDragMe;
    _Bool _canUseDynamicBackground;
    _Bool _isDidShow;
    unsigned int _maxTaskCount;
    unsigned int _noResponseMsWhenRefresh;
    unsigned int _openTime;
    id <WAMainFrameTaskBarLogicDelegate> _delegate;
    NSMutableArray *_arrWeAppItem;
    NSMutableArray *_arrMyWeAppItem;
    NSMutableArray *_arrCommonUseWeAppItem;
    NSMutableArray *_arrMyWeAppItemWhenShowCommonUse;
    NSMutableArray *_arrOtherItem;
    WAMainFrameTaskBarSectionWeAppViewModel *_weAppViewModel;
    WAMainFrameTaskBarSectionWeAppViewModel *_myWeAppViewModel;
    WAMainFrameTaskBarSectionViewModel *_otherViewModel;
    NSString *_searchBarPlaceHolder;
    NSMutableArray *_firstFeedAppearInfoArray;
    MMUIViewController *_containerVC;
    NSString *_openSession;
    WAReportMainFrameTaskBarActionItem *_actionItem;
    WAPackageSweeperLogic *_sweeperLogic;
    NSMutableArray *_exceedOtherDataArray;
    NSMutableDictionary *_exceedDataType2LastKeepTime;
    unsigned long long _closingPageType;
    TencentLBSLocationManager *_locationMgr;
}

+ (long long)getAliveTimeoutForListen;
+ (long long)getAliveTimeout;
- (void).cxx_destruct;
@property(retain, nonatomic) TencentLBSLocationManager *locationMgr; // @synthesize locationMgr=_locationMgr;
@property(nonatomic) unsigned long long closingPageType; // @synthesize closingPageType=_closingPageType;
@property(retain, nonatomic) NSMutableDictionary *exceedDataType2LastKeepTime; // @synthesize exceedDataType2LastKeepTime=_exceedDataType2LastKeepTime;
@property(retain, nonatomic) NSMutableArray *exceedOtherDataArray; // @synthesize exceedOtherDataArray=_exceedOtherDataArray;
@property(nonatomic) _Bool isDidShow; // @synthesize isDidShow=_isDidShow;
@property(nonatomic) _Bool canUseDynamicBackground; // @synthesize canUseDynamicBackground=_canUseDynamicBackground;
@property(retain, nonatomic) WAPackageSweeperLogic *sweeperLogic; // @synthesize sweeperLogic=_sweeperLogic;
@property(retain, nonatomic) WAReportMainFrameTaskBarActionItem *actionItem; // @synthesize actionItem=_actionItem;
@property(nonatomic) unsigned int openTime; // @synthesize openTime=_openTime;
@property(nonatomic) _Bool isPullingWhyDragMe; // @synthesize isPullingWhyDragMe=_isPullingWhyDragMe;
@property(nonatomic) unsigned int noResponseMsWhenRefresh; // @synthesize noResponseMsWhenRefresh=_noResponseMsWhenRefresh;
@property(nonatomic) _Bool needForceReload; // @synthesize needForceReload=_needForceReload;
@property(nonatomic) unsigned int maxTaskCount; // @synthesize maxTaskCount=_maxTaskCount;
@property(retain, nonatomic) NSString *openSession; // @synthesize openSession=_openSession;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(retain, nonatomic) NSMutableArray *firstFeedAppearInfoArray; // @synthesize firstFeedAppearInfoArray=_firstFeedAppearInfoArray;
@property(copy, nonatomic) NSString *searchBarPlaceHolder; // @synthesize searchBarPlaceHolder=_searchBarPlaceHolder;
@property(retain, nonatomic) WAMainFrameTaskBarSectionViewModel *otherViewModel; // @synthesize otherViewModel=_otherViewModel;
@property(retain, nonatomic) WAMainFrameTaskBarSectionWeAppViewModel *myWeAppViewModel; // @synthesize myWeAppViewModel=_myWeAppViewModel;
@property(retain, nonatomic) WAMainFrameTaskBarSectionWeAppViewModel *weAppViewModel; // @synthesize weAppViewModel=_weAppViewModel;
@property(retain, nonatomic) NSMutableArray *arrOtherItem; // @synthesize arrOtherItem=_arrOtherItem;
@property(retain, nonatomic) NSMutableArray *arrMyWeAppItemWhenShowCommonUse; // @synthesize arrMyWeAppItemWhenShowCommonUse=_arrMyWeAppItemWhenShowCommonUse;
@property(retain, nonatomic) NSMutableArray *arrCommonUseWeAppItem; // @synthesize arrCommonUseWeAppItem=_arrCommonUseWeAppItem;
@property(retain, nonatomic) NSMutableArray *arrMyWeAppItem; // @synthesize arrMyWeAppItem=_arrMyWeAppItem;
@property(retain, nonatomic) NSMutableArray *arrWeAppItem; // @synthesize arrWeAppItem=_arrWeAppItem;
@property(nonatomic) __weak id <WAMainFrameTaskBarLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getWeAppPageType:(_Bool)arg1 weappData:(id)arg2;
- (unsigned long long)getMorePageType:(_Bool)arg1;
- (void)reportFirstFeedWhenTaskBarDidShow;
- (void)reportTaskBarSectionMoreAppear:(_Bool)arg1 moreIconUsername:(id)arg2 backFromDesktop:(_Bool)arg3;
- (void)reportTaskBarFeedAppear:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)reportWeTaskBarWeAppFeedClick:(id)arg1 position:(long long)arg2 isMyWeApp:(_Bool)arg3;
- (void)reportWeTaskBarFeedClick:(id)arg1 weappData:(id)arg2 position:(long long)arg3;
- (void)reportWeTaskBarClickSearch;
- (void)reportWeTaskBarWeAppClickMore:(_Bool)arg1 moreIconUsername:(id)arg2;
- (void)reportTaskBarWeAppFeedManualAddDelete:(id)arg1 position:(long long)arg2 isMyWeApp:(_Bool)arg3;
- (void)reportTaskBarFeedAddDelete:(id)arg1 actionType:(unsigned long long)arg2 actionChannel:(unsigned long long)arg3;
- (void)reportTaskBarWeAppFeedManualAddDeleteMyWeApp:(_Bool)arg1 isFromMyWeApp:(_Bool)arg2 weappData:(id)arg3 position:(long long)arg4;
- (void)reportTaskBarClose:(unsigned long long)arg1 pageType:(unsigned long long)arg2 session:(id)arg3;
- (void)reportTaskBarExposure:(unsigned long long)arg1;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(id)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)unregisterLiveStateObsever;
- (void)registerLiveStateObseverForLiveTaskDatas:(id)arg1;
- (void)checkLiveItemUpdateIfNeeded:(long long)arg1;
- (id)findLiveTaskData;
- (void)onRecentUsedTaskRemoved:(id)arg1 inScene:(unsigned int)arg2;
- (void)onRecentUsedTaskAppended:(id)arg1;
- (void)onRecentUsedTaskChanged;
- (void)removeExceedMultipleSectionData:(id)arg1 sectionName:(id)arg2 data:(id)arg3;
- (id)reloadSectionData:(id)arg1 sectionName:(id)arg2 oldData:(id)arg3;
- (_Bool)canReloadWhenSpread;
- (_Bool)hasCommonUseModule;
- (void)loadMyWeAppItemList;
- (void)loadWeAppItemListWithCount:(unsigned int)arg1;
- (void)fillViewModelDataIfNeeded:(unsigned long long)arg1;
- (_Bool)shouldUpdateTaskBarData;
- (void)reloadWeAppItems:(_Bool)arg1 source:(unsigned long long)arg2;
- (void)reloadWeAppItems:(_Bool)arg1;
- (void)removeExceedData;
- (void)removeTimeoutData;
- (void)reloadOtherData:(_Bool)arg1;
- (_Bool)shouldBlockTask:(id)arg1;
- (void)reloadData:(_Bool)arg1;
- (void)onWeAppItemMoved:(id)arg1 toPreItem:(id)arg2 nextItem:(id)arg3;
- (void)onWeAppCommonUseItemDeleted:(id)arg1;
- (void)onWeAppItemUnStared:(id)arg1;
- (void)onWeAppItemStared:(id)arg1;
- (void)onWeAppItemBatchMoved:(id)arg1;
- (void)onWeAppItemDeleted:(id)arg1;
- (void)onWeAppItemOpened:(id)arg1;
- (void)onWeAppCommonUseItemsInfoUpdated:(id)arg1 commuseConfig:(id)arg2 scene:(unsigned int)arg3;
- (void)onWeAppItemsInfoUpdatedWithAPageItem:(id)arg1 localLastUpdateTime:(unsigned int)arg2 remoteLastUpdateTime:(unsigned int)arg3 hasMore:(_Bool)arg4 scene:(unsigned int)arg5;
- (void)willEndSearch;
- (void)onClickSearch:(id)arg1;
- (void)notifyTapSearchButton;
- (void)setTableViewContentOffset:(struct CGPoint)arg1;
- (id)getLeftBarButton;
- (id)getRightBarButton;
- (id)getTaskBarView;
- (double)getFullScreenHeight;
- (void)visibleTick;
- (void)endDragToVisible;
- (void)startDragToVisible;
- (void)taskBarDidEndDragging;
- (void)taskBarDidHideWithScene:(unsigned long long)arg1 pageType:(unsigned long long)arg2 session:(id)arg3;
- (_Bool)isXDevice;
- (void)realGetLatestUsageRecordInfo:(id)arg1;
- (void)getLatestUsageRecordInfoIfNeeded;
- (void)taskBarDidShow;
- (id)getAppidListStr:(id)arg1 limit:(long long)arg2;
- (void)closeRunningTaskIfHaveByUsername:(id)arg1 debugType:(unsigned int)arg2;
- (void)didDeleteTaskItemWithUsername:(id)arg1 debugType:(unsigned int)arg2 isMy:(_Bool)arg3;
- (void)taskBarView:(id)arg1 didRotateToInterfaceOrientation:(long long)arg2;
- (void)taskBarView:(id)arg1 notifyOnTranslationYChanged:(double)arg2;
- (void)taskBarViewDidTapOnFakeRightMenuButton:(id)arg1;
- (void)taskBarViewDidTapOnFoldButton:(id)arg1;
- (void)taskBarView:(id)arg1 heightDidChangeTo:(double)arg2;
- (void)taskBarView:(id)arg1 onStarNodeShowStatusDidChangedTo:(_Bool)arg2;
- (void)taskBarViewOnEnterBackground:(id)arg1;
- (void)taskBarViewOnEnterForeground:(id)arg1;
- (void)taskBarView:(id)arg1 didSelectTaskItem:(id)arg2 onPosition:(unsigned long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)taskBarView:(id)arg1 didSelectMore:(_Bool)arg2 moreIconWeAppUsername:(id)arg3;
- (void)taskBarViewDidSelectSearch;
- (void)taskBarDidDragUpToClose:(id)arg1;
- (_Bool)tableViewIsDragging;
- (_Bool)updateContactsFromScene:(unsigned long long)arg1;
- (void)preCheckAndUpdateInvalidContactsInScene:(unsigned long long)arg1;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

