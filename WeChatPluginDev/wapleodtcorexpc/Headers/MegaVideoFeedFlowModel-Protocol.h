//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, NSData, NSString;
@protocol MegaVideoFeedFlowModelListener, MegaVideoObjcPageMonitor;

@protocol MegaVideoFeedFlowModel <NSObject, UnitRCBaseProtocol>
- (int)splitIndex;
- (NSString *)splitWording;
- (void)setRemainCountForPrefetchNext:(int)arg1;
- (int)remainCountForPrefetchNext;
- (void)removeModelListener:(id <MegaVideoFeedFlowModelListener>)arg1;
- (void)addModelListener:(id <MegaVideoFeedFlowModelListener>)arg1;
- (void)fetchData:(int)arg1 callback:(void (^)(int))arg2;
- (void)clearList;
- (void)appendList:(NSArray *)arg1;
- (_Bool)deleteItem:(NSString *)arg1;
- (_Bool)deleteItemAtIndex:(int)arg1;
- (void)replaceItemAtIndex:(NSData *)arg1 index:(int)arg2;
- (void)insertItemAtIndex:(NSData *)arg1 index:(int)arg2;
- (void)loadItemList:(void (^)(NSArray *))arg1;
- (NSArray *)itemList;
- (NSArray *)itemIdList;
- (int)indexOfItem:(NSString *)arg1;
- (NSData *)itemAtIndex:(int)arg1;
- (int)itemCount;
- (_Bool)hasMore;
- (_Bool)isLoadingMore;
- (_Bool)hasNew;
- (_Bool)isLoadingNew;
- (_Bool)isInitialLoading;
- (_Bool)isLoading;
- (void)setMonitor:(id <MegaVideoObjcPageMonitor>)arg1;
- (NSString *)identifier;
- (int)modelType;
@end

