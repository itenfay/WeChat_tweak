//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CgiUnionTransferPlaceOrderResp, JSEvent, MMTipsViewController, NSString, WCPayBizF2FTransferControlLogic, WCPayF2FMiddlePageSubLogic, WCPayF2FPayCheckCgi, WCPayInterceptWinLogic, WCPayPayMoneyLogic, WCPayTipsPageSheet, WCPayTransferAmountReInputPageStruct, WCPayTransferPayCheckCgi, WCPayTransferPrepayResponseStruct, WCPayUnionTransferPayCheckCgi, WCPayUnionTransferPlaceOrderCgi;

@interface WCPayTransferMoneyControlLogic
{
    WCPayPayMoneyLogic *m_payLogic;
    int m_enWCPayTransferMoneyControlLogicScene;
    NSString *m_nsA8KeyResponseUrl;
    JSEvent *m_jsEvent;
    _Bool m_isNeedKindaCashierLoading;
    _Bool _disableEditMoney;
    _Bool _stopFromBizF2FLogic;
    _Bool _isNeedCheckName;
    _Bool _isNeedReturnToSession;
    _Bool _hasPaySuccess;
    _Bool _bIsOpenIM;
    _Bool _needReportScreenShotPage;
    unsigned int _doubleCheckAmount;
    unsigned int _m_dynamicCodeSource;
    NSString *_curAlertRightUrl;
    WCPayF2FPayCheckCgi *_f2fPayCheckCgi;
    WCPayBizF2FTransferControlLogic *_bizF2FTransferLogic;
    WCPayTransferPayCheckCgi *_transferPayCheckCgi;
    NSString *_doubleCheckWording;
    NSString *_interruptDesc;
    WCPayF2FMiddlePageSubLogic *_m_middlePageSubLogic;
    MMTipsViewController *_checkNameTipsView;
    MMTipsViewController *_checkNameErrorTipsView;
    NSString *_checkUserNameStr;
    WCPayTransferPrepayResponseStruct *_lastReqKeyStruct;
    NSString *_lastPayRequestRemark;
    NSString *_lastPayRequestKey;
    unsigned long long _lastPayRequestAmountInCent;
    NSString *_lastPayRequestAddress;
    NSString *_lastPayRequestAddressName;
    NSString *_lastPayRequestPhone;
    long long _lastUnpayReason;
    NSString *_lastPlaceorderAttach;
    WCPayTransferAmountReInputPageStruct *_lastAmountReinputPage;
    NSString *_zaituMsgWording;
    NSString *_zaituMsgBtnTitle;
    NSString *_zaituMsgOpenUrl;
    NSString *_zaituTipsLeftButtonTitle;
    NSString *_zaituTipsRightButtonTitle;
    WCPayTipsPageSheet *_zaituPageSheet;
    WCPayUnionTransferPlaceOrderCgi *_unionPlaceOrderCgi;
    WCPayUnionTransferPayCheckCgi *_unionPayCheckCgi;
    CgiUnionTransferPlaceOrderResp *_unionLastOrderResp;
    WCPayInterceptWinLogic *_interceptWinLogic;
    long long _transferPrepayRequestErrorCode;
}

