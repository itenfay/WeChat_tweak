//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WAArrayBuffer, WACameraLogicController;

@interface WAWebViewPlugin_Camera
{
    WACameraLogicController *_cameraLogic;
    unsigned int _curCameraID;
    _Bool _bIsRecording;
    UIView *_cameraView;
    struct CGRect _cameraPreviewFrame;
    NSString *_photoQuality;
    CDUnknownBlockType _photoOpearateBlock;
    CDUnknownBlockType _videoOpearateBlock;
    unsigned long long _startRecordTime;
    _Bool _bHasParentId;
    int _resolution;
    struct CGSize _szOutput;
    double _frameMinLength;
    long long _orientation;
    struct CGRect _cameraViewMaskRect;
    WAArrayBuffer *_arrayBuffer;
    void *_originData;
    void *_reflectData;
    void *_scaleSrcData;
    void *_clipSrcData;
    int _bufferId;
    _Bool _centerCrop;
    _Bool _cameraOpened;
    NSString *_appId;
}

- (void).cxx_destruct;
- (void)changeCameraMenuState:(_Bool)arg1;
- (void)sendEvent:(id)arg1 param:(id)arg2;
- (void)onCameraDidRotate;
- (void)onCameraVideoTakenFail;
- (void)notifyRecordVideoEnd:(id)arg1 ThumbLocalID:(id)arg2 otherParams:(id)arg3;
- (void)tryStopRecordAndNotifyVideoRecordEnd;
- (id)videoParamsByVideoPath:(id)arg1;
- (void)onCameraVideoTakenSuccess:(id)arg1 thumbImg:(id)arg2 isMuted:(_Bool)arg3;
- (double)getCompressQuality;
- (void)onCameraPictureTaken:(id)arg1 withFrontCamera:(_Bool)arg2;
- (void)onCameraVideoRecordingWithFrameImg:(id)arg1;
- (void)onCameraFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)onCameraScanCode:(id)arg1;
- (void)onCameraStopRecord;
- (void)onCameraStartRecord:(int)arg1;
- (void)onCameraStop;
- (void)onCameraNeedAuthCancel;
- (void)onCameraInitDone;
- (void)setCameraFront:(_Bool)arg1;
- (void)handleUIOrientationChanged;
- (void)operateCamera:(id)arg1 cameraId:(unsigned int)arg2 compelete:(CDUnknownBlockType)arg3;
- (void)resizeVideo:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (_Bool)isCameraAppear;
- (_Bool)removeChildView:(unsigned int)arg1;
- (unsigned int)insertCameraWithConfig:(id)arg1 pos:(struct CGRect)arg2 cameraId:(unsigned int)arg3 parentId:(unsigned int)arg4 size:(struct CGSize *)arg5;
- (void)setScanArea:(id)arg1;
- (void)setCameraViewMaskWithRect:(struct CGRect)arg1;
- (struct CGRect)fixCameraRect:(struct CGRect)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

