//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GPUImageCropFilter, NSMutableArray, NSMutableDictionary, NSString, UIImage, WACameraScanScanner, WAFilterLogic, WCCameraCapture, WCCameraPreview;
@protocol OS_dispatch_queue, WACameraLogicControllerDelegate;

@interface WACameraLogicController : NSObject
{
    WCCameraPreview *_cameraPreview;
    WAFilterLogic *_filterLogic;
    GPUImageCropFilter *_cropFilter;
    unsigned int m_currID;
    NSObject<OS_dispatch_queue> *m_logicQueue;
    NSMutableArray *m_recordIDAry;
    unsigned int m_currWriterID;
    _Bool isShowingPreview;
    _Bool isCameraAppear;
    _Bool bNeedOutputVideoBuffer;
    _Bool _shouldHandleScan;
    _Bool _listenFrameChange;
    _Bool _m_shouldStart;
    _Bool _m_requestAuthAccess;
    _Bool _m_isNeedResumeWXMusic;
    _Bool _needCompressVideo;
    _Bool _selfieMirror;
    _Bool _muted;
    int _cameraState;
    id <WACameraLogicControllerDelegate> _delegate;
    NSString *_externflashType;
    WCCameraCapture *_cameraCapture;
    NSString *_m_videoPath;
    UIImage *_m_thumbImage;
    UIImage *_m_originalImage;
    NSMutableDictionary *_recorderDict;
    WACameraScanScanner *_cameraScanScanner;
    NSString *_sessionPreset;
    double _maxScannerZoomFactor;
    struct CGSize _outputVideoSize;
}

+ (_Bool)isAuthStatusOK;
+ (_Bool)needCheckRequestAuthAccess;
- (void).cxx_destruct;
@property(nonatomic) double maxScannerZoomFactor; // @synthesize maxScannerZoomFactor=_maxScannerZoomFactor;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool selfieMirror; // @synthesize selfieMirror=_selfieMirror;
@property(nonatomic) _Bool needCompressVideo; // @synthesize needCompressVideo=_needCompressVideo;
@property(nonatomic) struct CGSize outputVideoSize; // @synthesize outputVideoSize=_outputVideoSize;
@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) _Bool m_isNeedResumeWXMusic; // @synthesize m_isNeedResumeWXMusic=_m_isNeedResumeWXMusic;
@property(retain, nonatomic) WACameraScanScanner *cameraScanScanner; // @synthesize cameraScanScanner=_cameraScanScanner;
@property(retain, nonatomic) NSMutableDictionary *recorderDict; // @synthesize recorderDict=_recorderDict;
@property(nonatomic) _Bool m_requestAuthAccess; // @synthesize m_requestAuthAccess=_m_requestAuthAccess;
@property _Bool m_shouldStart; // @synthesize m_shouldStart=_m_shouldStart;
@property int cameraState; // @synthesize cameraState=_cameraState;
@property(retain, nonatomic) UIImage *m_originalImage; // @synthesize m_originalImage=_m_originalImage;
@property(retain, nonatomic) UIImage *m_thumbImage; // @synthesize m_thumbImage=_m_thumbImage;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(retain, nonatomic) WCCameraCapture *cameraCapture; // @synthesize cameraCapture=_cameraCapture;
@property(nonatomic) _Bool listenFrameChange; // @synthesize listenFrameChange=_listenFrameChange;
@property(retain, nonatomic) NSString *externflashType; // @synthesize externflashType=_externflashType;
@property(nonatomic) _Bool shouldHandleScan; // @synthesize shouldHandleScan=_shouldHandleScan;
@property(nonatomic) __weak id <WACameraLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bNeedOutputVideoBuffer; // @synthesize bNeedOutputVideoBuffer;
@property(nonatomic) _Bool isCameraAppear; // @synthesize isCameraAppear;
@property(nonatomic) _Bool isShowingPreview; // @synthesize isShowingPreview;
- (void)pauseAllOtherRunningCameraByLogic:(id)arg1;
- (void)onDetectCodesWithMarkDotInfoList:(id)arg1 isCameraScan:(_Bool)arg2;
- (void)onGotScanResult:(id)arg1;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)filterType:(unsigned long long)arg1;
- (long long)getCameraPosition;
- (void)setCameraPositon:(long long)arg1;
- (void)updateSessionPresetBeforeSwitchCamera;
- (void)internalSwitchCameraIfNeedThreadSafe:(long long)arg1;
- (void)switchCameraIfNeedForPosition:(long long)arg1;
- (void)switchCamera;
- (void)didTakeDoneWithSightPath:(id)arg1 thumbImg:(id)arg2 isMuted:(_Bool)arg3;
- (void)didTakeDoneWithPicture:(id)arg1;
- (void)onTakenPicture:(id)arg1;
- (_Bool)takePicture:(id *)arg1 WithParams:(id)arg2;
- (_Bool)stopRecordWithCompressed:(_Bool)arg1;
- (_Bool)startRecordWithParams:(id)arg1;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2;
- (void)showPreviewViewWithImage:(id)arg1;
- (_Bool)finishWriter;
- (_Bool)startWriter;
- (float)sightCaptureMaxDuration;
- (void)onCameraStop:(id)arg1;
- (void)onWriterResign;
- (void)onMovieCompressFinished:(int)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)processVideoAfterCompressFinish:(id)arg1;
- (void)onWriterFailed:(int)arg1;
- (void)onDetectQRCode:(_Bool)arg1 zoomFactor:(float)arg2;
- (double)setZoomFactor:(double)arg1;
- (double)maxZoomFactor;
- (void)zoomFactor:(double)arg1;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)movieWriter:(id)arg1 onRecorderPart:(id)arg2 Offset:(unsigned int)arg3 Len:(unsigned int)arg4 EndFlag:(unsigned int)arg5 ForceDelete:(_Bool)arg6 Duration:(unsigned int)arg7;
- (void)movieWriter:(id)arg1 onRecorderBeginRecording:(id)arg2 ErrNo:(int)arg3;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (_Bool)isRecording:(unsigned int)arg1;
- (void)cancelAllRecorder;
- (void)cancelRecording:(unsigned int)arg1;
- (void)stopRecording:(unsigned int)arg1;
- (unsigned int)startRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2 compressAudio:(_Bool)arg3 audioBitrate:(float)arg4;
- (void)setCameraStateAndRestFlashTorch:(int)arg1;
- (void)updateCameraOrientation:(long long)arg1;
- (void)pauseCamera;
- (void)resumeCamera;
- (void)resetFlashAndTorchDueToCurrentCameraState;
- (void)removeCameraCropFilter;
- (void)setCameraViewRect:(struct CGRect)arg1;
- (void)setScanFreq:(double)arg1;
- (void)setScanCropRect:(struct CGRect)arg1;
- (void)setCameraCropRect:(struct CGRect)arg1;
- (void)updateCameraPreviewRect:(struct CGRect)arg1;
- (void)loadCameraLogicWithContentView:(id)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)dealloc;
- (struct CGSize)setResolution:(id)arg1 frameRate:(int)arg2;
- (id)initWithResolution:(int)arg1 shouldHandleScan:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

