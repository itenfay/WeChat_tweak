//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface MMPollingFetchQueue : NSObject
{
    NSLock *_lock;
    NSMutableArray *_list;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long count;
- (id)popItemsBeforeSortId:(long long)arg1;
- (_Bool)removeAllItems;
- (_Bool)removeItemsByCmdIdList:(id)arg1;
- (_Bool)removeItem:(id)arg1;
- (id)itemByCmdId:(long long)arg1;
- (void)_addItem:(id)arg1;
- (void)addOrReplaceItems:(id)arg1;
- (void)addOrReplaceItem:(id)arg1;
- (id)init;

@end

