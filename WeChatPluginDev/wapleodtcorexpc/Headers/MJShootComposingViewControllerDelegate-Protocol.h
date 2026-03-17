//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MJShootComposingViewController, MMAssetPickerController, MMImagePreviewControllerActionFlow, MMShortVideoParamModel, NSArray, NSData, NSDictionary, NSError, NSString, PHObjectPlaceholder, SightDraft, UIImage, WCFinderDataItem, WCFinderPostSessionModel;

@protocol MJShootComposingViewControllerDelegate <NSObject>

@optional
- (void)onImagePickerManagerDraftWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onImagePickerManagerClickPostFinderLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(NSString *)arg1;
- (void)onSightCameraViewControllerDidStopCamera;
- (void)onSightCameraViewControllerDidOpenCamera;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightCameraViewControllerCancelEditing;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraClickRecordBtn;
- (void)onShortVideoTakenHasSavedToLibrary:(PHObjectPlaceholder *)arg1 thumbImg:(UIImage *)arg2 editVideoAttr:(EditVideoAttr *)arg3 paramModel:(MMShortVideoParamModel *)arg4;
- (void)onShortVideoTakenFailedToSaveToLibrary:(NSError *)arg1;
- (void)onSightCameraCancel:(MMShortVideoParamModel *)arg1;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didTakenShortVideo:(NSString *)arg2 thumbImg:(UIImage *)arg3 editVideoAttr:(EditVideoAttr *)arg4 paramModel:(MMShortVideoParamModel *)arg5;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didTakenSightPicture:(UIImage *)arg2 imageData:(NSData *)arg3 frontCamera:(_Bool)arg4 editImageAttr:(EditImageAttr *)arg5;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didFinishPickingAssetWithPostSession:(WCFinderPostSessionModel *)arg2;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didFinishPickAssetInfos:(NSArray *)arg2 picker:(MMAssetPickerController *)arg3;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didFinishPickEditingSightWithInfo:(SightDraft *)arg2;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didFinishComposingWithActionFlow:(MMImagePreviewControllerActionFlow *)arg2 userInfo:(NSDictionary *)arg3;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didFinishPickingImageWithActionFlow:(MMImagePreviewControllerActionFlow *)arg2;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didFinishPickingImageWithEditImageAttr:(EditImageAttr *)arg2;
- (void)shootComposingViewController:(MJShootComposingViewController *)arg1 didFinishPickingAssetWithDataItem:(WCFinderDataItem *)arg2;
@end

