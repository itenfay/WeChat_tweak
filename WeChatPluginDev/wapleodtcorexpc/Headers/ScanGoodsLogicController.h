//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanGoodsContentView, GoodsScanner, NSString;

@interface ScanGoodsLogicController
{
    GoodsScanner *_scanner;
    _Bool _isSearching;
    NSString *_alertText;
    _Bool _isHandlingResult;
    _Bool _hasDidShakingAnimationOnce;
    unsigned long long _lastBeginHandleResultTimeStamp;
    NSString *_desc;
    NSString *_svrRespInfoText;
    unsigned long long _openHalfResultPageTimeStampInMs;
    struct CGPoint _markdotCenter;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long openHalfResultPageTimeStampInMs; // @synthesize openHalfResultPageTimeStampInMs=_openHalfResultPageTimeStampInMs;
@property(retain, nonatomic) NSString *svrRespInfoText; // @synthesize svrRespInfoText=_svrRespInfoText;
@property(nonatomic) _Bool hasDidShakingAnimationOnce; // @synthesize hasDidShakingAnimationOnce=_hasDidShakingAnimationOnce;
@property(nonatomic) struct CGPoint markdotCenter; // @synthesize markdotCenter=_markdotCenter;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) unsigned long long lastBeginHandleResultTimeStamp; // @synthesize lastBeginHandleResultTimeStamp=_lastBeginHandleResultTimeStamp;
@property(nonatomic) _Bool isHandlingResult; // @synthesize isHandlingResult=_isHandlingResult;
- (id)getPinFgImage;
- (_Bool)shouldShowPinView;
- (id)getFullScreenBgImage;
- (_Bool)shouldShowFullScreenBgView;
- (id)getMarkDotCustomImage;
- (float)getDefaultInfoLabelBottomPadding;
- (struct CGSize)calcuateAlbumImageDisplaySize:(id)arg1 isHorizontalFilled:(_Bool)arg2;
- (_Bool)isAlbumImageHorizontalFilled:(id)arg1;
- (struct CGPoint)calcuateCustomViewPointWithHalfScreenTop:(double)arg1;
- (void)updateGoodsContentWithHalfScreenTop:(double)arg1 animateDuration:(double)arg2;
- (void)onEndHandleResult;
- (void)onBeginHandleResult;
- (void)reportCloseHalfScreenPage:(long long)arg1;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPage:(id)arg1 contentTopChanged:(double)arg2;
- (void)stopShakingAnimation;
- (void)startShakingAnimation;
- (void)contentViewNetDisconnect;
- (void)contentViewNetConnect;
- (void)contentViewDisappear;
- (void)contentViewAppearFromSwitchTab:(_Bool)arg1;
- (void)setupContentView:(struct CGRect)arg1;
- (void)cancelAllCallback;
- (void)imagePickerCancel;
- (void)imagePickerOpen;
- (void)scannerStopCapture;
- (void)scannerStartCapture;
- (void)onLeaveTab;
- (void)onEnterTab;
- (void)generateCombineImageAndBlurImage:(id)arg1;
- (void)stopScanOnePictureLoadingBlock;
- (void)startScanOnePictureLoadingBlock;
- (void)scanOnePicture:(id)arg1;
- (_Bool)shouldDoAnimationWhenDismiss;
- (void)onRotate;
- (void)openHalfScreenViewCtrl:(id)arg1;
- (void)detectSuccessAfterMarkDotAnimation:(id)arg1;
- (void)detectSuccessBeforeMarkDotAnimation:(id)arg1;
- (void)handleAlbumSendImageDataSuccess:(id)arg1 sendoutImage:(id)arg2 normalizedCenter:(struct CGPoint)arg3 normalizedSize:(struct CGSize)arg4;
- (void)handleCameraSendImageDataSuccess:(id)arg1 sendoutImage:(id)arg2 normalizedCenter:(struct CGPoint)arg3 normalizedSize:(struct CGSize)arg4;
- (void)prepareForHandlingResult;
- (void)onSendImageDataSuccess:(id)arg1 sendoutImage:(id)arg2 normalizedCenter:(struct CGPoint)arg3 normalizedSize:(struct CGSize)arg4;
- (void)onSendImageDataFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(_Bool)arg4;
- (void)onSendImageDataLength:(unsigned long long)arg1;
- (void)onGetGoodsScanDotInfoList:(id)arg1;
- (void)onCaptureNewBuffer;
- (void)onScanTimeout;
- (id)getAlertText;
- (id)getInfoText;
- (struct CGRect)getDrawCropRect;
- (void)stopScan;
- (void)startScan;
- (void)onCameraScannerViewDidInit;
- (void)dealloc;
- (id)initWithCameraScannerViewWrapper:(id)arg1 businessType:(long long)arg2 businessSubType:(long long)arg3 adInfo:(id)arg4 jsapiInfo:(id)arg5;

// Remaining properties
@property(retain, nonatomic) CameraScanGoodsContentView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

