//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayFaceHBCgi, WCPayFaceHBManagementLogic, WCPayFaceHBPayView, WCPayFaceHBQRCodeInfo;
@protocol WCPayFaceHBPayLogicDelegate;

@interface WCPayFaceHBPayLogic
{
    id <WCPayFaceHBPayLogicDelegate> m_delegate;
    WCPayFaceHBPayView *m_view;
    WCPayFaceHBManagementLogic *m_faceHBManagementLogic;
    WCPayFaceHBCgi *m_getQRCodeCgi;
    WCPayFaceHBCgi *m_deleteQRCodeHBCgi;
    WCPayFaceHBQRCodeInfo *m_qrInfo;
    _Bool m_bFirstQueryDetail;
    NSString *clearTips;
    NSString *clearActionTips;
    unsigned int enterCount;
    unsigned int captureCount;
    unsigned int normalSlideCount;
    unsigned int normalSelectCount;
    unsigned int caidanSlideCount;
    unsigned int caidanSelectCount;
    WCPayFaceHBCgi *_invalidataUrlCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayFaceHBCgi *invalidataUrlCgi; // @synthesize invalidataUrlCgi=_invalidataUrlCgi;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)didWCPayFaceHBCgi:(id)arg1 Response:(id)arg2 Error:(id)arg3 Key:(id)arg4;
- (void)onGetInvalidateUrlResp:(id)arg1 Error:(id)arg2;
- (void)onClearQRCodeInfo:(id)arg1 Error:(id)arg2;
- (void)onGetQRCodeInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)someoneOpen:(struct XmlReaderNode_t *)arg1 SendID:(id)arg2;
- (void)OnFaceHBManagementSearch:(id)arg1;
- (void)OnFaceHBManagementCancel;
- (void)OnHBSlide:(unsigned int)arg1 select:(unsigned int)arg2 Type:(unsigned int)arg3;
- (void)sendInvalidateUrlRequest;
- (void)onUserEndScreenCapture;
- (void)onUserstartScreenCapture;
- (void)OnCaptureScreen;
- (id)loadActionSheetTip;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnFaceHBViewHistory;
- (void)OnFaceHBViewDetail;
- (void)OnFaceHBDeleteHB;
- (void)OnFaceHBMyRedEnvelopesList;
- (void)OnFaceHBPayManage;
- (void)OnFaceHBPayCancel;
- (void)OnFaceHBPayLogicCancel;
- (void)onFailMsg:(id)arg1;
- (void)onFailMsgAndStopLogic:(id)arg1;
- (void)updateQRCode;
- (void)getQRCodeInfo;
- (void)getDetailReceivers;
- (void)stopLogic;
- (void)startLogic;
- (void)showPayHBView;
- (void)onManage;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

