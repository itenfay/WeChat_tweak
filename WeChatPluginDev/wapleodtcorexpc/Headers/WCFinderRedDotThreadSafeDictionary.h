//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WCFinderRedDotThreadSafeDictionary : NSObject
{
    NSMutableDictionary *_dicContainer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *dicContainer; // @synthesize dicContainer=_dicContainer;
- (id)containerAllValues;
- (void)containerEnumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)containerCount;
- (id)containerMutableCopy;
- (id)containerObjectForKey:(id)arg1;
- (void)containerRemoveObjectsForKeys:(id)arg1;
- (void)containerRemoveObjectForKey:(id)arg1;
- (void)containerSetObject:(id)arg1 forKey:(id)arg2;
- (void)containerReset;
- (id)currentDic;
- (id)initWithQueueName:(id)arg1;

@end