- (void).cxx_destruct;
@property(nonatomic) long long transferPrepayRequestErrorCode; // @synthesize transferPrepayRequestErrorCode=_transferPrepayRequestErrorCode;
@property(nonatomic) _Bool needReportScreenShotPage; // @synthesize needReportScreenShotPage=_needReportScreenShotPage;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
@property(retain, nonatomic) CgiUnionTransferPlaceOrderResp *unionLastOrderResp; // @synthesize unionLastOrderResp=_unionLastOrderResp;
@property(retain, nonatomic) WCPayUnionTransferPayCheckCgi *unionPayCheckCgi; // @synthesize unionPayCheckCgi=_unionPayCheckCgi;
@property(retain, nonatomic) WCPayUnionTransferPlaceOrderCgi *unionPlaceOrderCgi; // @synthesize unionPlaceOrderCgi=_unionPlaceOrderCgi;
@property(nonatomic) _Bool bIsOpenIM; // @synthesize bIsOpenIM=_bIsOpenIM;
@property(retain, nonatomic) WCPayTipsPageSheet *zaituPageSheet; // @synthesize zaituPageSheet=_zaituPageSheet;
@property(retain, nonatomic) NSString *zaituTipsRightButtonTitle; // @synthesize zaituTipsRightButtonTitle=_zaituTipsRightButtonTitle;
@property(retain, nonatomic) NSString *zaituTipsLeftButtonTitle; // @synthesize zaituTipsLeftButtonTitle=_zaituTipsLeftButtonTitle;
@property(nonatomic) _Bool hasPaySuccess; // @synthesize hasPaySuccess=_hasPaySuccess;
@property(retain, nonatomic) NSString *zaituMsgOpenUrl; // @synthesize zaituMsgOpenUrl=_zaituMsgOpenUrl;
@property(retain, nonatomic) NSString *zaituMsgBtnTitle; // @synthesize zaituMsgBtnTitle=_zaituMsgBtnTitle;
@property(retain, nonatomic) NSString *zaituMsgWording; // @synthesize zaituMsgWording=_zaituMsgWording;
@property(nonatomic) _Bool isNeedReturnToSession; // @synthesize isNeedReturnToSession=_isNeedReturnToSession;
@property(retain, nonatomic) WCPayTransferAmountReInputPageStruct *lastAmountReinputPage; // @synthesize lastAmountReinputPage=_lastAmountReinputPage;
@property(retain, nonatomic) NSString *lastPlaceorderAttach; // @synthesize lastPlaceorderAttach=_lastPlaceorderAttach;
@property(nonatomic) long long lastUnpayReason; // @synthesize lastUnpayReason=_lastUnpayReason;
@property(retain, nonatomic) NSString *lastPayRequestPhone; // @synthesize lastPayRequestPhone=_lastPayRequestPhone;
@property(retain, nonatomic) NSString *lastPayRequestAddressName; // @synthesize lastPayRequestAddressName=_lastPayRequestAddressName;
@property(retain, nonatomic) NSString *lastPayRequestAddress; // @synthesize lastPayRequestAddress=_lastPayRequestAddress;
@property(nonatomic) unsigned long long lastPayRequestAmountInCent; // @synthesize lastPayRequestAmountInCent=_lastPayRequestAmountInCent;
@property(retain, nonatomic) NSString *lastPayRequestKey; // @synthesize lastPayRequestKey=_lastPayRequestKey;
@property(retain, nonatomic) NSString *lastPayRequestRemark; // @synthesize lastPayRequestRemark=_lastPayRequestRemark;
@property(retain, nonatomic) WCPayTransferPrepayResponseStruct *lastReqKeyStruct; // @synthesize lastReqKeyStruct=_lastReqKeyStruct;
@property(retain, nonatomic) NSString *checkUserNameStr; // @synthesize checkUserNameStr=_checkUserNameStr;
@property(retain, nonatomic) MMTipsViewController *checkNameErrorTipsView; // @synthesize checkNameErrorTipsView=_checkNameErrorTipsView;
@property(retain, nonatomic) MMTipsViewController *checkNameTipsView; // @synthesize checkNameTipsView=_checkNameTipsView;
@property(nonatomic) unsigned int m_dynamicCodeSource; // @synthesize m_dynamicCodeSource=_m_dynamicCodeSource;
@property(retain, nonatomic) WCPayF2FMiddlePageSubLogic *m_middlePageSubLogic; // @synthesize m_middlePageSubLogic=_m_middlePageSubLogic;
@property(retain, nonatomic) NSString *interruptDesc; // @synthesize interruptDesc=_interruptDesc;
@property(nonatomic) unsigned int doubleCheckAmount; // @synthesize doubleCheckAmount=_doubleCheckAmount;
@property(retain, nonatomic) NSString *doubleCheckWording; // @synthesize doubleCheckWording=_doubleCheckWording;
@property(nonatomic) _Bool isNeedCheckName; // @synthesize isNeedCheckName=_isNeedCheckName;
@property(retain, nonatomic) WCPayTransferPayCheckCgi *transferPayCheckCgi; // @synthesize transferPayCheckCgi=_transferPayCheckCgi;
@property(nonatomic) _Bool stopFromBizF2FLogic; // @synthesize stopFromBizF2FLogic=_stopFromBizF2FLogic;
@property(retain, nonatomic) WCPayBizF2FTransferControlLogic *bizF2FTransferLogic; // @synthesize bizF2FTransferLogic=_bizF2FTransferLogic;
@property(retain, nonatomic) WCPayF2FPayCheckCgi *f2fPayCheckCgi; // @synthesize f2fPayCheckCgi=_f2fPayCheckCgi;
@property(retain, nonatomic) NSString *curAlertRightUrl; // @synthesize curAlertRightUrl=_curAlertRightUrl;
- (void)onWCPayBizF2FConfirmViewControllerConfirm:(unsigned long long)arg1 sign:(id)arg2;
- (void)onWCPayBizF2FConfirmViewControllerBack;
- (void)onSelectedContact:(id)arg1;
- (void)willSelectContact:(id)arg1;
- (id)getSameNicknameTips;
- (id)getChatroomContact;
- (void)onSelectMemberViewControllerBack;
- (id)getViewControllerTitle;
- (void)ActiveTransferMoenyViewControllerTextField;
- (void)showTransferMoenyViewControllerFloatBtn;
- (void)call:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onWCPayF2FMiddleViewControllerClickTransfer:(unsigned int)arg1;
- (void)onWCPayF2FMiddleViewControllerBack;
- (void)resignFeeTextFieldFirstResponderWithCompletion:(CDUnknownBlockType)arg1;
- (void)clickContinueInUnarriveMoneyAlert;
- (void)showTransferDoubleCheckTipsView:(id)arg1 transferAmount:(unsigned int)arg2;
- (void)onWCPayUnionTransferPayCheckCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferPayCheckCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferPlaceOrderCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferPlaceOrderCgiResponseOK:(id)arg1;
- (void)onGetTransferPayCheckResp:(id)arg1;
- (void)onBizF2FTransferControlLogicStop;
- (void)onPayMoneyLogicDidStop;
- (void)onPayMoneyLogicSuccess;
- (void)onGetF2FPayCheckCgiResp:(id)arg1;
- (void)prepayAlertViewConfirmClick;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showTransferChargeTipsView;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)handleGotoViewControllerAfterGetTransferContactSucc;
- (void)OnGetTransferUserName:(id)arg1 Error:(id)arg2;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)checkNameDidChange:(id)arg1;
- (void)cutString:(id)arg1;
- (void)showCheckRealNameTipsView;
- (void)kindaContinueTransfer;
- (void)kindaContinueUnionTransfer;
- (void)interruptContinue:(id)arg1;
- (void)interuptCancel:(id)arg1;
- (void)onTipsPageSheetClickBottomButton:(id)arg1;
- (void)onTipsPageSheetClickCancel;
- (void)showZaituTipsPageSheetWithUnArriveMoney:(unsigned int)arg1;
- (void)OnGetTransferPrepayRequest:(id)arg1 Error:(id)arg2;
- (void)delayStopLoading;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (id)getTransferMoneyViewControllerContactWeixinAlias;
- (id)getTransferMoneyViewControllerContactDisplayName;
- (id)getTransferChatContact;
- (_Bool)WCPayTransferMoneyCurrentLogicIsTop;
- (void)WCPayTransferMoneyViewControllerDoScreenShot;
- (void)WCPayTransferMoneyViewControllerNext:(id)arg1;
- (void)GetTransferPrepayRequest:(id)arg1 isSencondRequest:(_Bool)arg2 placeOrderAttatch:(id)arg3;
- (void)GetTransferPrepayRequest:(id)arg1 isSencondRequest:(_Bool)arg2;
- (void)WCPayTransferMoneyViewControllerRightActionCancel:(_Bool)arg1;
- (void)WCPayTransferMoneyViewControllerCancel:(_Bool)arg1;
- (_Bool)OnWCPayTransferSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnOpenOrderList;
- (void)launchCashierLogic;
- (id)getTransferDisplayNameWithTrueName;
- (void)OnContinueTransfer;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)dealloc;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateOpenIM;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithData:(id)arg1 disableEditMoney:(_Bool)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 a8KeyResponseUrl:(id)arg2;
- (long long)getLastUnpayReason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

