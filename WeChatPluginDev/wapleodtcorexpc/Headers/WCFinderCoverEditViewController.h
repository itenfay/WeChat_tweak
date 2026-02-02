//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageTextToolV2, MMUIButton, MMUIView, NSString, NSURL, UIButton, UIImageView, UILabel, WCEditImageSafeAreaScrollView, WCFinderContact, WCFinderCoverBackGroundView, WCFinderCoverEditOptionModel, WCFinderCoverPhotoPreviewView, WCFinderCoverSelectAlbumView, WCFinderCoverVideoPreviewView, WCFinderCropRectModel, WCFinderEditTextWidgetStateArray, WCFinderVideoSliderView;
@protocol WCFinderCoverEditViewControllerDelegate;

@interface WCFinderCoverEditViewController
{
    _Bool _xlabShowSelectAlbumCover;
    _Bool _xlabShowPreviewBtn;
    int _selectCoverStyle;
    WCFinderEditTextWidgetStateArray *_coverTextWidgetState;
    id <WCFinderCoverEditViewControllerDelegate> _delegate;
    WCFinderContact *_fromContact;
    WCFinderCoverEditOptionModel *_optionModel;
    UILabel *_naviTitleLabel;
    UILabel *_naviDescLabel;
    UIButton *_previewBtn;
    WCFinderCoverVideoPreviewView *_videoPreviewView;
    WCFinderCoverPhotoPreviewView *_photoPreviewView;
    MMUIButton *_modeSwitchBtn;
    MMUIButton *_addTextWidgetBtn;
    EditImageTextToolV2 *_currEditTextWidget;
    WCFinderVideoSliderView *_sliderView;
    WCFinderCoverSelectAlbumView *_selectAlbumView;
    UIButton *_finishBtn;
    MMUIButton *_cancelButton;
    CDUnknownBlockType _chooseBlock;
    WCEditImageSafeAreaScrollView *_eIScrollView;
    NSURL *_photoCoverURL;
    WCFinderCropRectModel *_cropRectModel;
    UIImageView *_editPencilImageView;
    MMUIView *_pencilCloseBtn;
    WCFinderCoverSelectAlbumView *_selectVideoView;
    WCFinderCoverBackGroundView *_gestureHandleView;
}

+ (id)getCurPlayUrlWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCoverBackGroundView *gestureHandleView; // @synthesize gestureHandleView=_gestureHandleView;
@property(retain, nonatomic) WCFinderCoverSelectAlbumView *selectVideoView; // @synthesize selectVideoView=_selectVideoView;
@property(retain, nonatomic) MMUIView *pencilCloseBtn; // @synthesize pencilCloseBtn=_pencilCloseBtn;
@property(retain, nonatomic) UIImageView *editPencilImageView; // @synthesize editPencilImageView=_editPencilImageView;
@property(retain, nonatomic) WCFinderCropRectModel *cropRectModel; // @synthesize cropRectModel=_cropRectModel;
@property(retain, nonatomic) NSURL *photoCoverURL; // @synthesize photoCoverURL=_photoCoverURL;
@property(retain, nonatomic) WCEditImageSafeAreaScrollView *eIScrollView; // @synthesize eIScrollView=_eIScrollView;
@property(copy, nonatomic) CDUnknownBlockType chooseBlock; // @synthesize chooseBlock=_chooseBlock;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *finishBtn; // @synthesize finishBtn=_finishBtn;
@property(retain, nonatomic) WCFinderCoverSelectAlbumView *selectAlbumView; // @synthesize selectAlbumView=_selectAlbumView;
@property(retain, nonatomic) WCFinderVideoSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) EditImageTextToolV2 *currEditTextWidget; // @synthesize currEditTextWidget=_currEditTextWidget;
@property(retain, nonatomic) MMUIButton *addTextWidgetBtn; // @synthesize addTextWidgetBtn=_addTextWidgetBtn;
@property(nonatomic) int selectCoverStyle; // @synthesize selectCoverStyle=_selectCoverStyle;
@property(retain, nonatomic) MMUIButton *modeSwitchBtn; // @synthesize modeSwitchBtn=_modeSwitchBtn;
@property(retain, nonatomic) WCFinderCoverPhotoPreviewView *photoPreviewView; // @synthesize photoPreviewView=_photoPreviewView;
@property(retain, nonatomic) WCFinderCoverVideoPreviewView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) UIButton *previewBtn; // @synthesize previewBtn=_previewBtn;
@property(retain, nonatomic) UILabel *naviDescLabel; // @synthesize naviDescLabel=_naviDescLabel;
@property(retain, nonatomic) UILabel *naviTitleLabel; // @synthesize naviTitleLabel=_naviTitleLabel;
@property(nonatomic) _Bool xlabShowPreviewBtn; // @synthesize xlabShowPreviewBtn=_xlabShowPreviewBtn;
@property(nonatomic) _Bool xlabShowSelectAlbumCover; // @synthesize xlabShowSelectAlbumCover=_xlabShowSelectAlbumCover;
@property(retain, nonatomic) WCFinderCoverEditOptionModel *optionModel; // @synthesize optionModel=_optionModel;
@property(retain, nonatomic) WCFinderContact *fromContact; // @synthesize fromContact=_fromContact;
@property(nonatomic) __weak id <WCFinderCoverEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderEditTextWidgetStateArray *coverTextWidgetState; // @synthesize coverTextWidgetState=_coverTextWidgetState;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickEditPencilImageView;
- (void)clickPreviewBtn;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)dismissAllPresentedViewControllers;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (struct CGRect)getAssetPreviewFrame;
- (_Bool)loadMediaInfoSuc;
- (int)feedViewControllerScene;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)editImageShowTextInputView:(id)arg1 displayStr:(id)arg2 lineColor:(id)arg3 textStyle:(unsigned long long)arg4;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)cancelEditText:(id)arg1;
- (id)getCurSelectCoverPreviewModel;
- (void)onClickCancelAction;
- (void)onClickFinishAction;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (id)getCoverEditImageResult;
- (void)onClickAddTextWidgetAction;
- (id)currentPreviewView;
- (void)onClickModeSwitchAction;
- (void)updateSearchAssetPOIInfo:(id)arg1;
- (void)openSelectPhotoAlbum;
- (void)updateEditScrollArea;
- (void)loadCoverInfoByVideoURL:(id)arg1 specialImage:(id)arg2 photoCoverUrl:(id)arg3 coverTimeStamp:(double)arg4 compositionTask:(id)arg5 modeStyle:(int)arg6 cropRectModel:(id)arg7 chooseBlock:(CDUnknownBlockType)arg8;
- (void)_updateModeSwitchBtn:(id)arg1;
- (id)genBtn;
- (id)genPostDataReportDict;
- (void)layoutAllSubviews;
- (void)setupNaviBarView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldShowPreviewBtn;
- (_Bool)shouldShowSelectAlbumCover;
- (void)_loadSwitchConfig;
- (id)initWithParamsModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

