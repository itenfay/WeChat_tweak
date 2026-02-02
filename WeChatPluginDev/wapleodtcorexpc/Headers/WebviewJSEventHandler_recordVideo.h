//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CaptureVideoInfo, NSString, UIImage, UINavigationController;

@interface WebviewJSEventHandler_recordVideo
{
    UINavigationController *m_oVideoPicker;
    CaptureVideoInfo *m_oVideoInfo;
    UIImage *m_oThumbImg;
    NSString *m_nsThumbLocalId;
    unsigned int _maxDuration;
    _Bool _isCameraMode;
    _Bool _isFrontCamera;
    _Bool _isFromPicker;
}

- (void).cxx_destruct;
- (void)setVideoPreviewHidden:(_Bool)arg1 inPicker:(id)arg2;
- (void)dismissPicker;
- (id)getAppId:(id)arg1;
- (void)didTakeVideo;
- (void)asyncHandleCancel;
- (int)getVideoDuration:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)processImage:(id)arg1;
- (void)processVideo:(id)arg1;
- (void)processVideoFromPicker:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)showVideoPickerCameraMode:(_Bool)arg1 isFrontCamera:(_Bool)arg2 maxDuration:(unsigned int)arg3;
- (void)showSightCamera;
- (void)switchCamera;
- (void)addSightCameraReadyObserver;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

