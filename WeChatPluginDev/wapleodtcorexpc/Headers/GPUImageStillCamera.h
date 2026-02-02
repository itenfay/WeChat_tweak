//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureStillImageOutput, NSDictionary;

@interface GPUImageStillCamera
{
    AVCaptureStillImageOutput *photoOutput;
    _Bool requiresFrontCameraTextureCacheCorruptionWorkaround;
    NSDictionary *_currentCaptureMetadata;
    double _jpegCompressionQuality;
}

- (void).cxx_destruct;
@property double jpegCompressionQuality; // @synthesize jpegCompressionQuality=_jpegCompressionQuality;
@property(readonly) NSDictionary *currentCaptureMetadata; // @synthesize currentCaptureMetadata=_currentCaptureMetadata;
- (void)capturePhotoProcessedUpToFilter:(id)arg1 withImageOnGPUHandler:(CDUnknownBlockType)arg2;
- (void)capturePhotoAsPNGProcessedUpToFilter:(id)arg1 withOrientation:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)capturePhotoAsPNGProcessedUpToFilter:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)capturePhotoAsJPEGProcessedUpToFilter:(id)arg1 withOrientation:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)capturePhotoAsJPEGProcessedUpToFilter:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)capturePhotoAsImageProcessedUpToFilter:(id)arg1 withOrientation:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)capturePhotoAsImageProcessedUpToFilter:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)capturePhotoAsSampleBufferWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeInputsAndOutputs;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (id)init;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 useCustomCaptureDevice:(_Bool)arg3;

@end

