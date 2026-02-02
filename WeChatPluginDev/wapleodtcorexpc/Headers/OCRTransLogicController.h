//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanOCRContentView, EnhanceTranslatingLogic, EnhanceTranslatingView, NSArray, NSString, OCRTransReport, OCRTransScanner, UIImage;

@interface OCRTransLogicController
{
    OCRTransScanner *_scanner;
    int _scene;
    NSString *_orign;
    NSString *_translation;
    UIImage *_sourceImage;
    NSArray *_translations;
    OCRTransReport *_report;
    EnhanceTranslatingLogic *_logic;
    EnhanceTranslatingView *_enhanceTranslatingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EnhanceTranslatingView *enhanceTranslatingView; // @synthesize enhanceTranslatingView=_enhanceTranslatingView;
@property(retain, nonatomic) EnhanceTranslatingLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) OCRTransReport *report; // @synthesize report=_report;
@property(retain, nonatomic) NSArray *translations; // @synthesize translations=_translations;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)onEnhanceTranslatingAnimationWorked:(_Bool)arg1;
- (unsigned long long)currentSessionId;
- (void)onEnhanceTranslatingViewNavToResultVc:(id)arg1;
- (void)onEnhanceTranslatingViewResultWillAppear;
- (void)onEnhanceTranslatingViewDiscard;
- (void)onEnhanceTranslatingViewCancel;
- (void)onEnhanceTranslatingLogicTakePhoto:(id)arg1;
- (void)onEnhanceTranslatingLogicDisplay:(id)arg1 sourceImg:(id)arg2 sessionId:(unsigned long long)arg3 leftTop:(struct CGPoint)arg4 rightTop:(struct CGPoint)arg5 rightBottom:(struct CGPoint)arg6 leftBottom:(struct CGPoint)arg7;
- (void)onEnhanceTranslatingLogicSwitchToCamera;
- (void)onEnhanceTranslatingLogicFail;
- (void)onEnhanceTranslatingLogicNotStable;
- (void)onEnhanceTranslatingLogicCancel;
- (void)onEnhanceTranslatingLogicBegin;
- (void)onTakePhotoButtonClicked:(id)arg1;
- (void)contentViewNetDisconnect;
- (void)contentViewNetConnect;
- (void)setupContentView:(struct CGRect)arg1;
- (void)onGotImageByCamera:(id)arg1;
- (void)onGotImageByScanning:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)onStopScanning;
- (void)onStartScanning;
- (void)onSendDataLength:(unsigned int)arg1;
- (void)onOCRTransError:(int)arg1;
- (void)onGotOCRResult:(id)arg1;
- (void)onGotOCRResultOrign:(id)arg1 Translation:(id)arg2;
- (void)onEnterTab;
- (void)onLeaveTab;
- (void)onRotate;
- (_Bool)shouldPopFromStack;
- (id)getDescriptionText;
- (float)getDescriptionLabelTopPadding;
- (id)getInfoLabelColor;
- (id)getInfoLabelFont;
- (float)getDefaultInfoLabelBottomPadding;
- (double)getTorchBottomPadding;
- (float)getInfoLabelTopPadding;
- (id)getInfoText;
- (struct CGRect)getDrawCropRect;
- (void)setCropRect;
- (void)updateSessionIDWhenSessionPicTrans;
- (unsigned int)sendImage:(id)arg1 scene:(int)arg2;
- (unsigned int)getScannerSessionId;
- (void)fireWithScene:(int)arg1;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (void)stopScan;
- (void)startScan;
- (void)onCameraScannerViewDidInit;
- (void)dealloc;
- (id)initWithCameraScannerViewWrapper:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) CameraScanOCRContentView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

