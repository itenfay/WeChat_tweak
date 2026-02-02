//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVCaptureBracketedStillImageSettings, AVCaptureDeferredPhotoProxy, AVCapturePhoto, AVCapturePhotoOutput, AVCaptureResolvedPhotoSettings, NSError, NSURL;

@protocol AVCapturePhotoCaptureDelegate <NSObject>

@optional
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishCaptureForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2 error:(NSError *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(NSURL *)arg2 duration:(CDStruct_1b6d18a9)arg3 photoDisplayTime:(CDStruct_1b6d18a9)arg4 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(NSURL *)arg2 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingRawPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg4 bracketSettings:(AVCaptureBracketedStillImageSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(AVCaptureResolvedPhotoSettings *)arg4 bracketSettings:(AVCaptureBracketedStillImageSettings *)arg5 error:(NSError *)arg6;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishCapturingDeferredPhotoProxy:(AVCaptureDeferredPhotoProxy *)arg2 error:(NSError *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didFinishProcessingPhoto:(AVCapturePhoto *)arg2 error:(NSError *)arg3;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 didCapturePhotoForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 willCapturePhotoForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;
- (void)captureOutput:(AVCapturePhotoOutput *)arg1 willBeginCaptureForResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg2;
@end

