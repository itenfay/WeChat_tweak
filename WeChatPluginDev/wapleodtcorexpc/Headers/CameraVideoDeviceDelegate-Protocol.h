//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class AVCaptureOutput, CIImage, NSDictionary;

@protocol CameraVideoDeviceDelegate <AVCaptureVideoDataOutputSampleBufferDelegate, NSObject>
- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 depthPixelBuffer:(CIImage *)arg3;

@optional
- (void)cameraDeviceEvent:(int)arg1 withAguments:(NSDictionary *)arg2;
@end

