//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDiffableDataSourceSnapshot, NSMapTable, NSMutableArray, NSMutableDictionary, WCFinderFeedArray, WCFinderFeedArrayObserverList;

@interface WCFinderFeedGroup : NSObject
{
    WCFinderFeedArray *_feedArray;
    NSDiffableDataSourceSnapshot *_originSnapshot;
    NSDiffableDataSourceSnapshot *_snapshot;
    CDUnknownBlockType _grouper;
    NSMutableArray *_sessionList;
    NSMutableDictionary *_sessionMap;
    NSMapTable *_itemMap;
    WCFinderFeedArrayObserverList *_observer;
}

+ (id)groupFeedArray:(CDUnknownBlockType)arg1 source:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedArrayObserverList *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSMapTable *itemMap; // @synthesize itemMap=_itemMap;
@property(retain, nonatomic) NSMutableDictionary *sessionMap; // @synthesize sessionMap=_sessionMap;
@property(retain, nonatomic) NSMutableArray *sessionList; // @synthesize sessionList=_sessionList;
@property(copy, nonatomic) CDUnknownBlockType grouper; // @synthesize grouper=_grouper;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *originSnapshot; // @synthesize originSnapshot=_originSnapshot;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
- (id)indexPathForTid:(id)arg1;
- (long long)itemCountForSecionAtIndex:(long long)arg1;
- (id)feedTidForIndexPath:(id)arg1;
- (id)keyForSession:(long long)arg1;
@property(readonly, nonatomic) unsigned long long sessionCount;
- (void)unSink:(id)arg1;
- (void)sinkChange:(id)arg1 action:(SEL)arg2;
- (void)onSourceChanged:(id)arg1 sender:(id)arg2;
- (id)initWithGroupper:(CDUnknownBlockType)arg1 source:(id)arg2;
- (id)initWithGroupper:(CDUnknownBlockType)arg1;

@end

