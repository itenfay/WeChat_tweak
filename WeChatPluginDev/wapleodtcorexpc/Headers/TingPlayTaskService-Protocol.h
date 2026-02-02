//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenCategoryItem, NSArray, NSData, NSString, TingItem, TingListSourceContext, TingListSourceRefreshContext, TingPlayTaskContext, TingTapeItem;
@protocol TingPlayTaskClient, TingPlayTaskService;

@protocol TingPlayTaskService <NSObject, UnitRCBaseProtocol>
- (void)checkRefresh:(TingListSourceRefreshContext *)arg1;
- (void)setupNewTaskService:(id <TingPlayTaskService>)arg1;
- (MMListenCategoryItem *)getLiveTaskCategoryItem;
- (_Bool)isLiveTaskService;
- (NSArray *)getCurrCategorySessionExtInfo;
- (void)setCurrCategorySessionExtInfo:(NSArray *)arg1;
- (void)refreshItem:(TingItem *)arg1;
- (NSArray *)fetchMoreFromCache;
- (void)reloadListOrderType:(int)arg1;
- (void)applyListStash;
- (void)stashList;
- (void)enableFetchRecommendListWhenPlaySingle:(_Bool)arg1;
- (_Bool)isEnableRecommendListWhenPlaySingle;
- (TingListSourceContext *)generateListSourceContext;
- (void)updateCurrentTapeItem;
- (void)insert:(TingItem *)arg1 index:(int)arg2;
- (_Bool)modifyItem:(TingItem *)arg1;
- (void)edit:(NSArray *)arg1;
- (_Bool)isLoadingWithDirection:(int)arg1;
- (_Bool)hasMoreWithDirection:(int)arg1;
- (void)loadMoreWithDirection:(int)arg1 canSwitchRange:(_Bool)arg2;
- (TingTapeItem *)generateTapeItem;
- (NSArray *)getItems;
- (void)checkUpdateListenItem:(TingItem *)arg1;
- (void)addWeakPlayTaskClient:(id <TingPlayTaskClient>)arg1;
- (void)clearPlayTaskClient;
- (void)removePlayTaskClient:(id <TingPlayTaskClient>)arg1;
- (void)addPlayTaskClient:(id <TingPlayTaskClient>)arg1;
- (NSData *)toTapeItem;
- (TingItem *)getItemInfoWithId:(NSString *)arg1;
- (TingItem *)getItemInfo:(int)arg1;
- (TingPlayTaskContext *)getPlayTaskContext;
- (void)setPlayTaskContext:(TingPlayTaskContext *)arg1;
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
@end

