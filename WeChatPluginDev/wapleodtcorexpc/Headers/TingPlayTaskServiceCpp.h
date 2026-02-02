//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayTaskServiceCpp
{
}

+ (id)createWithExistedSource:(id)arg1;
+ (id)createWithTapeInfoAndTingListSource:(id)arg1 context:(id)arg2;
+ (id)createWithCategoryAndTingListSource:(id)arg1 context:(id)arg2;
+ (id)createWithCategoryAndInitialItem:(id)arg1 itemList:(id)arg2 mergeWithBaseListenId:(_Bool)arg3 sessionBuffer:(id)arg4;
+ (id)createWithCategoryAndItemList:(id)arg1 itemList:(id)arg2;
+ (id)createWithListenIdList:(id)arg1;
+ (id)createWithTingItems:(id)arg1;
+ (id)createWithItem:(id)arg1;
+ (id)createEmpty;
- (void)checkRefresh:(id)arg1;
- (void)setupNewTaskService:(id)arg1;
- (id)getLiveTaskCategoryItem;
- (_Bool)isLiveTaskService;
- (id)getCurrCategorySessionExtInfo;
- (void)setCurrCategorySessionExtInfo:(id)arg1;
- (void)refreshItem:(id)arg1;
- (id)fetchMoreFromCache;
- (void)reloadListOrderType:(int)arg1;
- (void)applyListStash;
- (void)stashList;
- (void)enableFetchRecommendListWhenPlaySingle:(_Bool)arg1;
- (_Bool)isEnableRecommendListWhenPlaySingle;
- (id)generateListSourceContext;
- (void)updateCurrentTapeItem;
- (void)insert:(id)arg1 index:(int)arg2;
- (_Bool)modifyItem:(id)arg1;
- (void)edit:(id)arg1;
- (_Bool)isLoadingWithDirection:(int)arg1;
- (_Bool)hasMoreWithDirection:(int)arg1;
- (void)loadMoreWithDirection:(int)arg1 canSwitchRange:(_Bool)arg2;
- (id)generateTapeItem;
- (id)getItems;
- (void)checkUpdateListenItem:(id)arg1;
- (void)addWeakPlayTaskClient:(id)arg1;
- (void)clearPlayTaskClient;
- (void)removePlayTaskClient:(id)arg1;
- (void)addPlayTaskClient:(id)arg1;
- (id)toTapeItem;
- (id)getItemInfoWithId:(id)arg1;
- (id)getItemInfo:(int)arg1;
- (id)getPlayTaskContext;
- (void)setPlayTaskContext:(id)arg1;
- (_Bool)getCurrentInPlayer;
- (void)setCurrentInPlayer:(_Bool)arg1;
- (int)getScene;
- (void)setEnterScene:(int)arg1;
- (void)setScene:(int)arg1;
- (_Bool)isLoading;
- (int)count;
- (_Bool)hasMore;
- (void)loadMore:(int)arg1;
- (void)refresh;
- (void)preload;
- (void)load:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

