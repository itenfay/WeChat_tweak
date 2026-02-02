//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperation.h>

@class NSRecursiveLock;

@interface MMAsyncBlockOperation : NSOperation
{
    _Bool _internalExecuting;
    _Bool _internalFinished;
    CDUnknownBlockType _block;
    NSRecursiveLock *_lock;
}

+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool internalFinished; // @synthesize internalFinished=_internalFinished;
@property(nonatomic) _Bool internalExecuting; // @synthesize internalExecuting=_internalExecuting;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)runBlock;
- (void)start;
- (void)finish;
@property(readonly, nonatomic) _Bool isPending;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

