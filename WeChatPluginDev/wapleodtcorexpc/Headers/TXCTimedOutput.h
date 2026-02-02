//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, TXCDispatchQueue;
@protocol OS_dispatch_source, TXCTimedOutputDelegate;

@interface TXCTimedOutput : NSObject
{
    _Bool _keepsLastObject;
    _Bool _isLastObjectOutput;
    double _interval;
    NSMutableArray *_buffer;
    id <TXCTimedOutputDelegate> _delegate;
    TXCDispatchQueue *_queue;
    long long _cacheSize;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isLastObjectOutput; // @synthesize isLastObjectOutput=_isLastObjectOutput;
@property(readonly, nonatomic) _Bool keepsLastObject; // @synthesize keepsLastObject=_keepsLastObject;
@property(readonly, nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <TXCTimedOutputDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void)outputObject;
- (void)pushObject:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1 inQueue:(id)arg2 interval:(double)arg3 cacheSize:(long long)arg4 keepsLastObject:(_Bool)arg5;

@end

