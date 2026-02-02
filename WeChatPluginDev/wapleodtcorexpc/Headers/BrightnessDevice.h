//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVCaptureSession;
@protocol OS_dispatch_queue, OnGetBrightnessInner;

@interface BrightnessDevice : NSObject
{
    float _brightnessValue;
    id <OnGetBrightnessInner> _delegate;
    NSObject<OS_dispatch_queue> *_videoProcessingQueue;
    AVCaptureSession *_session;
}

- (void).cxx_destruct;
@property(nonatomic) float brightnessValue; // @synthesize brightnessValue=_brightnessValue;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoProcessingQueue; // @synthesize videoProcessingQueue=_videoProcessingQueue;
@property(nonatomic) __weak id <OnGetBrightnessInner> delegate; // @synthesize delegate=_delegate;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (float)getBrightness;
- (void)stopLightSensitive;
- (void)startLightSensitive;

@end

