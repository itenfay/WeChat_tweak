//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveManger, MMWeEffectFrame;

@protocol MMLiveManagerCaptureDelegate <NSObject>
- (void)liveManager:(MMLiveManger *)arg1 didRenderRotateTransitingChanged:(_Bool)arg2;
- (void)liveManager:(MMLiveManger *)arg1 didChangedVirtualCameraCaptureDevice:(_Bool)arg2;
- (void)liveManager:(MMLiveManger *)arg1 didCapturingChanged:(_Bool)arg2;
- (void)liveManager:(MMLiveManger *)arg1 didOutputRenderFrame:(MMWeEffectFrame *)arg2;
- (void)liveManager:(MMLiveManger *)arg1 didOutputSampleBufferForTransmit:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)liveManager:(MMLiveManger *)arg1 didOutputSampleBufferForRender:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
@end

