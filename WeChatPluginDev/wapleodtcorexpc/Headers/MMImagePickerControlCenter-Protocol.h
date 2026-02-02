//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MMAsset, MMAssetInfo, MMAssetPickerController, MMAssetPickerControllerState, MMAssetPickerInterceptor, MMFinderLiveImagePickerParams, MMImagePickerReportInfo, MMImagePreviewBrowserController, MMImagePreviewControllerActionFlow, NSArray, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSString, SightDraft, UIButton, UINavigationController, UIViewController, WCFinderDataItem, WCFinderEditOptionModel, WCFinderPickerTemplateParams, WCFinderPostSessionModel;
@protocol MMAssetPickerUserActionTipsProtocol, MMSightCameraViewControllerDelegate;

@protocol MMImagePickerControlCenter <NSObject>
@property(retain, nonatomic) NSNumber *bottomInset;
@property(nonatomic) _Bool showAssetWithLocationOnly;
@property(nonatomic) unsigned long long authScene;
@property(nonatomic) _Bool buttonEnableAfterSend;
@property(nonatomic) _Bool imageDirectToEdit;
@property(nonatomic) _Bool videoDirectToEdit;
@property(nonatomic) _Bool isOriginalImage;
@property(nonatomic) int previewEditScene;
@property(nonatomic) _Bool isEditMode;
@property(retain, nonatomic) NSString *currentAlbum;
@property(retain, nonatomic) NSString *finishWording;
@property(retain, nonatomic) NSMutableDictionary *dicExtInfo;
@property(retain, nonatomic) WCFinderEditOptionModel *finderOptionModel;
@property(nonatomic) _Bool doNotAutoHandleImageEditorDismiss;
@property(nonatomic) _Bool isPickerFinished;
@property(nonatomic) _Bool isOpenSendOriginVideo;
@property(nonatomic) _Bool isAllowCache;
@property(nonatomic) _Bool isPresentInSplitVC;
@property(nonatomic) int compressType;
@property(retain, nonatomic) NSArray *selectedImageAssets;
@property(retain, nonatomic) NSArray *selectedImageURLs;
@property(nonatomic) _Bool canDragSelect;
@property(nonatomic) int maxImageCount;
@property(nonatomic) _Bool disableVideoSelection;
@property(nonatomic) _Bool canHybridSendAsset;
@property(nonatomic) unsigned long long maxGifDataSize;
@property(nonatomic) long long livePhotoMode;
@property(nonatomic) _Bool canSendGif;
@property(nonatomic) _Bool returnMetaForVideo;
@property(nonatomic) _Bool customizesClickAction;
@property(nonatomic) _Bool showPreviewView;
@property(nonatomic) _Bool needThumbImage;
@property(nonatomic) _Bool canSendMultiVideo;
@property(nonatomic) _Bool canSendMultiImage;
@property(nonatomic) _Bool isAsyncCompositeEnabled;
@property(nonatomic) _Bool isNotShowVideoSizeAlertView;
@property(nonatomic) _Bool isOnlyShowVideoMessage;
@property(nonatomic) _Bool canSendVideoMessage;
@property(nonatomic) _Bool isHidePreviewPlayButton;
@property(retain, nonatomic) id <MMAssetPickerUserActionTipsProtocol> userActionTipsActivity;
@property(retain, nonatomic) NSString *userActionCheckTitle;
@property(nonatomic) _Bool isUserActionSelected;
@property(nonatomic) _Bool enforceUserActionUnCheck;
@property(nonatomic) _Bool enforceUserActionCheck;
@property(nonatomic) _Bool isUserActionCheckShowed;
@property(nonatomic) long long userActionCheckScene;
@property(nonatomic) _Bool forceSendOriginImage;
@property(nonatomic) _Bool canSendOriginImage;
- (void)selectFinderDataItem:(WCFinderDataItem *)arg1;
- (void)selectedClickNextAction;
- (void)selectedFinderPostSession:(WCFinderPostSessionModel *)arg1;
- (void)selectAsset:(MMAsset *)arg1;
- (void)selectedEditImageAttr:(EditImageAttr *)arg1;
- (void)selectedSight:(SightDraft *)arg1;
- (void)selectedVideo:(NSDictionary *)arg1;
- (void)selectedAssets:(NSArray *)arg1;
- (void)cancelImagePicker;

@optional
@property(nonatomic) _Bool shouldShowFinderMJPublisherTemplateComposingButton;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(copy, nonatomic) CDUnknownBlockType assetSelectedBlock;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(nonatomic) _Bool showFinderPicker;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(copy, nonatomic) NSString *pickerBottomFloatText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(retain, nonatomic) MMFinderLiveImagePickerParams *finderLiveParams;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"MMFinderLiveImagePickerParams",?,&,N

@property(retain, nonatomic) WCFinderPickerTemplateParams *finderTemplateParams;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WCFinderPickerTemplateParams",?,&,N

@property(nonatomic) _Bool toVideoTemplateSelectAndEditViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) struct _NSRange selectCountLimit;
// Preceding property had unknown attributes: ?
// Original attribute string: T{_NSRange=QQ},?,N

@property(copy, nonatomic) NSString *pickerBottomTips;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSString *videoTemplateMusicId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSString *videoTemplateId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(nonatomic) _Bool toVideoTemplateEditor;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool isCameraButtonDisabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool showsCameraButtonAtBottom;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool showsCameraButtonInPicker;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) NSString *footerViewButtonTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(nonatomic) _Bool showSkipBtn;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)endExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)startExportingWithAssetId:(NSString *)arg1;
- (void)didOpenCamera;
- (void)assetPickerControllerDidAppear;
- (void)didTakeMedia;
- (void)didCancelSightCamera;
- (void)cancelPreview;
- (void)startPreview;
- (void)cancelEditing;
- (void)startEditing;
- (void)onClickFooterViewButton;
- (UINavigationController *)getCameraWithVideoMode:(_Bool)arg1 viewController:(UIViewController *)arg2;
- (void)openCameraWithVideoMode:(_Bool)arg1 viewController:(UIViewController<MMSightCameraViewControllerDelegate> *)arg2;
- (UIButton *)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)didFinishPickingWithAssetInfos:(NSArray *)arg1 isUsingTemplate:(_Bool)arg2;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(NSArray *)arg1;
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
- (void)didCancelEditVideo;
- (void)didCancelEditImage;
- (void)assetPickerWillAppear;
- (void)assetPickerDidPopOrDismiss;
- (void)didClickSkipBtn;
- (void)onAssetPickerControlCenterClickPostFinderLongVideoWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)logImagePickerFinishLoad:(_Bool)arg1;
- (void)logStartImagePicker;
- (void)reportPickerCancelActionInfo;
- (void)reportPicerReportInfo;
- (MMImagePickerReportInfo *)pickerReportInfo;
- (int)getPickerScene;
- (void)reportPreviewCount;
- (void)increasePreviewCount;
- (void)failToFetchAssets:(NSArray *)arg1;
@end

