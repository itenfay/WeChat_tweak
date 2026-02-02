//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WCFinderAccessoryDownloadHeap : NSObject
{
    NSMutableArray *_itemArray;
    NSMutableDictionary *_item2IndexMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *item2IndexMap; // @synthesize item2IndexMap=_item2IndexMap;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
- (id)itemAtIndex:(long long)arg1;
- (void)swapItemWithIndexA:(long long)arg1 andIndexB:(long long)arg2;
- (void)sinkWithIndex:(long long)arg1;
- (void)swimWithIndex:(long long)arg1;
- (void)mergeItem:(id)arg1;
- (void)changeItemWithIdentiferKey:(id)arg1 toPriority:(long long)arg2;
- (id)topItem;
- (id)pop;
- (void)removeAll;
- (void)removeItemWithGroupId:(id)arg1;
- (void)removeItemWithIdentifierKey:(id)arg1;
- (void)addItem:(id)arg1;
- (long long)count;

@end

