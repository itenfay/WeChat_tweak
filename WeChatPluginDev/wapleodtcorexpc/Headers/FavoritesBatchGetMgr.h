//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItemDB, NSMutableArray, NSObject;
@protocol FavoritesBatchGetMgrDelegate, OS_dispatch_queue;

@interface FavoritesBatchGetMgr
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_batchGetArray;
    id <FavoritesBatchGetMgrDelegate> _delegate;
    _Bool _isGetting;
    unsigned int _autoBatchGetCount;
    _Bool _hasStartBatchGet;
    NSMutableArray *m_batchGetSourceIdFilters;
    _Bool m_isGettingBySourceId;
    NSObject<OS_dispatch_queue> *m_batchGetBySourceIdQueue;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesBatchGetMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldBetchGetAll;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBatchGetFavoriteItemBySourceIdResp:(id)arg1 Event:(unsigned int)arg2;
- (void)TryStartBatchGetBySourceId;
- (void)addBatchGetSourceIdFilters:(id)arg1;
- (void)HandleBatchGetFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)tryFixDataStatusInDataList:(id)arg1;
- (void)asyncDoAddNewItemList:(id)arg1;
- (_Bool)checkConflict:(id)arg1 vs:(id)arg2;
- (void)addClientItemAsNewItem:(id)arg1;
- (void)TryStartBatchGet;
- (void)addBatchGetFavoritesItemList:(id)arg1;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)init;

@end

