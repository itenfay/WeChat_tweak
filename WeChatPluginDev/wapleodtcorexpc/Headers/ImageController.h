//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CaptureVideoInfo, MMLoadingView, NSString, UINavigationController, UIViewController;
@protocol ImageControllerDelegate;

@interface ImageController
{
    id <ImageControllerDelegate> m_delegate;
    CaptureVideoInfo *m_oVideoInfo;
    UINavigationController *m_oVideoPicker;
    MMLoadingView *m_loadingView;
    _Bool m_isJustReturnMMAsset;
    _Bool _m_supportHeif;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_supportHeif; // @synthesize m_supportHeif=_m_supportHeif;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(retain, nonatomic) UIViewController *m_oVideoPicker; // @synthesize m_oVideoPicker;
@property(retain, nonatomic) CaptureVideoInfo *m_oVideoInfo; // @synthesize m_oVideoInfo;
@property(nonatomic) __weak id <ImageControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)dismissImagePicker;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (CDUnknownBlockType)onSightPictureWillTaken;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (CDUnknownBlockType)onShortVideoWillTaken;
- (id)chatUserNameForSightStatistics;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)downloadFailInImageBrowse;
- (void)Reset;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)processPickAssetInfo:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)didSelectAsset:(id)arg1 Finish:(_Bool)arg2 fromImagePicker:(id)arg3;
- (CDUnknownBlockType)willFinishPickingAsset;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(_Bool)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 imageInfo:(id)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 fromImagePicker:(id)arg3;
- (void)didSelectImage:(id)arg1 fromImagePicker:(id)arg2;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(_Bool)arg3 ImageInfo:(id)arg4 fromImagePicker:(id)arg5;
- (long long)maxImageCount;
- (void)didSelectMMAsset:(id)arg1 finish:(_Bool)arg2 fromImagePicker:(id)arg3;
- (void)alertViewClickedWithIsSend:(_Bool)arg1;
- (void)alertDidSendVideo;
- (void)alertCancelSendVideo;
- (void)handleVideo:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)SendImageWithURL:(id)arg1;
- (void)OpenCameraController;
- (void)OpenMediaBrowser;
- (void)showImagePicker:(long long)arg1 useSightCamera:(_Bool)arg2 sightCameraMode:(unsigned long long)arg3;
- (void)showImagePicker:(long long)arg1;
- (id)getViewController;
- (void)initLoadingView;
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

