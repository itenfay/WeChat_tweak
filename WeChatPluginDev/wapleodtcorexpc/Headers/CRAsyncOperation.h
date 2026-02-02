//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperation.h>

@interface CRAsyncOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _block;
}

+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(copy) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)finish;
- (void)startAsyncOperation;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (_Bool)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

