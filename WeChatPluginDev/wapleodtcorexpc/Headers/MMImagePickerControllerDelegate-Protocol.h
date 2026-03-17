//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MMAsset, MMAssetInfo, MMAssetPickerController, MMAssetPickerControllerState, MMAssetPickerInterceptor, MMImagePickerController, MMImagePreviewBrowserController, MMImagePreviewControllerActionFlow, NSArray, NSDictionary, NSError, NSString, SightDraft, UIButton, UINavigationController, UIViewController, WCFinderDataItem, WCFinderPostSessionModel;

@protocol MMImagePickerControllerDelegate <NSObject>

@optional
- (void)onImagePickerControllerEndExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)onImagePickerControllerStartExportingWithAssetId:(NSString *)arg1;
- (void)onImagePickerControllerDidDisappear;
- (void)onImagePickerControllerDidAppear;
- (void)onImagePickerControllerDidTakeMedia;
- (void)onImagePickerControllerDidCancelSightCamera;
- (void)onImagePickerControllerCancelPreview;
- (void)onImagePickerControllerStartPreview;
- (void)onImagePickerControllerCancelEditing;
- (void)onImagePickerControllerStartEditing;
- (void)onImagePickerControllerOpenFinderCamera:(UIViewController *)arg1;
- (void)onImagePickerControllerOpenCamera;
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
- (void)onImagePickerControllerClickFooterViewButton;
- (void)MMImagePickerControllerDidCancelEditVideo:(UINavigationController *)arg1;
- (void)MMImagePickerControllerDidCancelEditImage:(UINavigationController *)arg1;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishSelectingFinderDataItem:(WCFinderDataItem *)arg2;
- (UIButton *)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)MMImagePickerController:(MMImagePickerController *)arg1 didFinishPickingWithAssetInfos:(NSArray *)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(NSArray *)arg1;
- (void)onImagePickerControllerClickPostFinderLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)MMImagePickerController:(MMImagePickerController *)arg1 didFinishPickingImageWithEditImageAttr:(EditImageAttr *)arg2;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingVideoWithAsset:(MMAsset *)arg2;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingSightWithInfo:(SightDraft *)arg2;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
- (void)MMImagePickerControllerDidSkip:(MMImagePickerController *)arg1;
- (void)MMImagePickerControllerDidPopOrDismiss:(MMImagePickerController *)arg1;
- (void)MMImagePickerControllerDidCancel:(MMImagePickerController *)arg1;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFinishPickingAssetWithPostSession:(WCFinderPostSessionModel *)arg2;
- (void)MMImagePickerController:(MMImagePickerController *)arg1 didFailToPickAssets:(NSArray *)arg2;
- (void)MMImagePickerController:(MMImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSArray *)arg2;
@end

