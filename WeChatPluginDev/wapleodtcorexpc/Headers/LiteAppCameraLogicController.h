//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GPUImageCropFilter, LiteAppCameraCapture, LiteAppCameraPreview, NSMutableArray, NSMutableDictionary, NSString, WAFilterLogic;
@protocol OS_dispatch_queue;

@interface LiteAppCameraLogicController : NSObject
{
    LiteAppCameraPreview *_cameraPreview;
    WAFilterLogic *_filterLogic;
    GPUImageCropFilter *_cropFilter;
    unsigned int m_currWriterID;
    unsigned int m_currID;
    NSMutableArray *m_recordIDAry;
    _Bool isCameraAppear;
    _Bool _m_requestAuthAccess;
    _Bool _m_isNeedResumeWXMusic;
    _Bool _m_shouldStart;
    _Bool _videoNeedCompress;
    _Bool _forbidGesture;
    _Bool _hasTimeout;
    _Bool _takePhotoSelfieMirror;
    int _cameraState;
    int _resolution;
    NSString *_appId;
    unsigned long long _appUuid;
    unsigned long long _pageId;
    NSObject<OS_dispatch_queue> *_cameraQueue;
    LiteAppCameraCapture *_cameraCapture;
    NSString *_externflashType;
    NSString *_sessionPreset;
    unsigned long long _outputWidth;
    unsigned long long _outputHeight;
    NSMutableArray *_outputFrame;
    long long _devicePosition;
    NSMutableDictionary *_recorderDict;
    NSString *_takedPhotoPath;
    NSString *_videoPath;
    NSString *_thumbPath;
    NSString *_recordError;
    CDUnknownBlockType _startRecordCallback;
    CDUnknownBlockType _stopRecordCallback;
    CDUnknownBlockType _takePhotoCallBack;
    double _jpgCompressQuality;
    struct CGSize _outputVideoSize;
    struct CGSize _outputPhotoSize;
}

+ (_Bool)isAuthStatusOK;
+ (_Bool)needCheckRequestAuthAccess;
- (void).cxx_destruct;
@property(nonatomic) double jpgCompressQuality; // @synthesize jpgCompressQuality=_jpgCompressQuality;
@property(nonatomic) _Bool takePhotoSelfieMirror; // @synthesize takePhotoSelfieMirror=_takePhotoSelfieMirror;
@property(copy, nonatomic) CDUnknownBlockType takePhotoCallBack; // @synthesize takePhotoCallBack=_takePhotoCallBack;
@property(copy, nonatomic) CDUnknownBlockType stopRecordCallback; // @synthesize stopRecordCallback=_stopRecordCallback;
@property(copy, nonatomic) CDUnknownBlockType startRecordCallback; // @synthesize startRecordCallback=_startRecordCallback;
@property(nonatomic) _Bool hasTimeout; // @synthesize hasTimeout=_hasTimeout;
@property(nonatomic) _Bool forbidGesture; // @synthesize forbidGesture=_forbidGesture;
@property(nonatomic) _Bool videoNeedCompress; // @synthesize videoNeedCompress=_videoNeedCompress;
@property(retain, nonatomic) NSString *recordError; // @synthesize recordError=_recordError;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *takedPhotoPath; // @synthesize takedPhotoPath=_takedPhotoPath;
@property(nonatomic) int resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSMutableDictionary *recorderDict; // @synthesize recorderDict=_recorderDict;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(nonatomic) struct CGSize outputPhotoSize; // @synthesize outputPhotoSize=_outputPhotoSize;
@property(nonatomic) struct CGSize outputVideoSize; // @synthesize outputVideoSize=_outputVideoSize;
@property(retain, nonatomic) NSMutableArray *outputFrame; // @synthesize outputFrame=_outputFrame;
@property(nonatomic) unsigned long long outputHeight; // @synthesize outputHeight=_outputHeight;
@property(nonatomic) unsigned long long outputWidth; // @synthesize outputWidth=_outputWidth;
@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(retain, nonatomic) NSString *externflashType; // @synthesize externflashType=_externflashType;
@property _Bool m_shouldStart; // @synthesize m_shouldStart=_m_shouldStart;
@property(nonatomic) _Bool m_isNeedResumeWXMusic; // @synthesize m_isNeedResumeWXMusic=_m_isNeedResumeWXMusic;
@property(nonatomic) _Bool m_requestAuthAccess; // @synthesize m_requestAuthAccess=_m_requestAuthAccess;
@property int cameraState; // @synthesize cameraState=_cameraState;
@property(retain, nonatomic) LiteAppCameraCapture *cameraCapture; // @synthesize cameraCapture=_cameraCapture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraQueue; // @synthesize cameraQueue=_cameraQueue;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) unsigned long long appUuid; // @synthesize appUuid=_appUuid;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isCameraAppear; // @synthesize isCameraAppear;
- (double)getCompressQuality:(id)arg1;
- (_Bool)isPhysicalMemoryMoreThanOrEqualTo4GB;
- (id)getCaptureSessionPreset:(int)arg1;
- (struct CGSize)getCaptureResolution:(int)arg1;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)pauseAllOtherRunningCameraByLogic:(id)arg1;
- (unsigned long long)currentTimeInMilliseconds;
- (id)generateFilePath:(_Bool)arg1;
- (id)cameraCachePath;
- (double)setZoomFactor:(double)arg1;
- (double)maxZoomFactor;
- (void)zoomFactor:(double)arg1;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)updateCameraPreviewRect:(struct CGRect)arg1;
- (void)setCameraCropRect:(struct CGRect)arg1;
- (void)onMovieCompressFinished:(int)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)processVideoAfterCompressFinish:(id)arg1;
- (void)onWriterFailed:(int)arg1;
- (void)setCameraViewMaskWithRect:(struct CGRect)arg1;
- (void)resetFlashAndTorchDueToCurrentCameraState;
- (void)setCameraStateAndRestFlashTorch:(int)arg1;
- (void)updateSessionPresetBeforeSwitchCamera;
- (void)internalSwitchCameraIfNeedThreadSafe:(long long)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (int)getCameraState;
- (id)thumbForVideoWithPath:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (void)finishWriter;
- (_Bool)isRecording:(unsigned int)arg1;
- (void)cancelAllRecorder;
- (void)cancelRecording:(unsigned int)arg1;
- (void)stopRecording:(unsigned int)arg1;
- (unsigned int)startRecording:(struct CGSize)arg1 selfieMirror:(_Bool)arg2 maxVideoDuration:(float)arg3 compressAudio:(_Bool)arg4 audioBitrate:(float)arg5;
- (void)stopRecord:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)startRecord:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)setZoom:(id)arg1;
- (void)takePhoto:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)parseParams:(id)arg1;
- (void)updateCamera:(id)arg1;
- (void)pauseCamera;
- (id)resumeCamera;
- (id)loadCameraLogicWithContentView:(id)arg1;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)releaseCamera;
- (void)dealloc;
- (id)initWithAppUuId:(id)arg1 appUuid:(unsigned long long)arg2 pageId:(unsigned long long)arg3 arguments:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

