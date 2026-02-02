//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MegaVideoFeedFlowModelCpp
{
}

- (int)splitIndex;
- (id)splitWording;
- (void)setRemainCountForPrefetchNext:(int)arg1;
- (int)remainCountForPrefetchNext;
- (void)removeModelListener:(id)arg1;
- (void)addModelListener:(id)arg1;
- (void)fetchData:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clearList;
- (void)appendList:(id)arg1;
- (_Bool)deleteItem:(id)arg1;
- (_Bool)deleteItemAtIndex:(int)arg1;
- (void)replaceItemAtIndex:(id)arg1 index:(int)arg2;
- (void)insertItemAtIndex:(id)arg1 index:(int)arg2;
- (void)loadItemList:(CDUnknownBlockType)arg1;
- (id)itemList;
- (id)itemIdList;
- (int)indexOfItem:(id)arg1;
- (id)itemAtIndex:(int)arg1;
- (int)itemCount;
- (_Bool)hasMore;
- (_Bool)isLoadingMore;
- (_Bool)hasNew;
- (_Bool)isLoadingNew;
- (_Bool)isInitialLoading;
- (_Bool)isLoading;
- (void)setMonitor:(id)arg1;
- (id)identifier;
- (int)modelType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

