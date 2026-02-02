//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppointBankRes, CheckBankBindRes, GetBankInfoRes, NSString, OperationResp, QueryTransferListRes, TransToBankCardPayRes, WCPayPayMoneyLogic, WCPayT2BCAppointBankCgi, WCPayT2BCBusinessCallBackCgi, WCPayT2BCCheckBankBindCgi, WCPayT2BCDeleteRecordCgi, WCPayT2BCGetBankInfoCgi, WCPayT2BCGetTransHistroyCgi, WCPayT2BCModifyRemarkCgi, WCPayT2BCOperationCgi, WCPayT2BCPayReportCgi, WCPayT2BCPayRequestCgi, WCPayTransferToBankCardFillInfoViewController;
@protocol WCPayT2BCTransferControlLogicDelegate;

@interface WCPayT2BCTransferControlLogic
{
    id <WCPayT2BCTransferControlLogicDelegate> _t2bcTransferLogicDelgate;
    unsigned long long m_uiT2BCTransferLogicStatus;
    int _entryScene;
    WCPayT2BCGetTransHistroyCgi *m_getTransferToBankHistoryCgi;
    WCPayT2BCAppointBankCgi *m_appointBankCgi;
    WCPayT2BCCheckBankBindCgi *m_checkBankBindCgi;
    WCPayT2BCPayRequestCgi *m_transToBankCardPayReqCgi;
    WCPayT2BCGetBankInfoCgi *m_getBankInfoCgi;
    WCPayT2BCModifyRemarkCgi *m_modifyRemarkCgi;
    WCPayT2BCDeleteRecordCgi *m_deleteRecordCgi;
    WCPayT2BCBusinessCallBackCgi *m_businessCallBackCgi;
    WCPayPayMoneyLogic *m_payMoneyLogic;
    WCPayT2BCOperationCgi *m_operationCgi;
    QueryTransferListRes *_m_transferListRes;
    AppointBankRes *_m_appointBankRes;
    CheckBankBindRes *_m_checkBankBindRes;
    TransToBankCardPayRes *_m_transToBankCardPayRes;
    GetBankInfoRes *_m_getBankInfoRes;
    WCPayT2BCPayReportCgi *_m_reportTsbcCgi;
    OperationResp *_m_operationResp;
    long long _lastUnpayReason;
    NSString *_bankCardNumber;
    WCPayTransferToBankCardFillInfoViewController *_m_fillInfoVC;
}

