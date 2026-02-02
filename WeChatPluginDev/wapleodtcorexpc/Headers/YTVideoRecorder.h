//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVCaptureAudioDataOutput, AVCaptureSession, NSString;

@interface YTVideoRecorder : NSObject
{
    AVAssetWriter *videoWriter;
    AVAssetWriterInput *videoInput;
    AVAssetWriterInput *audioInput;
    AVCaptureAudioDataOutput *audioOutput;
    AVCaptureSession *audioCaptureSession;
    AVAssetWriterInputPixelBufferAdaptor *adaptor;
    long long videoWidth;
    long long videoHeight;
    int frameCount;
    int frameRate;
    _Bool isStarted;
    NSString *videoPath;
}

- (void).cxx_destruct;
- (struct __CVBuffer *)newPixelBufferFromCGImage:(const struct Mat *)arg1;
- (void)saveToCameraRoll:(CDUnknownBlockType)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stop:(CDUnknownBlockType)arg1;
- (void)encodeWith:(const struct Mat *)arg1;
- (void)startWith:(id)arg1 withWidth:(long long)arg2 withHeight:(long long)arg3 withCodecSetting:(id)arg4 withAudioSetting:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

