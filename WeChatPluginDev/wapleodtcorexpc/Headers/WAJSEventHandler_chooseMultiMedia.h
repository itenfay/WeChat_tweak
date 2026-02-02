//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMNearbyPoiInfo, NSMutableArray, NSObject, NSString, UINavigationController;
@protocol OS_dispatch_queue;

@interface WAJSEventHandler_chooseMultiMedia
{
    UINavigationController *m_oVideoPicker;
    NSMutableArray *m_localIds;
    _Bool _savedAssets;
    _Bool _savedImage;
    _Bool _shouldDismissVC;
    _Bool _isFromPicker;
    _Bool _isPickerCustom;
    unsigned int _maxDuration;
    unsigned int _processedAssetCount;
    long long _count;
    NSMutableArray *_mediaObjectArray;
    NSMutableArray *_resultObjectArray;
    NSObject<OS_dispatch_queue> *_queueCopyVideoFile;
    NSMutableArray *_imagesIndex;
    MMNearbyPoiInfo *_poiInfo;
    unsigned long long _sightCameraMode;
    long long _pickAlbumType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPickerCustom; // @synthesize isPickerCustom=_isPickerCustom;
@property(nonatomic) long long pickAlbumType; // @synthesize pickAlbumType=_pickAlbumType;
@property(nonatomic) unsigned long long sightCameraMode; // @synthesize sightCameraMode=_sightCameraMode;
@property(retain, nonatomic) MMNearbyPoiInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) NSMutableArray *imagesIndex; // @synthesize imagesIndex=_imagesIndex;
@property(nonatomic) unsigned int processedAssetCount; // @synthesize processedAssetCount=_processedAssetCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueCopyVideoFile; // @synthesize queueCopyVideoFile=_queueCopyVideoFile;
@property(retain, nonatomic) NSMutableArray *resultObjectArray; // @synthesize resultObjectArray=_resultObjectArray;
@property(retain, nonatomic) NSMutableArray *mediaObjectArray; // @synthesize mediaObjectArray=_mediaObjectArray;
@property(nonatomic) _Bool isFromPicker; // @synthesize isFromPicker=_isFromPicker;
@property(nonatomic) _Bool shouldDismissVC; // @synthesize shouldDismissVC=_shouldDismissVC;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) unsigned int maxDuration; // @synthesize maxDuration=_maxDuration;
- (unsigned int)generateScoreWithDistance:(int)arg1;
- (id)generateMediaMarkInfoWithTime:(unsigned int)arg1 andDistance:(int)arg2;
- (id)generateMediaMarkInfoWithTime:(unsigned int)arg1 andScore:(unsigned int)arg2;
- (void)dismissViewControllerInMainThreadAnimated:(_Bool)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1;
- (void)dismissPicker;
- (id)getImageOrientationString:(long long)arg1;
- (void)didTakeVideoWithIndex:(int)arg1;
- (void)asyncHandleCancel;
- (int)getVideoDuration:(id)arg1;
- (void)handleImageByLoacalIds:(id)arg1;
- (void)handleImageByImage:(id)arg1;
- (void)processVideo:(id)arg1 withIndex:(int)arg2;
- (void)processVideo:(id)arg1;
- (void)processVideoFromPicker:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)showAlbumPicker;
- (void)showSystemCamera;
- (void)showSightCamera;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleJSEvent:(id)arg1;
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

