//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageLogicController, EditVideoLogicController, MMAssetPickerController, MMFinderLiveImagePickerParams, MMImagePickerControllerPreviewReportObject, NSArray, NSMutableDictionary, NSNumber, NSString, WCFinderEditOptionModel, WCFinderPickerTemplateParams;
@protocol MMAssetPickerUserActionTipsProtocol, MMImagePickerControllerDelegate;

@interface MMImagePickerController
{
    _Bool _isOpenSendOriginVideo;
    _Bool _canSendOriginImage;
    _Bool _forceSendOriginImage;
    _Bool _isUserActionCheckShowed;
    _Bool _enforceUserActionCheck;
    _Bool _enforceUserActionUnCheck;
    _Bool _isUserActionSelected;
    _Bool _isHidePreviewPlayButton;
    _Bool _shouldShowFinderMJPublisherTemplateComposingButton;
    _Bool _canSendVideoMessage;
    _Bool _isOnlyShowVideoMessage;
    _Bool _isNotShowVideoSizeAlertView;
    _Bool _isAsyncCompositeEnabled;
    _Bool _canSendMultiImage;
    _Bool _canSendMultiVideo;
    _Bool _needThumbImage;
    _Bool _showPreviewView;
    _Bool _customizesClickAction;
    _Bool _returnMetaForVideo;
    _Bool _canSendGif;
    _Bool _canHybridSendAsset;
    _Bool _disableVideoSelection;
    _Bool _canDragSelect;
    _Bool _isOriginalImage;
    _Bool _isEditMode;
    _Bool _isPresentInSplitVC;
    _Bool _isAllowCache;
    _Bool _isPickerFinished;
    _Bool _doNotAutoHandleImageEditorDismiss;
    _Bool _videoDirectToEdit;
    _Bool _imageDirectToEdit;
    _Bool _buttonEnableAfterSend;
    _Bool _showSkipBtn;
    _Bool _showsCameraButtonInPicker;
    _Bool _showsCameraButtonAtBottom;
    _Bool _isCameraButtonDisabled;
    _Bool _toVideoTemplateEditor;
    _Bool _toVideoTemplateSelectAndEditViewController;
    _Bool _showFinderPicker;
    _Bool _showAssetWithLocationOnly;
    int _maxImageCount;
    int _compressType;
    int _previewEditScene;
    id <MMImagePickerControllerDelegate> m_delegate;
    MMAssetPickerController *_photoPicker;
    long long _userActionCheckScene;
    NSString *_userActionCheckTitle;
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity;
    NSNumber *_bottomInset;
    NSString *_finishWording;
    NSString *_currentAlbum;
    NSArray *_selectedImageURLs;
    NSArray *_selectedImageAssets;
    MMImagePickerControllerPreviewReportObject *m_previewReportObject;
    EditImageLogicController *_editImageLogicController;
    EditVideoLogicController *_editVideoLogicController;
    unsigned long long _maxGifDataSize;
    WCFinderEditOptionModel *_finderOptionModel;
    NSMutableDictionary *_dicExtInfo;
    NSString *_pickerBottomFloatText;
    long long _livePhotoMode;
    NSString *_footerViewButtonTitle;
    NSString *_videoTemplateId;
    NSString *_videoTemplateMusicId;
    NSString *_pickerBottomTips;
    WCFinderPickerTemplateParams *_finderTemplateParams;
    MMFinderLiveImagePickerParams *_finderLiveParams;
    CDUnknownBlockType _assetSelectedBlock;
    unsigned long long _authScene;
    unsigned long long _enterTime;
    struct _NSRange _selectCountLimit;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(nonatomic) _Bool showAssetWithLocationOnly; // @synthesize showAssetWithLocationOnly=_showAssetWithLocationOnly;
@property(copy, nonatomic) CDUnknownBlockType assetSelectedBlock; // @synthesize assetSelectedBlock=_assetSelectedBlock;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N,V_assetSelectedBlock

@property(nonatomic) _Bool showFinderPicker; // @synthesize showFinderPicker=_showFinderPicker;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_showFinderPicker

@property(retain, nonatomic) MMFinderLiveImagePickerParams *finderLiveParams; // @synthesize finderLiveParams=_finderLiveParams;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"MMFinderLiveImagePickerParams",?,&,N,V_finderLiveParams

@property(retain, nonatomic) WCFinderPickerTemplateParams *finderTemplateParams; // @synthesize finderTemplateParams=_finderTemplateParams;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WCFinderPickerTemplateParams",?,&,N,V_finderTemplateParams

@property(nonatomic) _Bool toVideoTemplateSelectAndEditViewController; // @synthesize toVideoTemplateSelectAndEditViewController=_toVideoTemplateSelectAndEditViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_toVideoTemplateSelectAndEditViewController

@property(nonatomic) struct _NSRange selectCountLimit; // @synthesize selectCountLimit=_selectCountLimit;
// Preceding property had unknown attributes: ?
// Original attribute string: T{_NSRange=QQ},?,N,V_selectCountLimit

@property(copy, nonatomic) NSString *pickerBottomTips; // @synthesize pickerBottomTips=_pickerBottomTips;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N,V_pickerBottomTips

@property(copy, nonatomic) NSString *videoTemplateMusicId; // @synthesize videoTemplateMusicId=_videoTemplateMusicId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N,V_videoTemplateMusicId

@property(copy, nonatomic) NSString *videoTemplateId; // @synthesize videoTemplateId=_videoTemplateId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N,V_videoTemplateId

@property(nonatomic) _Bool toVideoTemplateEditor; // @synthesize toVideoTemplateEditor=_toVideoTemplateEditor;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_toVideoTemplateEditor

@property(nonatomic) _Bool isCameraButtonDisabled; // @synthesize isCameraButtonDisabled=_isCameraButtonDisabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_isCameraButtonDisabled

@property(nonatomic) _Bool showsCameraButtonAtBottom; // @synthesize showsCameraButtonAtBottom=_showsCameraButtonAtBottom;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_showsCameraButtonAtBottom

@property(nonatomic) _Bool showsCameraButtonInPicker; // @synthesize showsCameraButtonInPicker=_showsCameraButtonInPicker;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_showsCameraButtonInPicker

@property(retain, nonatomic) NSString *footerViewButtonTitle; // @synthesize footerViewButtonTitle=_footerViewButtonTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N,V_footerViewButtonTitle

@property(nonatomic) long long livePhotoMode; // @synthesize livePhotoMode=_livePhotoMode;
@property(copy, nonatomic) NSString *pickerBottomFloatText; // @synthesize pickerBottomFloatText=_pickerBottomFloatText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N,V_pickerBottomFloatText

@property(retain, nonatomic) NSMutableDictionary *dicExtInfo; // @synthesize dicExtInfo=_dicExtInfo;
@property(nonatomic) _Bool showSkipBtn; // @synthesize showSkipBtn=_showSkipBtn;
@property(retain, nonatomic) WCFinderEditOptionModel *finderOptionModel; // @synthesize finderOptionModel=_finderOptionModel;
@property(nonatomic) _Bool buttonEnableAfterSend; // @synthesize buttonEnableAfterSend=_buttonEnableAfterSend;
@property(nonatomic) _Bool imageDirectToEdit; // @synthesize imageDirectToEdit=_imageDirectToEdit;
@property(nonatomic) _Bool videoDirectToEdit; // @synthesize videoDirectToEdit=_videoDirectToEdit;
@property(nonatomic) unsigned long long maxGifDataSize; // @synthesize maxGifDataSize=_maxGifDataSize;
@property(retain, nonatomic) EditVideoLogicController *editVideoLogicController; // @synthesize editVideoLogicController=_editVideoLogicController;
@property(retain, nonatomic) EditImageLogicController *editImageLogicController; // @synthesize editImageLogicController=_editImageLogicController;
@property(retain, nonatomic) MMImagePickerControllerPreviewReportObject *m_previewReportObject; // @synthesize m_previewReportObject;
@property(nonatomic) _Bool doNotAutoHandleImageEditorDismiss; // @synthesize doNotAutoHandleImageEditorDismiss=_doNotAutoHandleImageEditorDismiss;
@property(nonatomic) _Bool isPickerFinished; // @synthesize isPickerFinished=_isPickerFinished;
@property(nonatomic) _Bool isAllowCache; // @synthesize isAllowCache=_isAllowCache;
@property(nonatomic) _Bool isPresentInSplitVC; // @synthesize isPresentInSplitVC=_isPresentInSplitVC;
@property(nonatomic) int previewEditScene; // @synthesize previewEditScene=_previewEditScene;
@property(nonatomic) _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(nonatomic) _Bool isOriginalImage; // @synthesize isOriginalImage=_isOriginalImage;
@property(retain, nonatomic) NSArray *selectedImageAssets; // @synthesize selectedImageAssets=_selectedImageAssets;
@property(retain, nonatomic) NSArray *selectedImageURLs; // @synthesize selectedImageURLs=_selectedImageURLs;
@property(retain, nonatomic) NSString *currentAlbum; // @synthesize currentAlbum=_currentAlbum;
@property(retain, nonatomic) NSString *finishWording; // @synthesize finishWording=_finishWording;
@property(nonatomic) int compressType; // @synthesize compressType=_compressType;
@property(nonatomic) _Bool canDragSelect; // @synthesize canDragSelect=_canDragSelect;
@property(nonatomic) int maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) _Bool disableVideoSelection; // @synthesize disableVideoSelection=_disableVideoSelection;
@property(nonatomic) _Bool canHybridSendAsset; // @synthesize canHybridSendAsset=_canHybridSendAsset;
@property(nonatomic) _Bool canSendGif; // @synthesize canSendGif=_canSendGif;
@property(nonatomic) _Bool returnMetaForVideo; // @synthesize returnMetaForVideo=_returnMetaForVideo;
@property(nonatomic) _Bool customizesClickAction; // @synthesize customizesClickAction=_customizesClickAction;
@property(nonatomic) _Bool showPreviewView; // @synthesize showPreviewView=_showPreviewView;
@property(nonatomic) _Bool needThumbImage; // @synthesize needThumbImage=_needThumbImage;
@property(retain, nonatomic) NSNumber *bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) _Bool canSendMultiVideo; // @synthesize canSendMultiVideo=_canSendMultiVideo;
@property(nonatomic) _Bool canSendMultiImage; // @synthesize canSendMultiImage=_canSendMultiImage;
@property(nonatomic) _Bool isAsyncCompositeEnabled; // @synthesize isAsyncCompositeEnabled=_isAsyncCompositeEnabled;
@property(nonatomic) _Bool isNotShowVideoSizeAlertView; // @synthesize isNotShowVideoSizeAlertView=_isNotShowVideoSizeAlertView;
@property(nonatomic) _Bool isOnlyShowVideoMessage; // @synthesize isOnlyShowVideoMessage=_isOnlyShowVideoMessage;
@property(nonatomic) _Bool canSendVideoMessage; // @synthesize canSendVideoMessage=_canSendVideoMessage;
@property(nonatomic) _Bool shouldShowFinderMJPublisherTemplateComposingButton; // @synthesize shouldShowFinderMJPublisherTemplateComposingButton=_shouldShowFinderMJPublisherTemplateComposingButton;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_shouldShowFinderMJPublisherTemplateComposingButton

