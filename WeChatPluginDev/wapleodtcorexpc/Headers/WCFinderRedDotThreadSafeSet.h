//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface WCFinderRedDotThreadSafeSet : NSObject
{
    NSMutableSet *_setContainer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableSet *setContainer; // @synthesize setContainer=_setContainer;
- (void)containerEnumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)containerCount;
- (id)containerMutableCopy;
- (void)containerRemoveObject:(id)arg1;
- (void)containerAddObject:(id)arg1;
- (id)initWithQueueName:(id)arg1;

@end

