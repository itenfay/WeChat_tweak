//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, QMapLinkList;
@protocol QMapLRUCacheDelegate;

@interface QMapLRUCache : NSObject
{
    NSString *_name;
    id <QMapLRUCacheDelegate> _delegate;
    unsigned long long _totalCostLimit;
    unsigned long long _countLimit;
    NSMutableDictionary *_map;
    QMapLinkList *_linkList;
    NSLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) QMapLinkList *linkList; // @synthesize linkList=_linkList;
@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
@property unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property unsigned long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
@property __weak id <QMapLRUCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

