//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImagePickerManagerOptionObj, NSMutableArray, NSString, UINavigationController;

@interface WAJSEventHandler_chooseMedia
{
    _Bool _isSwitch;
    _Bool _userDidSelect;
    unsigned int _mediaType;
    unsigned int _maxDuration;
    unsigned int _processedAssetCount;
    long long _sourceType;
    long long _sizeType;
    long long _count;
    long long _cameraDirection;
    UINavigationController *_videoPicker;
    MMImagePickerManagerOptionObj *_optionObj;
    NSMutableArray *_keyObjectArray;
    NSMutableArray *_resultObjectArray;
    unsigned long long _failedCount;
    unsigned long long _totalProcessCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalProcessCount; // @synthesize totalProcessCount=_totalProcessCount;
@property(nonatomic) unsigned long long failedCount; // @synthesize failedCount=_failedCount;
@property(nonatomic) unsigned int processedAssetCount; // @synthesize processedAssetCount=_processedAssetCount;
@property(retain, nonatomic) NSMutableArray *resultObjectArray; // @synthesize resultObjectArray=_resultObjectArray;
@property(retain, nonatomic) NSMutableArray *keyObjectArray; // @synthesize keyObjectArray=_keyObjectArray;
@property(nonatomic) _Bool userDidSelect; // @synthesize userDidSelect=_userDidSelect;
@property(nonatomic) _Bool isSwitch; // @synthesize isSwitch=_isSwitch;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(retain, nonatomic) UINavigationController *videoPicker; // @synthesize videoPicker=_videoPicker;
@property(nonatomic) long long cameraDirection; // @synthesize cameraDirection=_cameraDirection;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long sizeType; // @synthesize sizeType=_sizeType;
@property(nonatomic) unsigned int maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
- (void)setVideoPreviewHidden:(_Bool)arg1 inPicker:(id)arg2;
- (void)dismissPicker;
- (void)asyncHandleCancel;
- (int)getVideoDuration:(id)arg1;
- (void)removeObjectFromResultAtIndex:(unsigned long long)arg1;
- (void)didFinishProcessAssets;
- (void)processImageByArrLocalInfo:(id)arg1;
- (void)processImage:(id)arg1;
- (void)processVideoByArrLocalInfo:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)processVideoAndDismissPicker:(id)arg1;
- (void)processVideo:(id)arg1 complerHandler:(CDUnknownBlockType)arg2;
- (void)processVideo:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFailToPickAssets:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)switchCamera;
- (void)addSightCameraReadyObserver;
- (void)showAlbumPicker;
- (void)showSightCamera;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)initialization;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

