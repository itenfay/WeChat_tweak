//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSArray, NSMutableDictionary, NSString, OCRTransReport, UIButton, UIColor, UIImage, UIImageView, UILabel, UIScrollView, UIView, WCImageTranslateLogic;

@interface OCRTransResultViewController
{
    UIImageView *_souceImageView;
    UIView *_resultView;
    MMLoadingView *_loadingView;
    _Bool _showOrigin;
    NSMutableDictionary *_fontDic;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIColor *_bgColor;
    UIColor *_textColor;
    struct CGPoint _offsetPoint;
    struct CGRect _newImageRect;
    char *_rgba;
    UILabel *_tipLabel;
    UIButton *_closeBtn;
    UIButton *_showOriginBtn;
    UIButton *_saveBtn;
    UILabel *_translateLabel;
    UILabel *_saveLabel;
    struct CGRect _imageRect;
    _Bool _viewIsAppeared;
    UIImage *_showOriginNormalImage;
    UIImage *_showOriginSelectedImage;
    UIImage *_showOriginNormalImageHL;
    UIImage *_showOriginSelectedImageHL;
    unsigned long long _ZHResultStrCount;
    unsigned long long _allResultStrCount;
    unsigned int _currSessionId;
    UIImage *_image;
    UIImage *_translatedImage;
    NSArray *_translations;
    double _angle;
    OCRTransReport *_transReport;
    double _closeBtnCenterY;
    CDUnknownBlockType _translateFinishBlock;
    UIView *_animationView;
    UIView *_topLine;
    UIView *_rightLine;
    UIView *_bottomLine;
    UIView *_leftLine;
    UIImageView *_scanLineImgView;
    UIButton *_moreBtn;
    WCImageTranslateLogic *_imgTranslateLogic;
    struct CGRect _imageCropRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic; // @synthesize imgTranslateLogic=_imgTranslateLogic;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIImageView *scanLineImgView; // @synthesize scanLineImgView=_scanLineImgView;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(copy, nonatomic) CDUnknownBlockType translateFinishBlock; // @synthesize translateFinishBlock=_translateFinishBlock;
@property(nonatomic) double closeBtnCenterY; // @synthesize closeBtnCenterY=_closeBtnCenterY;
@property(nonatomic) unsigned int currSessionId; // @synthesize currSessionId=_currSessionId;
@property(retain, nonatomic) OCRTransReport *transReport; // @synthesize transReport=_transReport;
@property(nonatomic) struct CGRect imageCropRect; // @synthesize imageCropRect=_imageCropRect;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(retain, nonatomic) NSArray *translations; // @synthesize translations=_translations;
@property(readonly, nonatomic) UIImage *translatedImage; // @synthesize translatedImage=_translatedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)onShowTranslateImage:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)genMenuItemArray;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)exportImage;
- (void)saveToAlbum:(id)arg1;
- (void)setBackgroundAndTextColorForLabel:(id)arg1 withInfo:(id)arg2;
- (void)reTranslateImage;
- (void)showActionSheet;
- (void)handleImageLongPressGesture:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)close;
- (void)showDialogWithWording:(id)arg1;
- (void)setTranslateImage:(id)arg1 withAngle:(float)arg2;
- (void)onFinishWithTranslateImage:(id)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (void)getBitmap;
- (void)onCdnUploadImageDataFinish:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)OnTakeOCRImage:(id)arg1;
- (void)switchText;
- (void)updateAngle;
- (void)expandToLeftForInfo:(id)arg1 font:(id)arg2;
- (void)expandToRightForInfo:(id)arg1 font:(id)arg2;
- (void)expandForInfo:(id)arg1 withFont:(id)arg2;
- (struct CGSize)sizeForText:(id)arg1 withSize:(struct CGSize)arg2 font:(id)arg3 isMerge:(_Bool)arg4;
- (void)setupShowOriginButtonImage;
- (void)updateResult;
- (void)setTranslations:(id)arg1 andAngle:(double)arg2;
- (void)adjustViewAndTryToAnimate;
- (void)animate;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)shouldNavigationBarAccessibilityHidden;
- (id)navigationBarBackgroundColor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