@property(nonatomic) _Bool isHidePreviewPlayButton; // @synthesize isHidePreviewPlayButton=_isHidePreviewPlayButton;
@property(retain, nonatomic) id <MMAssetPickerUserActionTipsProtocol> userActionTipsActivity; // @synthesize userActionTipsActivity=_userActionTipsActivity;
@property(retain, nonatomic) NSString *userActionCheckTitle; // @synthesize userActionCheckTitle=_userActionCheckTitle;
@property(nonatomic) _Bool isUserActionSelected; // @synthesize isUserActionSelected=_isUserActionSelected;
@property(nonatomic) _Bool enforceUserActionUnCheck; // @synthesize enforceUserActionUnCheck=_enforceUserActionUnCheck;
@property(nonatomic) _Bool enforceUserActionCheck; // @synthesize enforceUserActionCheck=_enforceUserActionCheck;
@property(nonatomic) _Bool isUserActionCheckShowed; // @synthesize isUserActionCheckShowed=_isUserActionCheckShowed;
@property(nonatomic) long long userActionCheckScene; // @synthesize userActionCheckScene=_userActionCheckScene;
@property(nonatomic) _Bool forceSendOriginImage; // @synthesize forceSendOriginImage=_forceSendOriginImage;
@property(nonatomic) _Bool canSendOriginImage; // @synthesize canSendOriginImage=_canSendOriginImage;
@property(nonatomic) _Bool isOpenSendOriginVideo; // @synthesize isOpenSendOriginVideo=_isOpenSendOriginVideo;
@property(nonatomic) __weak MMAssetPickerController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(nonatomic) __weak id <MMImagePickerControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onAssetPickerControlCenterClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (int)getPickerScene;
- (void)logImagePickerFinishLoad:(_Bool)arg1;
- (void)logStartImagePicker;
- (void)reportPickerCancelActionInfo;
- (void)reportPickerActionInfo;
- (void)reportPicerReportInfo;
- (id)pickerReportInfo;
- (void)reportPreviewCount;
- (void)increasePreviewCount;
- (void)endExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)startExportingWithAssetId:(id)arg1;
- (void)didOpenCamera;
- (void)assetPickerControllerDidAppear;
- (void)didTakeMedia;
- (void)didCancelSightCamera;
- (void)cancelPreview;
- (void)startPreview;
- (void)cancelEditing;
- (void)startEditing;
- (void)onClickFooterViewButton;
- (id)getCameraWithVideoMode:(_Bool)arg1 viewController:(id)arg2;
- (void)openCameraWithVideoMode:(_Bool)arg1 viewController:(id)arg2;
- (void)selectedFinderPostSession:(id)arg1;
- (void)failToFetchAssets:(id)arg1;
- (void)selectFinderDataItem:(id)arg1;
- (void)selectAsset:(id)arg1;
- (void)selectedEditImageAttr:(id)arg1;
- (void)selectedSight:(id)arg1;
- (void)selectedVideo:(id)arg1;
- (void)didCancelEditVideo;
- (void)didCancelEditImage;
- (void)assetPickerDidPopOrDismiss;
- (void)didClickSkipBtn;
- (void)selectedAssets:(id)arg1;
- (void)selectedClickNextAction;
- (void)assetPickerWillAppear;
- (void)cancelImagePicker;
- (id)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)didFinishPickingWithAssetInfos:(id)arg1 isUsingTemplate:(_Bool)arg2;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
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
- (void)removeImageDatas;
- (id)getReportExtInfoDismissState:(_Bool)arg1 eventCode:(long long)arg2;
- (_Bool)isFinderScene;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;
- (id)initForJustReturnMMAsset:(_Bool)arg1 withAdjustRevertIndex:(unsigned long long)arg2 withDirectToFirstAlbum:(_Bool)arg3 withOnlyShowVideoMessage:(_Bool)arg4 withNotShowVideoSizeAlertView:(_Bool)arg5 withPickerVCForceFullScrenn:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

