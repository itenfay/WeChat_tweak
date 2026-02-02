//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MMShortVideoParamModel, NSData, NSError, NSString, UIImage, UIViewController, WCFinderDataItem, WCFinderPostSessionModel;

@protocol ShortVideoBarDelegate <NSObject>
- (UIViewController *)currentViewController;
- (void)onCameraResign;
- (void)onShortVideoToolBtnClick:(unsigned long long)arg1;

@optional
- (void)onCameraBtnPress;
- (void)onTemplateStartPress;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (NSString *)shortVideoToolBarGetMusicSongId;
- (NSString *)shortVideoToolBarGetTemplateFollowFeedId;
- (unsigned long long)getFinderPostEnterScene;
- (void)onShortVideoShootBtnClicked:(_Bool)arg1;
- (NSString *)chatUserNameForSightStatistics;
- (void)onEndExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)onStartExportingWithAssetId:(NSString *)arg1;
- (void)onCancelEditing;
- (void)onCreateCameraPreviewView;
- (void)onEndEditing;
- (void)onStartEditing;
- (void)onStopRecord;
- (void)onStartRecord;
- (void)onDeactiveAnimStart:(double)arg1;
- (void)onPanelDrag:(double)arg1;
- (void)onDeactiveAnimEnd;
- (void)onSightPictureTaken:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(EditImageAttr *)arg4;
- (void (^)(void (^)(void)))onSightPictureWillTaken;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 editVideoAttr:(EditVideoAttr *)arg3 paramModel:(MMShortVideoParamModel *)arg4;
- (void (^)(void (^)(void)))onShortVideoWillTaken;
- (void)didFinishPickingAssetWithDataItem:(WCFinderDataItem *)arg1;
@end

