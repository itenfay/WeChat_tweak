//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperation.h>

@interface WCAsyncOperation : NSOperation
{
    _Bool _internalExecuting;
    _Bool _internalFinished;
}

@property(nonatomic) _Bool internalFinished; // @synthesize internalFinished=_internalFinished;
@property(nonatomic) _Bool internalExecuting; // @synthesize internalExecuting=_internalExecuting;
- (void)updateFinished:(_Bool)arg1;
- (void)updateExecuting:(_Bool)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)asyncStart;
- (void)main;
- (_Bool)isAsynchronous;

@end

