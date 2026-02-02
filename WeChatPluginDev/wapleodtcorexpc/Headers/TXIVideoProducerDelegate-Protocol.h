//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSString, TXCVideoFrame, TXCVideoProducer;

@protocol TXIVideoProducerDelegate <NSObject>
- (void)videoProducer:(TXCVideoProducer *)arg1 onError:(NSError *)arg2;
- (void)videoProducer:(TXCVideoProducer *)arg1 onEncodeParamsChanged:(const void *)arg2 forStreamType:(int)arg3;
- (void)videoProducer:(TXCVideoProducer *)arg1 onEncoderTypeChanged:(int)arg2 onCodecTypeChanged:(int)arg3 forStreamType:(int)arg4;
- (void)videoProducer:(TXCVideoProducer *)arg1 onEncodeVideoFrame:(TXCVideoFrame *)arg2 forStreamType:(int)arg3;
- (void)videoProducer:(TXCVideoProducer *)arg1 onRenderVideoFrame:(TXCVideoFrame *)arg2 isFirst:(_Bool)arg3;
- (void)videoProducer:(TXCVideoProducer *)arg1 onNotifyPreprocessCost:(unsigned long long)arg2;
- (void)onVideoProducerScreenResumed:(TXCVideoProducer *)arg1 isManual:(_Bool)arg2;
- (void)onVideoProducerScreenPaused:(TXCVideoProducer *)arg1 isManual:(_Bool)arg2;
- (void)onVideoProducerScreenStopped:(TXCVideoProducer *)arg1 isManual:(_Bool)arg2;
- (void)onVideoProducerScreenStarted:(TXCVideoProducer *)arg1;
- (void)onVideoProducerCameraInterruptionEnd:(TXCVideoProducer *)arg1;
- (void)onVideoProducerCameraInterrupted:(TXCVideoProducer *)arg1 reason:(long long)arg2;
- (void)onVideoProducerCameraStateUpdated:(TXCVideoProducer *)arg1 deviceId:(NSString *)arg2 isConnected:(_Bool)arg3;
- (void)onVideoProducerCameraStarted:(TXCVideoProducer *)arg1;
- (void)videoProducer:(TXCVideoProducer *)arg1 onCaptureVideoFrame:(TXCVideoFrame *)arg2;
- (void)onVideoProducerCaptureFirstFrame:(TXCVideoProducer *)arg1;
@end

