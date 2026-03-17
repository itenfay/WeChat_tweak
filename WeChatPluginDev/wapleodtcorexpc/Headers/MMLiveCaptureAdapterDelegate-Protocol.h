//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveCaptureAdapter, MMWeEffectFrame, WCLoopMetrics;

@protocol MMLiveCaptureAdapterDelegate <NSObject>
- (void)liveCaptureAdapter:(MMLiveCaptureAdapter *)arg1 didRenderRotateTransitingChanged:(_Bool)arg2;
- (void)liveCaptureAdapter:(MMLiveCaptureAdapter *)arg1 didCapturingChanged:(_Bool)arg2;
- (void)liveCaptureAdapter:(MMLiveCaptureAdapter *)arg1 didOutputRenderFrame:(MMWeEffectFrame *)arg2;
- (void)liveCaptureAdapter:(MMLiveCaptureAdapter *)arg1 didOutputSampleBufferForTransmit:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)liveCaptureAdapter:(MMLiveCaptureAdapter *)arg1 didOutputSampleBufferForRender:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)liveCaptureAdapter:(MMLiveCaptureAdapter *)arg1 didFinishCollectingCaptureMetrics:(WCLoopMetrics *)arg2;
@end

