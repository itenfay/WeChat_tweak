//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, FavoritesItem, ForwardMessageLogicController, ImageBrowseButton, MMLongImageCropResult, MMLongImagePreviewBottomView, MMLongImagePreviewContext, MMUIButton, NSString, UIImage, UIImageView, UIScrollView;
@protocol MMLongImagePreviewViewControllerDelegate;

@interface MMLongImagePreviewViewController
{
    _Bool _hasEdit;
    _Bool _disableForward;
    _Bool _disableFavorite;
    _Bool _inEditingMode;
    MMLongImagePreviewContext *_context;
    id <MMLongImagePreviewViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    UIImage *_originImage;
    UIImage *_previewImage;
    UIImageView *_imageView;
    CAGradientLayer *_topGradientLayer;
    MMUIButton *_closeBtn;
    MMLongImagePreviewBottomView *_bottomBarView;
    CAGradientLayer *_bottomGradientLayer;
    MMUIButton *_cropBtn;
    ImageBrowseButton *_forwardBtn;
    ImageBrowseButton *_favoriteBtn;
    ImageBrowseButton *_saveBtn;
    ForwardMessageLogicController *_forwardLogicController;
    FavoritesItem *_addingFavItem;
    MMLongImageCropResult *_croppedResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLongImageCropResult *croppedResult; // @synthesize croppedResult=_croppedResult;
@property(retain, nonatomic) FavoritesItem *addingFavItem; // @synthesize addingFavItem=_addingFavItem;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(nonatomic) _Bool inEditingMode; // @synthesize inEditingMode=_inEditingMode;
@property(nonatomic) _Bool disableFavorite; // @synthesize disableFavorite=_disableFavorite;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(retain, nonatomic) ImageBrowseButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) ImageBrowseButton *favoriteBtn; // @synthesize favoriteBtn=_favoriteBtn;
@property(retain, nonatomic) ImageBrowseButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(retain, nonatomic) MMUIButton *cropBtn; // @synthesize cropBtn=_cropBtn;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) MMLongImagePreviewBottomView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <MMLongImagePreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasEdit; // @synthesize hasEdit=_hasEdit;
@property(retain, nonatomic) MMLongImagePreviewContext *context; // @synthesize context=_context;
- (void)onClickSaveBtn;
- (void)__addFavItemWithArrImage:(id)arg1;
- (void)addFavImageInFragment;
- (void)onClickFavoriteBtn;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)__forwardMsgWithArrImage:(id)arg1;
- (void)forwardPreviewImageInFragment;
- (id)genMsgWrapWithImage:(id)arg1;
- (void)onClickFowardBtn;
- (void)onCropViewControllerPopTransitionEnd;
- (void)onCropViewControllerPopTransitionInAnimateDuration;
- (void)onCropViewControllerPopTransitionBegan;
- (void)onCropViewControllerPushTransitionEnd;
- (void)onCropViewControllerPushTransitionInAnimateDuration;
- (id)onGetImageViewForTransition;
- (void)onFinishCropImage:(id)arg1;
- (void)onClickCropBtn;
- (void)handleDoubleTap:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)updateZoomScaleWithTouchPoint:(struct CGPoint)arg1;
- (struct CGSize)scrollViewVisibleSize;
- (struct CGPoint)scrollViewCenter;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutBottomBar;
- (void)initBottomBar;
- (void)layoutPreviewImage;
- (void)initScrollView;
- (void)delayDimissMySelf:(double)arg1;
- (void)onReturn;
- (void)layoutTopBar;
- (void)initTopBar;
- (void)viewDidLoad;
- (_Bool)shouldInteractivePop;
- (_Bool)hidesStatusBar;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewWillBePoped:(_Bool)arg1;
- (id)initWithImage:(id)arg1 disableForward:(_Bool)arg2 disableFavorite:(_Bool)arg3;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

