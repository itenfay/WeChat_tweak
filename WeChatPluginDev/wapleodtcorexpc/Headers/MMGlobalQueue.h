//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface MMGlobalQueue : NSObject
{
    NSOperationQueue *m_queue;
}

+ (id)sharedInstance;
- (void)dynamicSetQueueConcurrentOperationCount;
- (void)addBackgroundOperation:(CDUnknownBlockType)arg1;
- (void)addUIOperation:(CDUnknownBlockType)arg1;
- (void)addDefaultOperation:(CDUnknownBlockType)arg1;
- (id)init;
- (void)addCGIOperation:(CDUnknownBlockType)arg1;
- (void)addOperationFromGlobalDispatchQueue:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

