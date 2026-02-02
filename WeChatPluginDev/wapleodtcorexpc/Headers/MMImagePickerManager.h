//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImagePickerManagerOptionObj, NSMutableArray, NSString;
@protocol MMImagePickerManagerDelegate;

@interface MMImagePickerManager
{
    _Bool _statusBarHidden;
    id <MMImagePickerManagerDelegate> m_delegate;
    MMImagePickerManagerOptionObj *_optionObj;
    NSMutableArray *_tempImagePool;
}

+ (_Bool)isCaptureByImagePicker:(id)arg1;
+ (id)getImagePickerControllerWithOptionObj:(id)arg1;
+ (id)getImagePickerFromCameraWithOptionObj:(id)arg1 withManager:(id)arg2;
+ (id)getImagePickerFromPhotoLibraryWithOptionObj:(id)arg1 withManager:(id)arg2;
+ (void)showWithOptionObj:(id)arg1 inViewController:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) NSMutableArray *tempImagePool; // @synthesize tempImagePool=_tempImagePool;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(nonatomic) __weak id <MMImagePickerManagerDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnShowDidFinished;
- (void)OnShowWillFinished;
- (void)addMonoServiceWithObj:(id)arg1 inView:(id)arg2;
- (id)init;
- (id)getImagePickerControllerWithOptionObj:(id)arg1 delegate:(id)arg2;
- (void)showWithOptionObj:(id)arg1 inViewController:(id)arg2 delegate:(id)arg3;
- (id)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)MMImagePickerController:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)onImagePickerControllerClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)onCancel;
- (void)onNextStepWithPublishSelectAssetsDataItem:(id)arg1;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 Finish:(_Bool)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 imageInfo:(id)arg3 fromImagePicker:(id)arg4;
- (void)didSelectImage:(id)arg1 Data:(id)arg2 fromImagePicker:(id)arg3;
- (void)didSelectImage:(id)arg1 fromImagePicker:(id)arg2;
- (void)onImagePickerControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onImagePickerControllerStartExportingWithAssetId:(id)arg1;
- (void)onImagePickerControllerDidDisappear;
- (void)onImagePickerControllerDidAppear;
- (void)onImagePickerControllerDidTakeMedia;
- (void)onImagePickerControllerDidCancelSightCamera;
- (void)onImagePickerControllerCancelPreview;
- (void)onImagePickerControllerStartPreview;
- (void)onImagePickerControllerCancelEditing;
- (void)onImagePickerControllerStartEditing;
- (void)onImagePickerControllerOpenFinderCamera:(id)arg1;
- (void)onImagePickerControllerOpenCamera;
- (void)onImagePickerControllerClickFooterViewButton;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (id)assetPickerController:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3 withCurrentState:(id)arg4;
- (id)assetPickerController:(id)arg1 willEditVideoAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didChangeUserActionCheckTo:(_Bool)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willChangeUserActionCheckTo:(_Bool)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)MMImagePickerControllerDidCancelEditVideo:(id)arg1;
- (void)MMImagePickerControllerDidCancelEditImage:(id)arg1;
- (void)MMVideoPickerController:(id)arg1 didFinishSelectingFinderDataItem:(id)arg2;
- (void)MMVideoPickerController:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)MMVideoPickerController:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMVideoPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)MMImagePickerControllerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerControllerDidSkip:(id)arg1;
- (void)MMImagePickerControllerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)MMImagePickerController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerController:(id)arg1 didFailToPickAssets:(id)arg2;
- (void)MMImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)statusBarShowOniOS10;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)doActionsAfterTakenFromImagePicker:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

