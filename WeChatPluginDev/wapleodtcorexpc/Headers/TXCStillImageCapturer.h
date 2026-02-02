//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, TXCDispatchQueue, TXCTimedOutput, TXCVideoCaptureConfig;

@interface TXCStillImageCapturer : NSObject
{
    _Bool _isRunning;
    TXCDispatchQueue *_queue;
    TXCDispatchQueue *_outputQueue;
    TXCVideoCaptureConfig *_config;
    NSMutableSet *_subscribers;
    TXCTimedOutput *_timedOutput;
    long long _defaultFps;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long defaultFps; // @synthesize defaultFps=_defaultFps;
@property(retain, nonatomic) TXCTimedOutput *timedOutput; // @synthesize timedOutput=_timedOutput;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly, nonatomic) NSMutableSet *subscribers; // @synthesize subscribers=_subscribers;
@property(retain, nonatomic) TXCVideoCaptureConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) TXCDispatchQueue *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (void)updateStillImage:(id)arg1;
- (void)updateFps:(long long)arg1;
- (void)stop;
- (void)start;
- (void)setStillImage:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)applyConfigs:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long captureType;
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

