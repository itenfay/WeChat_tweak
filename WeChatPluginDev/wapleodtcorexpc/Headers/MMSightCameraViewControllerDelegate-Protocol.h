//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MMShortVideoParamModel, NSData, NSError, NSString, PHObjectPlaceholder, UIImage, WCFinderDataItem, WCFinderPostSessionModel;

@protocol MMSightCameraViewControllerDelegate <NSObject>

@optional
- (NSString *)chatUserNameForSightStatistics;
- (void)onImagePickerManagerDraftWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onImagePickerManagerClickPostFinderLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onShortVideoTakenFailedToSaveToLibrary:(NSError *)arg1;
- (void)onShortVideoTakenHasSavedToLibrary:(PHObjectPlaceholder *)arg1 thumbImg:(UIImage *)arg2 editVideoAttr:(EditVideoAttr *)arg3 paramModel:(MMShortVideoParamModel *)arg4;
- (void)onSightCameraClickRecordBtn;
- (void)onSightCameraClose:(MMShortVideoParamModel *)arg1;
- (void)onSightCameraCancel:(MMShortVideoParamModel *)arg1;
- (void)onSightPictureTaken:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(EditImageAttr *)arg4;
- (void (^)(void (^)(void)))onSightPictureWillTaken;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 editVideoAttr:(EditVideoAttr *)arg3 paramModel:(MMShortVideoParamModel *)arg4;
- (void (^)(void (^)(void)))onShortVideoWillTaken;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(NSString *)arg1;
- (void)onSightCameraViewControllerDidStopCamera;
- (void)onSightCameraViewControllerDidOpenCamera;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightCameraViewControllerEndEditing;
- (void)onSightCameraViewControllerCancelEditing;
- (void)onSightCameraViewControllerStartEditing;
- (void)didFinishPickingAssetWithDataItem:(WCFinderDataItem *)arg1;
@end

