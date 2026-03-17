//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCBusyThread : NSObject
{
    unsigned int _thread;
    float _usage;
    int _depth;
    unsigned long long *_callstack;
}

@property(nonatomic) unsigned long long *callstack; // @synthesize callstack=_callstack;
@property(nonatomic) int depth; // @synthesize depth=_depth;
@property(nonatomic) float usage; // @synthesize usage=_usage;
@property(nonatomic) unsigned int thread; // @synthesize thread=_thread;
- (void)dealloc;
- (id)initWithThread:(unsigned int)arg1 usage:(float)arg2 depth:(int)arg3 callstack:(unsigned long long *)arg4;

@end

