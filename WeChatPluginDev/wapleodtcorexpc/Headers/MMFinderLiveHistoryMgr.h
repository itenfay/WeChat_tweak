//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableSet, NSString;

@interface MMFinderLiveHistoryMgr
{
    NSArray *_dataItems;
    long long _expireWatchHistoryDuration;
    NSMutableSet *_dataItemsSet;
    unsigned long long _capacity;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSMutableSet *dataItemsSet; // @synthesize dataItemsSet=_dataItemsSet;
@property(nonatomic) long long expireWatchHistoryDuration; // @synthesize expireWatchHistoryDuration=_expireWatchHistoryDuration;
@property(retain, nonatomic) NSArray *dataItems; // @synthesize dataItems=_dataItems;
- (void)clearDataWithLiveId:(unsigned long long)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)removeAllLiveHistoryDataItems;
- (void)checkAvailableHistoryLive:(CDUnknownBlockType)arg1;
- (void)updateHistoryItem:(id)arg1;
- (void)removeLiveHistoryDataItem:(id)arg1;
- (void)trimCount;
- (_Bool)addLiveHistoryDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

