//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyWCDB, NSMutableArray, NSMutableDictionary, WCTimelineBatchGetFeedsCGI;
@protocol WCMicroMerchantFeedsMgrDelegate;

@interface WCMicroMerchantFeedsMgr : NSObject
{
    unsigned int _foldSectionSize;
    MyWCDB *_database;
    CDUnknownBlockType _groupItemUpdatedBlock;
    id <WCMicroMerchantFeedsMgrDelegate> _delegate;
    NSMutableDictionary *_microMerchantFeedGroups;
    NSMutableDictionary *_reverseFeedID2GroupID;
    NSMutableArray *_segments;
    NSMutableDictionary *_microMerchantFeedsDataItemDict;
    WCTimelineBatchGetFeedsCGI *_batchGetFeedsCGI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTimelineBatchGetFeedsCGI *batchGetFeedsCGI; // @synthesize batchGetFeedsCGI=_batchGetFeedsCGI;
@property(nonatomic) unsigned int foldSectionSize; // @synthesize foldSectionSize=_foldSectionSize;
@property(retain, nonatomic) NSMutableDictionary *microMerchantFeedsDataItemDict; // @synthesize microMerchantFeedsDataItemDict=_microMerchantFeedsDataItemDict;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSMutableDictionary *reverseFeedID2GroupID; // @synthesize reverseFeedID2GroupID=_reverseFeedID2GroupID;
@property(retain, nonatomic) NSMutableDictionary *microMerchantFeedGroups; // @synthesize microMerchantFeedGroups=_microMerchantFeedGroups;
@property(nonatomic) __weak id <WCMicroMerchantFeedsMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType groupItemUpdatedBlock; // @synthesize groupItemUpdatedBlock=_groupItemUpdatedBlock;
@property(retain, nonatomic) MyWCDB *database; // @synthesize database=_database;
- (void)dumpSegments:(id)arg1;
- (void)dumpMicroMerchantFeedsGroup:(id)arg1;
- (void)dumpReverseIDMap:(id)arg1;
- (void)dumpAllCaches;
- (_Bool)unfoldTimelineFromUsername:(id)arg1;
- (_Bool)isTimelineUnfoldedFromUsername:(id)arg1;
- (void)tryMergeSvrDataListComment:(id)arg1 withLocal:(id)arg2;
- (id)dataItemListToDataDict:(id)arg1;
- (void)fetchGroupItemsFromSvr:(id)arg1 originalDataList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)microMerchantFeedStatusForFeedID:(id)arg1;
- (_Bool)isFeedIDFoldInGroup:(id)arg1;
- (id)findGroupIdWithFeedId:(id)arg1;
- (unsigned long long)findDataIndexInCache:(id)arg1 itemID:(id)arg2;
- (id)getDataItemInCache:(id)arg1 groupId:(id)arg2;
- (_Bool)deleteDataItemInCache:(id)arg1 groupId:(id)arg2;
- (_Bool)removeAllDataItemsInCache:(id)arg1;
- (_Bool)replaceDataItemCache:(id)arg1 forGroupId:(id)arg2;
- (_Bool)modifyDataItemInCache:(id)arg1 groupId:(id)arg2;
- (id)getDataItemsFromCache:(id)arg1;
- (_Bool)deleteDataItemInCache:(id)arg1;
- (_Bool)modifyCache:(id)arg1;
- (id)getDataItemInCache:(id)arg1;
- (void)deleteAllDatabaseObjectForGroupId:(id)arg1;
- (id)getMicroMerchantDataItemsByIds:(id)arg1;
- (_Bool)reloadDataItemFromDatabaseToCache:(id)arg1;
- (_Bool)deleteRelationInDatabase:(id)arg1;
- (_Bool)deleteDataItemInDatabase:(id)arg1;
- (id)getDataItemInDatabase:(id)arg1;
- (void)updateMicroMerchantGroupsCache:(id)arg1 dataList:(id)arg2;
- (id)mergeMicroMerchantFeeds:(id)arg1 feedList:(id)arg2;
- (void)deleteAllCacheForGroupId:(id)arg1;
- (void)updateMicroMerchantGroupDatabase:(id)arg1 dataList:(id)arg2;
- (void)updateMicroMerchantGroupCache:(id)arg1;
- (void)saveUpdateSegment:(id)arg1 InsertSegments:(id)arg2;
- (id)convertFeedIdArrayToDBSegments:(id)arg1;
- (id)splitArray:(id)arg1 pageSize:(unsigned int)arg2;
- (void)mergeTimelineIdx:(id)arg1;
- (id)filterIDList:(id)arg1 withMaxID:(id)arg2;
- (id)getCachedMicroMerchantFeedGroup:(id)arg1;
- (id)getCachedMicroMerchantFeedGroups;
- (id)foldSyncContext;
- (void)preloadMicroMerchantFeedsGroupFromBottom:(id)arg1 toTop:(id)arg2;
- (void)preloadMicroMerchantFeedsGroupOnBeigin;
- (void)clearNoUseSegments:(id)arg1 checkCnt:(unsigned int)arg2;
- (void)clearSoftDeletedMircoMechantFeeds;
- (void)cleanUpTables;
- (void)checkFoldSizeChange;
- (void)reloadCacheDatas;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end

