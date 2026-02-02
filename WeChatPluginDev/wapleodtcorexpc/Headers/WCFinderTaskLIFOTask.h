//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderTaskLIFOTask : NSObject
{
    _Bool _isRunning;
    _Bool _asyncEnd;
    CDUnknownBlockType _taskBlock;
    unsigned long long _priority;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool asyncEnd; // @synthesize asyncEnd=_asyncEnd;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(copy, nonatomic) CDUnknownBlockType taskBlock; // @synthesize taskBlock=_taskBlock;

@end

