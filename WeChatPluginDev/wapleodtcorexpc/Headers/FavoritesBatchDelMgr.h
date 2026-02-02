//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItemDB, NSMutableArray;
@protocol FavoritesBatchDelMgrDelegate;

@interface FavoritesBatchDelMgr
{
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_batchDelArray;
    NSMutableArray *_failArray;
    NSMutableArray *m_batchDelSourceIdFilters;
    NSMutableArray *m_batchDelFailedFilters;
    id <FavoritesBatchDelMgrDelegate> _delegate;
    _Bool _isDeling;
    _Bool m_isDelingBySourceId;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesBatchDelMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkFailQueue;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBatchDelFavItemBySourceIdResp:(id)arg1 Event:(unsigned int)arg2;
- (void)tryStartBatchDelBySourceId;
- (void)addBatchDelSourceIdFilters:(id)arg1;
- (void)HandleBatchDelFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)TryStartBatchDel;
- (void)addBatchDelFavoritesItemList:(id)arg1;
- (void)dealloc;
- (_Bool)loadBatchDelQueue;
- (void)initDB:(id)arg1;
- (id)init;

@end

