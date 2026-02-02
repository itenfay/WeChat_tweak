//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, SightDraft, UINavigationController, WCSelectorView;
@protocol SelectorControllerDelegate;

@interface ImageSelectorController
{
    NSMutableArray *_arrImages;
    WCSelectorView *_selectorView;
    UINavigationController *_navigationController;
    id <SelectorControllerDelegate> _delegate;
    _Bool _bChoosed;
    struct CGSize _imgSize;
    _Bool _shouldOptimizeThumb;
    _Bool _isSupportVideo;
    _Bool _canPostLivePhotos;
    _Bool _isFromWCList;
    _Bool _forbidShowMJTemplate;
    int _pickerScene;
    unsigned long long _imageMaxCount;
    SightDraft *_sightDraft;
    unsigned long long _type;
    NSString *_sessionID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbidShowMJTemplate; // @synthesize forbidShowMJTemplate=_forbidShowMJTemplate;
@property(nonatomic) int pickerScene; // @synthesize pickerScene=_pickerScene;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool isFromWCList; // @synthesize isFromWCList=_isFromWCList;
@property(nonatomic) _Bool canPostLivePhotos; // @synthesize canPostLivePhotos=_canPostLivePhotos;
@property(nonatomic) _Bool isSupportVideo; // @synthesize isSupportVideo=_isSupportVideo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool shouldOptimizeThumb; // @synthesize shouldOptimizeThumb=_shouldOptimizeThumb;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(nonatomic) unsigned long long imageMaxCount; // @synthesize imageMaxCount=_imageMaxCount;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
@property(nonatomic) _Bool bChoosed; // @synthesize bChoosed=_bChoosed;
@property(nonatomic) __weak id <SelectorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WCSelectorView *selectorView; // @synthesize selectorView=_selectorView;
@property(retain, nonatomic) NSMutableArray *arrImages; // @synthesize arrImages=_arrImages;
- (_Bool)shouldShowDeleteView;
- (id)getViewController;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(id)arg1;
- (void)onSightCameraViewControllerDidOpenCamera;
- (void)onSightCameraViewControllerCancelEditing;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)onImagePickerManagerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onImagePickerManagerStartExportingWithAssetId:(id)arg1;
- (void)onImagePickerManagerDidAppear;
- (void)onImagePickerManagerDidTakeMedia;
- (void)onImagePickerManagerDidCancelSightCamera;
- (void)onImagePickerManagerCancelPreview;
- (void)onImagePickerManagerStartPreview;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)onImagePickerManagerCancelEditing;
- (void)onImagePickerManagerStartEditing;
- (void)onImagePickerManagerOpenCamera;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)_onPickNewSightDraft:(id)arg1 withError:(id)arg2 logNote:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)willDeleteAllItems;
- (void)willDeleteItemAtIndex:(unsigned long long)arg1;
- (void)onDeleteAllItem;
- (void)onDeleteItemAtIndex:(unsigned long long)arg1;
- (void)onAddViews:(id)arg1;
- (void)showActionSheet:(id)arg1;
- (void)reportWcSelectImageEvent:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)assetPickerController:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3 withCurrentState:(id)arg4;
- (id)assetPickerController:(id)arg1 willEditVideoAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)_onAssetPickerDidChangeAssetSelection:(id)arg1 withCurrentState:(id)arg2;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didChangeUserActionCheckTo:(_Bool)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willChangeUserActionCheckTo:(_Bool)arg2 withCurrentState:(id)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(_Bool)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(_Bool)arg3;
- (void)_startVideoProducerVCWithVM:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_prepareVideoProducerVMWithAssetList:(id)arg1 currentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareVideoProducerWithAssetList:(id)arg1 withCurrentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_asyncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_syncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_prepareCompositeTask:(id)arg1 withAsyncEnabled:(_Bool)arg2 fromAssetPicker:(id)arg3;
- (_Bool)_prepareAssetsForPost:(id)arg1 withAssetPickerState:(id)arg2 fromAssetPicker:(id)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)showImagePickerForReselectingImageAtIndex:(unsigned long long)arg1;
- (_Bool)canShowMJTemplate;
- (void)showImagePicker:(long long)arg1 showsCameraButtonInPicker:(_Bool)arg2 showsCameraButtonAtBottom:(_Bool)arg3;
- (void)showImagePicker:(long long)arg1;
- (id)postReportSession;
- (void)_onDeleteAllView;
- (void)onDeleteViewAtIndex:(unsigned long long)arg1;
- (void)dragToDeleteViewAtIndex:(long long)arg1;
- (void)moveItemAtIndexPath:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)didSelectViewAtIndex:(unsigned long long)arg1;
- (struct CGSize)sizeForViews;
- (unsigned long long)type:(unsigned long long)arg1;
- (id)viewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numbersOfViews;
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

