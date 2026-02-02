//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageIntialView, MMUIButton, MsgImgPickerSelectedCollectionView, MultiImageScrollView, NSString, UIButton, UIView;
@protocol MsgImgPickerPreviewViewControllerDataSource, MsgImgPickerPreviewViewControllerDelegate;

@interface MsgImgPickerPreviewViewController
{
    MMUIButton *_editButton;
    _Bool _previewSelectedOnly;
    id <MsgImgPickerPreviewViewControllerDelegate> _delegate;
    id <MsgImgPickerPreviewViewControllerDataSource> _dataSource;
    long long _startIndex;
    MultiImageScrollView *_multiImageScrollView;
    UIView *_footerBkg;
    UIView *_bottomBar;
    UIButton *_confirmButton;
    MsgImgPickerSelectedCollectionView *_selectedCollectionView;
    UIButton *_checkmarkButton;
    EditImageIntialView *_editImageInitialView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EditImageIntialView *editImageInitialView; // @synthesize editImageInitialView=_editImageInitialView;
@property(retain, nonatomic) UIButton *checkmarkButton; // @synthesize checkmarkButton=_checkmarkButton;
@property(retain, nonatomic) MsgImgPickerSelectedCollectionView *selectedCollectionView; // @synthesize selectedCollectionView=_selectedCollectionView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIView *footerBkg; // @synthesize footerBkg=_footerBkg;
@property(retain, nonatomic) MultiImageScrollView *multiImageScrollView; // @synthesize multiImageScrollView=_multiImageScrollView;
@property(nonatomic) _Bool previewSelectedOnly; // @synthesize previewSelectedOnly=_previewSelectedOnly;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) __weak id <MsgImgPickerPreviewViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MsgImgPickerPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)hideVCAnimation;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)setTopAndBottomBarsHidden:(_Bool)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onChangePage;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (id)getMsgImgPickerSelectedCollectionViewEditeMsgImg:(id)arg1;
- (void)onMsgImgPickerSelectedCollectionViewDidClickedAtIndex:(long long)arg1;
- (void)onEditImage:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (long long)selectedImageCount;
- (long long)imageCount;
- (void)onChangeSelection;
- (void)onConfirm;
- (void)updateDoneButton;
- (void)updateCheckmark;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (_Bool)navigationBarBlurEffect;
- (_Bool)shouldInteractivePop;
- (_Bool)interactiveDismissEnabled;
- (void)viewDidLayoutSubviews;
- (void)resizeBlurViewWithCollectionVisiable:(_Bool)arg1;
- (void)initBottomBar;
- (void)initTopBar;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

