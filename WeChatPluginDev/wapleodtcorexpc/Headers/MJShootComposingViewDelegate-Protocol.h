//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MJShootComposingView, MMImagePreviewControllerActionFlow, MMShortVideoParamModel, NSData, NSDictionary, NSError, NSString, UIImage, WCFinderDataItem, WCFinderPostSessionModel;

@protocol MJShootComposingViewDelegate <NSObject>

@optional
- (void)didClickAlbumPickerEntryForShootInView:(MJShootComposingView *)arg1;
- (void)didClickAlbumPickerEntryForMovieInView:(MJShootComposingView *)arg1;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onShortVideoShootBtnClicked:(_Bool)arg1;
- (void)onEndExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)onStartExportingWithAssetId:(NSString *)arg1;
- (void)onCancelEditing;
- (void)onEndEditing;
- (void)onStartEditing;
- (void)onStopRecord;
- (void)onStartRecord;
- (void)shootComposingView:(MJShootComposingView *)arg1 didFinishComposingWithActionFlow:(MMImagePreviewControllerActionFlow *)arg2 userInfo:(NSDictionary *)arg3;
- (void)shootComposingView:(MJShootComposingView *)arg1 didTakenShortVideo:(NSString *)arg2 thumbImg:(UIImage *)arg3 editVideoAttr:(EditVideoAttr *)arg4 paramModel:(MMShortVideoParamModel *)arg5;
- (void)shootComposingView:(MJShootComposingView *)arg1 didTakenSightPicture:(UIImage *)arg2 imageData:(NSData *)arg3 frontCamera:(_Bool)arg4 editImageAttr:(EditImageAttr *)arg5;
- (void)didFinishPickingAssetWithDataItem:(WCFinderDataItem *)arg1;
- (void)onCameraResign;
- (void)handleCloseActionInShootComposingView:(MJShootComposingView *)arg1;
@end

