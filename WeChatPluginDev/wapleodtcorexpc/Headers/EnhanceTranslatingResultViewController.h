//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnhanceTranslatingImageCdnObject, NSString, OCRTransReport, UIButton, UIImage, UIImageView, UILabel, UIScrollView, WCImageTranslateLogic;

@interface EnhanceTranslatingResultViewController
{
    unsigned int _sessionId;
    int _scene;
    UIImage *_originImage;
    UIImage *_translatedImage;
    double _closeBtnCenterY;
    OCRTransReport *_report;
    EnhanceTranslatingImageCdnObject *_cdnObject;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIButton *_closeBtn;
    UIButton *_moreBtn;
    UIButton *_translateBtn;
    UIButton *_saveBtn;
    UILabel *_translateLabel;
    UILabel *_saveLabel;
    WCImageTranslateLogic *_imgTranslateLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic; // @synthesize imgTranslateLogic=_imgTranslateLogic;
@property(retain, nonatomic) UILabel *saveLabel; // @synthesize saveLabel=_saveLabel;
@property(retain, nonatomic) UILabel *translateLabel; // @synthesize translateLabel=_translateLabel;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UIButton *translateBtn; // @synthesize translateBtn=_translateBtn;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) EnhanceTranslatingImageCdnObject *cdnObject; // @synthesize cdnObject=_cdnObject;
@property(retain, nonatomic) OCRTransReport *report; // @synthesize report=_report;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) double closeBtnCenterY; // @synthesize closeBtnCenterY=_closeBtnCenterY;
@property(retain, nonatomic) UIImage *translatedImage; // @synthesize translatedImage=_translatedImage;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
- (void)onShowTranslateImage:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportTranslateMenuClick:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)genMenuItemArray;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)onGotTranslatingImage:(id)arg1;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (void)onCdnUploadImageDataFinish:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)reTranslateImage;
- (void)handleImageLongPressGesture:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)showActionSheet;
- (void)clsoeButtonClicked:(id)arg1;
- (void)saveButtonClicked:(id)arg1;
- (void)translateButtonClicked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)updateAfterTransitionAnimation;
- (void)updateBeforeTransitionAnimation;
- (_Bool)shouldInteractiveDismiss;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)cdnUploadFeedbackData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doFeedBackWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

