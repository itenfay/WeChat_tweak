//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScannerViewWrapper, NSString, UIImage, UploadDetectLogic;
@protocol OCRTransScannerDelegate;

@interface OCRTransScanner
{
    struct CGRect _cropRect;
    int _imageType;
    unsigned int _sessionId;
    id <OCRTransScannerDelegate> _delegate;
    unsigned long long _frameCount;
    long long _orientation;
    struct CGRect _cameraPhotoCropRect;
    UploadDetectLogic *_uploadDetectLogic;
    _Bool _enableUpload;
    char *_sendImage;
    unsigned int _scene;
    UIImage *_sourceImage;
    CameraScannerViewWrapper *_cameraScannerWrapper;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CameraScannerViewWrapper *cameraScannerWrapper; // @synthesize cameraScannerWrapper=_cameraScannerWrapper;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <OCRTransScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (unsigned int)notifySendData:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (unsigned int)sendImage:(id)arg1 scene:(unsigned int)arg2;
- (void)fireWithScene:(unsigned int)arg1;
- (id)getGrayImage:(id)arg1;
- (void)enableUpload:(_Bool)arg1;
- (void)stop;
- (void)start;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
- (void)dealloc;
- (id)initWithCameraScannerViewWrapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

