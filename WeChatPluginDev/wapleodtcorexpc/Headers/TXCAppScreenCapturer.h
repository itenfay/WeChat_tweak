//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, TXCDispatchQueue, TXCTimedOutput, TXCVideoCaptureConfig;

@interface TXCAppScreenCapturer : NSObject
{
    _Bool _isRunning;
    unsigned long long captureType;
    TXCDispatchQueue *_queue;
    TXCDispatchQueue *_outputQueue;
    TXCTimedOutput *_timedOutput;
    TXCVideoCaptureConfig *_config;
    NSMutableSet *_subscribers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *subscribers; // @synthesize subscribers=_subscribers;
@property(retain, nonatomic) TXCVideoCaptureConfig *config; // @synthesize config=_config;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) TXCTimedOutput *timedOutput; // @synthesize timedOutput=_timedOutput;
@property(retain, nonatomic) TXCDispatchQueue *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (void)screenRecorderDidChangeAvailability:(id)arg1;
- (void)screenRecorder:(id)arg1 didStopRecordingWithPreviewViewController:(id)arg2 error:(id)arg3;
- (void)notifyScreenSize:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)startCaptureWithRestRetryCount:(long long)arg1;
- (void)stopScreenCaptureInternal:(int)arg1;
- (void)startScreenCaptureInternal:(int)arg1;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) struct CGSize screenSize;
- (void)setFrameRate:(long long)arg1;
- (void)applyConfigs:(id)arg1;
@property(readonly, nonatomic) unsigned long long captureType; // @synthesize captureType;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

