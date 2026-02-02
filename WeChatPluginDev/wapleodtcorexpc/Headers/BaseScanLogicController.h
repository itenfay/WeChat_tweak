//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanBaseContentView, CameraScanTabSwitchingView, CameraScannerViewWrapper, NSString;
@protocol BaseScanLogicDelegate, CameraScanLogicDelegate;

@interface BaseScanLogicController
{
    id <BaseScanLogicDelegate> _delegate;
    id <CameraScanLogicDelegate> _reportDelegate;
    _Bool _needReportStopScanSession;
    unsigned int _enterSessionID;
    unsigned int _tabSessionID;
    unsigned int _scanSessionID;
    CameraScannerViewWrapper *_cameraScannerWrapper;
    CameraScanBaseContentView *_contentView;
    CameraScanTabSwitchingView *_tabSwitchingView;
    unsigned long long _enterSessionTs;
    unsigned long long _scanSessionStartTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReportStopScanSession; // @synthesize needReportStopScanSession=_needReportStopScanSession;
@property(nonatomic) unsigned long long scanSessionStartTimeStamp; // @synthesize scanSessionStartTimeStamp=_scanSessionStartTimeStamp;
@property(nonatomic) unsigned int scanSessionID; // @synthesize scanSessionID=_scanSessionID;
@property(nonatomic) unsigned int tabSessionID; // @synthesize tabSessionID=_tabSessionID;
@property(nonatomic) unsigned long long enterSessionTs; // @synthesize enterSessionTs=_enterSessionTs;
@property(nonatomic) unsigned int enterSessionID; // @synthesize enterSessionID=_enterSessionID;
@property(retain, nonatomic) CameraScanTabSwitchingView *tabSwitchingView; // @synthesize tabSwitchingView=_tabSwitchingView;
@property(retain, nonatomic) CameraScanBaseContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CameraScannerViewWrapper *cameraScannerWrapper; // @synthesize cameraScannerWrapper=_cameraScannerWrapper;
@property(nonatomic) __weak id <CameraScanLogicDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <BaseScanLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)uiSessionID;
- (void)onTapAtPoint:(id)arg1;
- (void)onClickHoleMaskView;
- (void)onVCDidReceiveMemoryWarning;
- (void)resetContentViewWhenStartScan;
- (void)contentViewNetDisconnect;
- (void)contentViewNetConnect;
- (void)contentViewStopScanAnimation;
- (void)contentViewStartScanAnimation;
- (void)contentViewDisappear;
- (void)contentViewAppearFromSwitchTab:(_Bool)arg1;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (void)setupTabSwitchingView:(struct CGRect)arg1;
- (void)setupContentView:(struct CGRect)arg1;
- (void)imagePickerCancel;
- (void)imagePickerOpen;
- (void)onLeaveTab;
- (void)onEnterTab;
- (void)scannerStopCapture;
- (void)scannerStartCapture;
- (_Bool)isTorchViewHiddenNow;
- (double)getTabViewHeight;
- (void)autoFocusCropRectCenter;
- (void)onRotate;
- (void)setInfoLabelHidden:(_Bool)arg1 bAnim:(_Bool)arg2;
- (_Bool)isPointInContentButtonView:(struct CGPoint)arg1;
- (_Bool)shouldPopSelfAtPresented;
- (_Bool)shouldDoAnimationWhenDismiss;
- (void)scanOnePicture:(id)arg1;
- (void)onMyQRCodeButtonClicked;
- (_Bool)shouldShowInfoLabel;
- (_Bool)shouldHideAlertOnClicked;
- (_Bool)shouldPopFromStack;
- (float)getPreviewScale;
- (id)getLoadingText;
- (id)getAlertText;
- (id)getDescriptionText;
- (float)getDescriptionLabelTopPadding;
- (id)getInfoLabelColor;
- (id)getInfoLabelFont;
- (double)getTorchBottomPadding;
- (float)getModifiedInfoLabelBottomPadding;
- (float)getDefaultInfoLabelBottomPadding;
- (_Bool)isCollisionWithAnyMarkDotView;
- (float)getInfoLabelTopPadding;
- (id)getInfoText;
- (struct CGRect)getDrawCropRect;
- (double)getViewControllerViewWidth;
- (void)changePreviewScale;
- (void)stopScan;
- (void)restartScan;
- (void)startScan;
- (id)initWithCameraScannerViewWrapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

