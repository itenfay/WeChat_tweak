//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSOrderedCollectionDifference, NSString, WCFinderFeedArrayBridge, WCFinderFeedArrayObserverList;

@interface WCFinderFeedArray : NSObject
{
    struct map<NSString *, long, WCFinderMapStringKey, std::allocator<std::pair<NSString *const, long>>> indexMap;
    _Bool _needRebuildIndexMap;
    _Bool _dataModifyChanged;
    NSString *_name;
    CDUnknownBlockType _mapper;
    NSMutableArray *_mutfeeds;
    NSMutableSet *_tids;
    NSMutableArray *_mutTidArray;
    WCFinderFeedArrayObserverList *_observers;
    NSOrderedCollectionDifference *_changed;
    NSArray *_beforeModifyFeeds;
    WCFinderFeedArrayBridge *_bridge;
}

+ (id)arrayWithFeeds:(id)arg1;
+ (id)array;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedArrayBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) NSArray *beforeModifyFeeds; // @synthesize beforeModifyFeeds=_beforeModifyFeeds;
@property(retain, nonatomic) NSOrderedCollectionDifference *changed; // @synthesize changed=_changed;
@property(retain, nonatomic) WCFinderFeedArrayObserverList *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool dataModifyChanged; // @synthesize dataModifyChanged=_dataModifyChanged;
@property(nonatomic) _Bool needRebuildIndexMap; // @synthesize needRebuildIndexMap=_needRebuildIndexMap;
@property(retain, nonatomic) NSMutableArray *mutTidArray; // @synthesize mutTidArray=_mutTidArray;
@property(retain, nonatomic) NSMutableSet *tids; // @synthesize tids=_tids;
@property(retain, nonatomic) NSMutableArray *mutfeeds; // @synthesize mutfeeds=_mutfeeds;
@property(copy, nonatomic) CDUnknownBlockType mapper; // @synthesize mapper=_mapper;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)createSiteNotifyFeedArray:(CDUnknownBlockType)arg1;
- (id)createRelationshipFeedArray:(CDUnknownBlockType)arg1;
- (id)mapNewFeedArray:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)notifyDataChanged:(id)arg1;
- (void)unSink:(id)arg1;
- (void)sinkChange:(id)arg1 action:(SEL)arg2;
- (void)resize:(id)arg1 mapper:(CDUnknownBlockType)arg2;
- (_Bool)replaceFeed:(id)arg1 withTid:(id)arg2;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)removeWithTidList:(id)arg1;
- (void)removeFeedWithTid:(id)arg1;
- (void)removeFeedAtIndex:(long long)arg1;
- (void)removeAllFeeds;
- (void)insertFeeds:(id)arg1 atIndex:(long long)arg2;
- (void)insertFeedsToHead:(id)arg1;
- (void)appendFeeds:(id)arg1;
- (void)insertFeed:(id)arg1 atIndex:(long long)arg2;
- (void)appendFeed:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)notEmpty;
- (_Bool)isEmpty;
- (long long)count;
- (_Bool)containTid:(id)arg1;
- (_Bool)isAllChangeInsertTop;
- (id)modifyChange;
- (id)tidArray;
- (id)mapTidArray;
- (id)feedWithTid:(id)arg1;
- (id)feedAtIndex:(long long)arg1;
- (id)lastFeed;
- (id)firstFeed;
- (long long)indexForTid:(id)arg1;
- (void)_rebuildIndexMap;
- (_Bool)modify:(CDUnknownBlockType)arg1 context:(id)arg2 notifyAnyway:(_Bool)arg3;
- (id)makeDiff;
- (_Bool)modify:(CDUnknownBlockType)arg1 context:(id)arg2;
- (_Bool)modify:(CDUnknownBlockType)arg1;
- (id)feeds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

