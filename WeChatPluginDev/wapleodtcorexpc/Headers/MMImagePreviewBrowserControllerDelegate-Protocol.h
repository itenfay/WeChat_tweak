//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MMAsset, MMAssetInfo, MMAssetPickerInterceptor, MMImagePreviewBrowserController, MMImagePreviewControllerActionFlow, NSArray, NSError, NSString, SightDraft, UIButton, UIView, WCFinderPostSessionModel;
@protocol MMAssetPickerBrowserViewProtocol;

@protocol MMImagePreviewBrowserControllerDelegate <NSObject>
- (void)onUpdateLivePhotoIconDisplayStatus:(MMAssetInfo *)arg1;
- (void)cancelSelectFromImagePreview;
- (struct CGRect)assetViewFrameGlobal:(MMAssetInfo *)arg1;
- (void)sendImageWithEditImageAttr:(EditImageAttr *)arg1;
- (void)sendVideoWithDraft:(SightDraft *)arg1;
- (void)sendImageFromScene:(long long)arg1;
- (void)previewBrowserDidFinished:(MMImagePreviewBrowserController *)arg1;
- (_Bool)hasSelectBothImageAndVideoAsset;
- (_Bool)hasSelectVideoAsset;
- (_Bool)hasSelectImageAsset;
- (unsigned long long)selectedVideoAssetCount;
- (unsigned long long)selectedAssetInfosCount;
- (long long)indexInSelectedAssetInfosForAssetInfo:(MMAssetInfo *)arg1;
- (void)onMoveSelectedInfo:(MMAssetInfo *)arg1 toIndex:(unsigned long long)arg2;
- (void)onInsertSelectedInfo:(MMAssetInfo *)arg1 atIndex:(unsigned long long)arg2;
- (void)onRemoveSelectedInfo:(MMAssetInfo *)arg1;
- (_Bool)isSendButtonEnable;
- (void)onOriginImageCheckChanged;
- (void)onFinishEditAssetInfo:(MMAssetInfo *)arg1;

@optional
- (UIButton *)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)previewBrowser:(MMImagePreviewBrowserController *)arg1 didFinishPickingWithAssetInfos:(NSArray *)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(NSArray *)arg1;
- (void)imagePreviewBrowserController:(MMImagePreviewBrowserController *)arg1 onAssetCollectionViewSelected:(MMAssetInfo *)arg2;
- (_Bool)imagePreviewBrowserController:(MMImagePreviewBrowserController *)arg1 shouldContinueSelectButtonWithAssetInfo:(MMAssetInfo *)arg2 isCurrentSelected:(_Bool)arg3;
- (void)onPostFinderViewControllerCancel;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (MMImagePreviewControllerActionFlow *)onImagePreviewBrowserController:(MMImagePreviewBrowserController *)arg1 didCreateVideoCompositionActionFlow:(MMImagePreviewControllerActionFlow *)arg2;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 didEditVideoAsset:(MMAsset *)arg2 byEditAttr:(EditVideoAttr *)arg3;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 willEditVideoAsset:(MMAssetInfo *)arg2;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 didDeselectBrowserView:(UIView<MMAssetPickerBrowserViewProtocol> *)arg2;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 willDeselectBrowserView:(UIView<MMAssetPickerBrowserViewProtocol> *)arg2;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 didSelectBrowserView:(UIView<MMAssetPickerBrowserViewProtocol> *)arg2;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 willSelectBrowserView:(UIView<MMAssetPickerBrowserViewProtocol> *)arg2;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 didLoadBrowserView:(UIView<MMAssetPickerBrowserViewProtocol> *)arg2;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 willLoadBrowserView:(UIView<MMAssetPickerBrowserViewProtocol> *)arg2;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 withBrowserView:(UIView<MMAssetPickerBrowserViewProtocol> *)arg2 didChangeUserActionCheckTo:(_Bool)arg3 enabled:(_Bool)arg4;
- (MMAssetPickerInterceptor *)previewBrowser:(MMImagePreviewBrowserController *)arg1 withBrowserView:(UIView<MMAssetPickerBrowserViewProtocol> *)arg2 willChangeUserActionCheckTo:(_Bool)arg3 enabled:(_Bool)arg4;
- (_Bool)canAsyncCompositeVideo;
- (void)onImagePreviewBrowserControllerEndExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)onImagePreviewBrowserControllerStartExportingWithAssetId:(NSString *)arg1;
- (void)onImagePreviewBrowserControllerResumePreview;
- (void)onImagePreviewBrowserControllerCancelPreview;
- (void)onImagePreviewBrowserControllerCancelEditing;
- (void)onImagePreviewBrowserControllerStartEditing;
- (_Bool)canSelectAssetInPreview:(MMAssetInfo *)arg1;
- (void)waitingToPreviewIndex:(long long)arg1 assetId:(NSString *)arg2;
- (void)waitingToSelectIndex:(long long)arg1 assetId:(NSString *)arg2;
- (void)sendVideoWithAsset:(MMAsset *)arg1;
- (void)clickAssetInfo:(MMAssetInfo *)arg1;
@end

