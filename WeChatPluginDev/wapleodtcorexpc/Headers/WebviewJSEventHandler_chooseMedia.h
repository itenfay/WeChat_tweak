//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CaptureVideoInfo, NSMutableArray, NSString, UIImage, UINavigationController;

@interface WebviewJSEventHandler_chooseMedia
{
    UINavigationController *m_oVideoPicker;
    CaptureVideoInfo *m_oVideoInfo;
    UIImage *m_oThumbImg;
    NSString *m_nsThumbLocalId;
    NSMutableArray *m_localIds;
    long long m_totalCount;
    _Bool m_userDidSelectOrCancel;
    _Bool _isFromPicker;
    _Bool _isSwitch;
    unsigned int _mediaType;
    unsigned int _maxDuration;
    long long _sourceType;
    long long _sizeType;
    long long _count;
    long long _cameraDirection;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSwitch; // @synthesize isSwitch=_isSwitch;
@property(nonatomic) _Bool isFromPicker; // @synthesize isFromPicker=_isFromPicker;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) long long cameraDirection; // @synthesize cameraDirection=_cameraDirection;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long sizeType; // @synthesize sizeType=_sizeType;
@property(nonatomic) unsigned int maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
- (void)setVideoPreviewHidden:(_Bool)arg1 inPicker:(id)arg2;
- (void)dismissPicker;
- (void)didTakeVideo;
- (void)asyncHandleCancel;
- (int)getVideoDuration:(id)arg1;
- (void)handleImageByLoacalIds:(id)arg1;
- (void)handleImageByImage:(id)arg1;
- (void)processVideo:(id)arg1;
- (void)processVideoFromPicker:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)switchCamera;
- (void)addSightCameraReadyObserver;
- (void)showVideoPicker;
- (void)showSightCamera;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
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

