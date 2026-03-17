//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MMAsset, MMAssetInfo, MMAssetPickerController, MMAssetPickerControllerState, MMAssetPickerInterceptor, MMImagePickerController, MMImagePreviewBrowserController, MMImagePreviewControllerActionFlow, NSArray, NSDictionary, NSError, NSString, SightDraft, UIButton, UINavigationController, UIViewController, WCFinderDataItem, WCFinderPostSessionModel;

@protocol MMImagePickerManagerDelegate <NSObject>

@optional
- (void)onImagePickerManagerEndExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)onImagePickerManagerStartExportingWithAssetId:(NSString *)arg1;
- (void)onImagePickerManagerDidAppear;
- (void)onImagePickerManagerDidTakeMedia;
- (void)onImagePickerManagerDidCancelSightCamera;
- (void)onImagePickerManagerCancelPreview;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerCancelEditing;
- (void)onImagePickerManagerStartEditing;
- (MMImagePreviewControllerActionFlow *)onImagePreviewBrowserController:(MMImagePreviewBrowserController *)arg1 didCreateVideoCompositionActionFlow:(MMImagePreviewControllerActionFlow *)arg2;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 didEditVideoAsset:(MMAsset *)arg2 byEditAttr:(EditVideoAttr *)arg3 withCurrentState:(MMAssetPickerControllerState *)arg4;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 willEditVideoAsset:(MMAssetInfo *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 didDeselectAsset:(MMAssetInfo *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 willDeselectAsset:(MMAssetInfo *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 didSelectAsset:(MMAssetInfo *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 willSelectAsset:(MMAssetInfo *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 didLoadPreviewForAsset:(MMAssetInfo *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 willLoadPreviewForAsset:(MMAssetInfo *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 didChangeUserActionCheckTo:(_Bool)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 willChangeUserActionCheckTo:(_Bool)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (MMAssetPickerInterceptor *)assetPickerController:(MMAssetPickerController *)arg1 willFinishPickingAssets:(NSArray *)arg2 withCurrentState:(MMAssetPickerControllerState *)arg3;
- (void)onImagePickerManagerOpenFinderCamera:(UIViewController *)arg1;
- (void)onImagePickerManagerOpenCamera;
- (void)onImagePickerManagerClickFooterViewButton;
- (void)onImagePickerManagerClickPostFinderLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)MMImagePickerManagerDidCancelEditVideo:(UINavigationController *)arg1;
- (void)MMImagePickerManagerDidCancelEditImage:(UINavigationController *)arg1;
- (void)MMVideoPickerManager:(UINavigationController *)arg1 didFinishSelectingFinderDataItem:(WCFinderDataItem *)arg2;
- (void)onCancel;
- (void)onNextStepWithPublishSelectAssetsDataItem:(WCFinderDataItem *)arg1;
- (UIButton *)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)MMImagePickerManager:(MMImagePickerController *)arg1 didFinishPickingWithAssetInfos:(NSArray *)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(NSArray *)arg1;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFinishPickingImageWithEditImageAttr:(EditImageAttr *)arg2;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFinishPickingVideoWithAsset:(MMAsset *)arg2;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFinishPickingSightWithInfo:(SightDraft *)arg2;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFinishPickingVideoWithInfo:(NSDictionary *)arg2;
- (void)MMImagePickerManagerDidPopOrDismiss:(UINavigationController *)arg1;
- (void)MMImagePickerManagerDidSkip:(UINavigationController *)arg1;
- (void)MMImagePickerManagerDidCancel:(UINavigationController *)arg1;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFinishPickingAssetWithPostSession:(WCFinderPostSessionModel *)arg2;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFailToPickAssets:(NSArray *)arg2;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFinishPickingImageWithInfo:(NSArray *)arg2;
@end

