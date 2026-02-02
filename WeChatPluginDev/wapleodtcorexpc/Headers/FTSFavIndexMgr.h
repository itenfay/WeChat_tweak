//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTS5FavMigrationInfo, FTSFavDB, NSMutableDictionary, NSMutableSet, NSString;

@interface FTSFavIndexMgr
{
    _Bool _hasNewIndexTask;
    _Bool _hasValidateTask;
    _Bool _isIndexing;
    NSMutableSet *_needIndexFavId;
    NSMutableSet *_needBatchGetFavId;
    NSMutableSet *_invalidateBatchGetFavId;
    NSMutableDictionary *_cacheTags;
    FTS5FavMigrationInfo *_favMigrationInfo;
    FTSFavDB *_ftsFavDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSFavDB *ftsFavDB; // @synthesize ftsFavDB=_ftsFavDB;
- (void)internalIndexingDropTask;
- (id)getLocalIdSetFromCacheByTag:(id)arg1;
- (id)getCacheTags;
- (_Bool)internalFTS5IndexingTaskWithNeedIndexFavId:(id)arg1 needBatchGetFavItem:(id)arg2 hasBuildIndexFavId:(id)arg3;
- (void)fireFavIndexingTaskLoop;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (id)pathForMigrationRecord;
- (void)markMigrationFinish;
- (void)markMigrationStart;
- (_Bool)removeBatchGetItem:(id)arg1 isFromDelete:(_Bool)arg2;
- (void)addBatchGetItem:(id)arg1;
- (void)iFTSClearIndex;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingInit;
- (id)initWithFTSDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

