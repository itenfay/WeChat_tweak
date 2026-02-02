//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface WAThreadSafeMutableDictionary : NSObject
{
    NSMutableDictionary *_dic;
    NSRecursiveLock *_lock;
}

+ (id)dictionary;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (id)getLock;
- (id)innerDictionary;
- (id)threadSafeAllValues;
- (id)threaadSafeAllKeys;
- (unsigned long long)count;
- (id)threadSafeRemoveObjectForKey:(id)arg1;
- (id)threadSafeObjectForKey:(id)arg1;
- (void)threadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (void)threadSafeRemoveAllObjects;
- (void)directlySetDictionary:(id)arg1;
- (id)init;

@end

