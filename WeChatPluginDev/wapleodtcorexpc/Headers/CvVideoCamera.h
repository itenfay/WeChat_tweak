//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVCaptureVideoDataOutput, CALayer, NSObject, NSString;
@protocol CvVideoCameraDelegate, OS_dispatch_queue;

@interface CvVideoCamera
{
    AVCaptureVideoDataOutput *videoDataOutput;
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;
    CALayer *customPreviewLayer;
    _Bool grayscaleMode;
    _Bool recordVideo;
    _Bool rotateVideo;
    AVAssetWriterInput *recordAssetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *recordPixelBufferAdaptor;
    AVAssetWriter *recordAssetWriter;
    CDStruct_1b6d18a9 lastSampleTime;
    int recordingCountDown;
    id <CvVideoCameraDelegate> delegate;
}

@property(retain, nonatomic) AVAssetWriter *recordAssetWriter; // @synthesize recordAssetWriter;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *recordPixelBufferAdaptor; // @synthesize recordPixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *recordAssetWriterInput; // @synthesize recordAssetWriterInput;
@property(nonatomic) _Bool rotateVideo; // @synthesize rotateVideo;
@property(nonatomic) _Bool recordVideo; // @synthesize recordVideo;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput;
@property(retain, nonatomic) CALayer *customPreviewLayer; // @synthesize customPreviewLayer;
@property(nonatomic) _Bool grayscaleMode; // @synthesize grayscaleMode;
@property(nonatomic) id <CvVideoCameraDelegate> delegate; // @synthesize delegate;
- (id)videoFileString;
- (id)videoFileURL;
- (void)saveVideo;
- (void)updateOrientation;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (struct __CVBuffer *)pixelBufferFromCGImage:(struct CGImage *)arg1;
- (void)createCustomVideoPreview;
- (void)createCaptureOutput;
- (void)createVideoFileOutput;
- (void)createVideoDataOutput;
- (void)layoutPreviewLayer;
- (void)adjustLayoutToInterfaceOrientation:(long long)arg1;
- (void)stop;
- (void)start;
- (id)initWithParentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