- (void).cxx_destruct;
@property(nonatomic) int entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) WCPayTransferToBankCardFillInfoViewController *m_fillInfoVC; // @synthesize m_fillInfoVC=_m_fillInfoVC;
@property(retain, nonatomic) NSString *bankCardNumber; // @synthesize bankCardNumber=_bankCardNumber;
@property(nonatomic) long long lastUnpayReason; // @synthesize lastUnpayReason=_lastUnpayReason;
@property(retain, nonatomic) OperationResp *m_operationResp; // @synthesize m_operationResp=_m_operationResp;
@property(retain, nonatomic) WCPayT2BCPayReportCgi *m_reportTsbcCgi; // @synthesize m_reportTsbcCgi=_m_reportTsbcCgi;
@property(retain, nonatomic) GetBankInfoRes *m_getBankInfoRes; // @synthesize m_getBankInfoRes=_m_getBankInfoRes;
@property(retain, nonatomic) TransToBankCardPayRes *m_transToBankCardPayRes; // @synthesize m_transToBankCardPayRes=_m_transToBankCardPayRes;
@property(retain, nonatomic) CheckBankBindRes *m_checkBankBindRes; // @synthesize m_checkBankBindRes=_m_checkBankBindRes;
@property(retain, nonatomic) AppointBankRes *m_appointBankRes; // @synthesize m_appointBankRes=_m_appointBankRes;
@property(retain, nonatomic) QueryTransferListRes *m_transferListRes; // @synthesize m_transferListRes=_m_transferListRes;
@property(retain, nonatomic) WCPayT2BCOperationCgi *m_operationCgi; // @synthesize m_operationCgi;
@property(retain, nonatomic) WCPayPayMoneyLogic *m_payMoneyLogic; // @synthesize m_payMoneyLogic;
@property(retain, nonatomic) WCPayT2BCBusinessCallBackCgi *m_businessCallBackCgi; // @synthesize m_businessCallBackCgi;
@property(retain, nonatomic) WCPayT2BCDeleteRecordCgi *m_deleteRecordCgi; // @synthesize m_deleteRecordCgi;
@property(retain, nonatomic) WCPayT2BCModifyRemarkCgi *m_modifyRemarkCgi; // @synthesize m_modifyRemarkCgi;
@property(retain, nonatomic) WCPayT2BCGetBankInfoCgi *m_getBankInfoCgi; // @synthesize m_getBankInfoCgi;
@property(retain, nonatomic) WCPayT2BCPayRequestCgi *m_transToBankCardPayReqCgi; // @synthesize m_transToBankCardPayReqCgi;
@property(retain, nonatomic) WCPayT2BCCheckBankBindCgi *m_checkBankBindCgi; // @synthesize m_checkBankBindCgi;
@property(retain, nonatomic) WCPayT2BCAppointBankCgi *m_appointBankCgi; // @synthesize m_appointBankCgi;
@property(retain, nonatomic) WCPayT2BCGetTransHistroyCgi *m_getTransferToBankHistoryCgi; // @synthesize m_getTransferToBankHistoryCgi;
- (void)stopLogicAndCallFinish;
- (void)OnWCPayT2BCDetailControlLogicFinish;
- (_Bool)gotoViewController:(id)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerClickHistoryRecord;
- (void)OnWCPaySelectReceiverViewControllerDeleteRecord:(id)arg1;
- (void)OnWCPaySelectReceiverViewControllerModifyRemark:(id)arg1 remark:(id)arg2;
- (void)OnWCPaySelectReceiverViewControllerDidSelectReceiver:(id)arg1;
- (void)OnWCPaySelectReceiverViewControllerCancel;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerClickHistoryReceiver;
- (void)WCPayTransferToBankCardViewControllerOnNext:(id)arg1;
- (void)WCPayTransferToBankCardViewControllerCancel;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerFillBankCardNum:(id)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerSelectReceiver:(id)arg1;
- (void)OnWCPayTransferToBankCardPaidSuccessViewControllerBack;
- (void)FillTransferToBankCardInfoOnNext:(id)arg1;
- (void)stopLogic;
- (void)FillTransferToBankCardInfoCancel;
- (void)OnWCPayT2BCBusinessCallBackCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCBusinessCallBackCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCDeleteRecordCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCDeleteRecordCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCModifyRemarkCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCModifyRemarkCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCGetBankInfoCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCGetBankInfoCgiResponseOK:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)OnWCPayT2BCPayRequestCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2 response:(id)arg3;
- (void)OnWCPayT2BCPayRequestCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)sendBusinessCallbackRequest:(id)arg1;
- (void)sendBusinessCallbackRequest;
- (void)onPayMoneyLogicDidStop;
- (void)call:(id)arg1;
- (void)startPayMoneyLogic:(_Bool)arg1;
- (void)OnWCPayT2BCPayRequestCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCCheckBankBindCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCCheckBankBindCgiResponseOK:(id)arg1;
- (void)OnGetApponitBankResonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetApponitBankResonseOK:(id)arg1;
- (void)OnWCPayT2BCOperationCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCOperationCgiResponseOK:(id)arg1;
- (void)OnGetTransToBankHistoryError:(id)arg1 errorCode:(long long)arg2;
- (id)processBankCardNumber:(id)arg1;
- (void)OnGetTransToBankHistory:(id)arg1 myHistory:(id)arg2 response:(id)arg3;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)setT2BCTransferControlLogicDelegate:(id)arg1;
- (void)setTransferBankCardNumer:(id)arg1;
- (void)setTransferScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

