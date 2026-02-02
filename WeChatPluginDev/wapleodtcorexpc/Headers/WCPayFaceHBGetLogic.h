//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, UIWindow, WCPayComplianceHalfPage, WCPayFaceHBCgi, WCPayFaceHBGetView, WCPayFaceHBItem, WCPayFaceHBScanQRCodeHandler, WCPayInterceptWinLogic, WCRedEnvelopesControlData, WCRedEnvelopesRedEnvelopesDetailViewController;
@protocol WCPayFaceHBGetLogicDelegate;

@interface WCPayFaceHBGetLogic
{
    id <WCPayFaceHBGetLogicDelegate> m_delegate;
    WCPayFaceHBItem *m_hbItem;
    WCPayFaceHBGetView *m_view;
    NSString *m_nsCurrentUserName;
    UIWindow *m_window;
    WCPayFaceHBCgi *m_faceHBOpenCGI;
    WCRedEnvelopesControlData *m_redData;
    MMUIViewController *preVC;
    WCPayFaceHBScanQRCodeHandler *QRCodeHandle;
    WCRedEnvelopesRedEnvelopesDetailViewController *m_currentViewController;
    WCPayInterceptWinLogic *_interceptWinLogic;
    NSString *_currentQrcode;
    WCPayComplianceHalfPage *_complianceHalfPage;
}

- (void).cxx_destruct;
@property(nonatomic) WCPayComplianceHalfPage *complianceHalfPage; // @synthesize complianceHalfPage=_complianceHalfPage;
@property(retain, nonatomic) NSString *currentQrcode; // @synthesize currentQrcode=_currentQrcode;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)onMainWindowFrameChanged;
- (void)onOpenFaceHB:(id)arg1 Error:(id)arg2;
- (void)didWCPayFaceHBCgi:(id)arg1 Response:(id)arg2 Error:(id)arg3 Key:(id)arg4;
- (void)OnFaceHBGetOpenHB:(id)arg1;
- (void)OnFaceHBGetCancel;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnGoToBalanceDetail;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 Animation:(_Bool)arg4;
- (void)onFailMsgAndStopLogic:(id)arg1;
- (void)OnFaceHBGetLogicCancel;
- (void)stopLogic;
- (void)startLogic;
- (void)showHBGetView;
- (void)setQRCodeHandle:(id)arg1;
- (void)setPreViewController:(id)arg1;
- (void)doFaceHBOpenCgi:(id)arg1 leftButtonContinue:(id)arg2;
- (void)setQRCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)reloadViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

