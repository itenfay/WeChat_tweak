//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TXCVideoProducerDelegateBridge : NSObject
{
    void *_producer;
    struct Lock _lock;
    struct weak_ptr<liteav::video::VideoProducer::Client> _client;
    shared_ptr_679b269c _stats;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onCustomProcessVideoFrame:(id)arg1 dst:(id)arg2;
- (void)videoProducer:(id)arg1 onError:(id)arg2;
- (void)videoProducer:(id)arg1 onEncodeParamsChanged:(const void *)arg2 forStreamType:(int)arg3;
- (void)videoProducer:(id)arg1 onEncoderTypeChanged:(int)arg2 onCodecTypeChanged:(int)arg3 forStreamType:(int)arg4;
- (void)videoProducer:(id)arg1 onEncodeVideoFrame:(id)arg2 forStreamType:(int)arg3;
- (void)videoProducer:(id)arg1 onNotifyPreprocessCost:(unsigned long long)arg2;
- (void)onCustomRenderVideoFrame:(id)arg1;
- (void)videoProducer:(id)arg1 onRenderVideoFrame:(id)arg2 isFirst:(_Bool)arg3;
- (void)onVideoProducerScreenResumed:(id)arg1 isManual:(_Bool)arg2;
- (void)onVideoProducerScreenPaused:(id)arg1 isManual:(_Bool)arg2;
- (void)onVideoProducerScreenStopped:(id)arg1 isManual:(_Bool)arg2;
- (void)onVideoProducerScreenStarted:(id)arg1;
- (void)onVideoProducerCameraInterruptionEnd:(id)arg1;
- (void)onVideoProducerCameraInterrupted:(id)arg1 reason:(long long)arg2;
- (void)onVideoProducerCameraStateUpdated:(id)arg1 deviceId:(id)arg2 isConnected:(_Bool)arg3;
- (void)onVideoProducerCameraStarted:(id)arg1;
- (void)videoProducer:(id)arg1 onCaptureVideoFrame:(id)arg2;
- (void)onVideoProducerCaptureFirstFrame:(id)arg1;
- (shared_ptr_79c0c4be)client;
- (void)setClient:(shared_ptr_79c0c4be)arg1;
- (id)initWithProducer:(void *)arg1 withClient:(shared_ptr_79c0c4be)arg2 withStats:(shared_ptr_679b269c)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

