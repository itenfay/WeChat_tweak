//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveImagePickerParams, NSArray, NSMutableDictionary, NSNumber, NSString, WCFinderEditOptionModel, WCFinderPickerTemplateParams;
@protocol MMAssetPickerUserActionTipsProtocol;

@interface MMMusicPostVideoImagePickerControlCenter : NSObject
{
    _Bool _isOpenSendOriginVideo;
    _Bool _canSendOriginImage;
    _Bool _forceSendOriginImage;
    _Bool _isUserActionCheckShowed;
    _Bool _enforceUserActionCheck;
    _Bool _enforceUserActionUnCheck;
    _Bool _isUserActionSelected;
    _Bool _isHidePreviewPlayButton;
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
    _Bool _buttonEnableAfterSend;
    _Bool _videoDirectToEdit;
    _Bool _imageDirectToEdit;
    _Bool _isAllowCache;
    _Bool _isPickerFinished;
    _Bool _doNotAutoHandleImageEditorDismiss;
    _Bool _showAssetWithLocationOnly;
    int _maxImageCount;
    int _compressType;
    int _previewEditScene;
    long long _userActionCheckScene;
    NSString *_userActionCheckTitle;
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity;
    NSNumber *_bottomInset;
    NSString *_finishWording;
    NSString *_currentAlbum;
    NSArray *_selectedImageURLs;
    NSArray *_selectedImageAssets;
    WCFinderEditOptionModel *_finderOptionModel;
    unsigned long long _maxGifDataSize;
    unsigned long long _authScene;
    NSMutableDictionary *_dicExtInfo;
    CDUnknownBlockType _assetSelectedBlock;
    long long _livePhotoMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showAssetWithLocationOnly; // @synthesize showAssetWithLocationOnly=_showAssetWithLocationOnly;
@property(nonatomic) long long livePhotoMode; // @synthesize livePhotoMode=_livePhotoMode;
@property(copy, nonatomic) CDUnknownBlockType assetSelectedBlock; // @synthesize assetSelectedBlock=_assetSelectedBlock;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N,V_assetSelectedBlock

@property(retain, nonatomic) NSMutableDictionary *dicExtInfo; // @synthesize dicExtInfo=_dicExtInfo;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(nonatomic) _Bool doNotAutoHandleImageEditorDismiss; // @synthesize doNotAutoHandleImageEditorDismiss=_doNotAutoHandleImageEditorDismiss;
@property(nonatomic) _Bool isPickerFinished; // @synthesize isPickerFinished=_isPickerFinished;
@property(nonatomic) _Bool isAllowCache; // @synthesize isAllowCache=_isAllowCache;
@property(nonatomic) unsigned long long maxGifDataSize; // @synthesize maxGifDataSize=_maxGifDataSize;
@property(nonatomic) _Bool imageDirectToEdit; // @synthesize imageDirectToEdit=_imageDirectToEdit;
@property(nonatomic) _Bool videoDirectToEdit; // @synthesize videoDirectToEdit=_videoDirectToEdit;
@property(retain, nonatomic) WCFinderEditOptionModel *finderOptionModel; // @synthesize finderOptionModel=_finderOptionModel;
@property(nonatomic) _Bool buttonEnableAfterSend; // @synthesize buttonEnableAfterSend=_buttonEnableAfterSend;
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
- (void)selectFinderDataItem:(id)arg1;
- (void)selectedVideo:(id)arg1;
- (void)selectedSight:(id)arg1;
- (void)selectedEditImageAttr:(id)arg1;
- (void)selectedFinderPostSession:(id)arg1;
- (void)selectedAssets:(id)arg1;
- (void)selectAsset:(id)arg1;
- (void)cancelImagePicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) MMFinderLiveImagePickerParams *finderLiveParams;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"MMFinderLiveImagePickerParams",?,&,N

@property(retain, nonatomic) WCFinderPickerTemplateParams *finderTemplateParams;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WCFinderPickerTemplateParams",?,&,N

@property(retain, nonatomic) NSString *footerViewButtonTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCameraButtonDisabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(copy, nonatomic) NSString *pickerBottomFloatText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSString *pickerBottomTips;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(nonatomic) struct _NSRange selectCountLimit;
// Preceding property had unknown attributes: ?
// Original attribute string: T{_NSRange=QQ},?,N

@property(nonatomic) _Bool shouldShowFinderMJPublisherTemplateComposingButton;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool showFinderPicker;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool showSkipBtn;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool showsCameraButtonAtBottom;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool showsCameraButtonInPicker;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) Class superclass;
@property(nonatomic) _Bool toVideoTemplateEditor;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool toVideoTemplateSelectAndEditViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(copy, nonatomic) NSString *videoTemplateId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSString *videoTemplateMusicId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N


@end

