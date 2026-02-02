//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView, WAArrayBuffer, WACameraLogicController;
@protocol WAJSContextPlugin_NativeViewsRootViewProtocol, WAPluginComponent_CameraDelegate;

@interface WAPluginComponent_Camera : NSObject
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
    NSString *_appId;
    _Bool _enableFullScreen;
    _Bool _isViewDidAppear;
    id <WAJSContextPlugin_NativeViewsRootViewProtocol> _embedViewDelegate;
    id <WAPluginComponent_CameraDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAPluginComponent_CameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WAJSContextPlugin_NativeViewsRootViewProtocol> embedViewDelegate; // @synthesize embedViewDelegate=_embedViewDelegate;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(nonatomic) _Bool enableFullScreen; // @synthesize enableFullScreen=_enableFullScreen;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)sendEvent:(id)arg1 param:(id)arg2;
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
- (void)removeCamera;
- (void)operateCamera:(id)arg1 cameraId:(unsigned int)arg2 compelete:(CDUnknownBlockType)arg3;
- (void)resizeVideo:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (unsigned int)insertCameraWithConfig:(id)arg1 pos:(struct CGRect)arg2 cameraId:(unsigned int)arg3 parentId:(unsigned int)arg4 size:(struct CGSize *)arg5;
- (void)setScanArea:(id)arg1;
- (void)setCameraViewMaskWithRect:(struct CGRect)arg1;
- (struct CGRect)fixCameraRect:(struct CGRect)arg1;
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

