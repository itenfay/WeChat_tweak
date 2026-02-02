//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTipsViewController, NSString, TransferPhoneCheckNameReq, TransferPhoneCheckNameResp, TransferPhoneDelHisRcvrReq, TransferPhoneGetHisRcvrsResp, TransferPhoneGetRcvrReq, TransferPhoneGetRcvrResp, TransferPhoneHomePageResp, TransferPhonePlaceOrderReq, TransferPhonePlaceOrderResp, TransferPhoneSuccPageResp, WCPayPayMoneyLogic, WCPayTransferPhoneCheckNameCgi, WCPayTransferPhoneDelHisRcvrCgi, WCPayTransferPhoneGetHisRcvrsCgi, WCPayTransferPhoneGetRcvrCgi, WCPayTransferPhoneHomePageCgi, WCPayTransferPhonePayCheckCgi, WCPayTransferPhonePlaceOrderCgi, WCPayTransferPhoneSuccPageCgi;
@protocol WCPayTransferPhoneLogicDelegate;

@interface WCPayTransferPhoneLogic
{
    _Bool _bIsCheckNameFromPlaceOrder;
    int _forceCheckNameStatus;
    int _scene;
    id <WCPayTransferPhoneLogicDelegate> _m_delegate;
    WCPayTransferPhoneHomePageCgi *_homePageCgi;
    WCPayTransferPhoneGetHisRcvrsCgi *_getHisRcvrsCgi;
    WCPayTransferPhoneDelHisRcvrCgi *_delHisRcvrsCgi;
    WCPayTransferPhoneGetRcvrCgi *_getRcvrCgi;
    WCPayTransferPhoneCheckNameCgi *_checkNameCgi;
    WCPayTransferPhonePlaceOrderCgi *_placeOrderCgi;
    WCPayTransferPhonePayCheckCgi *_payCheckCgi;
    WCPayTransferPhoneSuccPageCgi *_succPageCgi;
    TransferPhoneGetRcvrReq *_getRcvrReq;
    TransferPhoneCheckNameReq *_checkNameReq;
    TransferPhonePlaceOrderReq *_placeOrderReq;
    TransferPhoneDelHisRcvrReq *_delHisRcvrReq;
    TransferPhoneHomePageResp *_homePageResp;
    TransferPhoneGetRcvrResp *_getRcvrResp;
    TransferPhoneGetHisRcvrsResp *_hisRcvrsResp;
    TransferPhoneCheckNameResp *_checkNameResp;
    TransferPhonePlaceOrderResp *_placeOrderResp;
    TransferPhoneSuccPageResp *_succPageResp;
    WCPayPayMoneyLogic *_payMoneyLogic;
    MMTipsViewController *_checkNameController;
    NSString *_replaceOrderToken;
    NSString *_realnameToken;
    NSString *_m_enterMobileNumber;
    NSString *_pastedBankCardOrMobileNumer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pastedBankCardOrMobileNumer; // @synthesize pastedBankCardOrMobileNumer=_pastedBankCardOrMobileNumer;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *m_enterMobileNumber; // @synthesize m_enterMobileNumber=_m_enterMobileNumber;
@property int forceCheckNameStatus; // @synthesize forceCheckNameStatus=_forceCheckNameStatus;
@property _Bool bIsCheckNameFromPlaceOrder; // @synthesize bIsCheckNameFromPlaceOrder=_bIsCheckNameFromPlaceOrder;
@property(retain) NSString *realnameToken; // @synthesize realnameToken=_realnameToken;
@property(retain) NSString *replaceOrderToken; // @synthesize replaceOrderToken=_replaceOrderToken;
@property(retain) MMTipsViewController *checkNameController; // @synthesize checkNameController=_checkNameController;
@property(retain) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain) TransferPhoneSuccPageResp *succPageResp; // @synthesize succPageResp=_succPageResp;
@property(retain) TransferPhonePlaceOrderResp *placeOrderResp; // @synthesize placeOrderResp=_placeOrderResp;
@property(retain) TransferPhoneCheckNameResp *checkNameResp; // @synthesize checkNameResp=_checkNameResp;
@property(retain) TransferPhoneGetHisRcvrsResp *hisRcvrsResp; // @synthesize hisRcvrsResp=_hisRcvrsResp;
@property(retain) TransferPhoneGetRcvrResp *getRcvrResp; // @synthesize getRcvrResp=_getRcvrResp;
@property(retain) TransferPhoneHomePageResp *homePageResp; // @synthesize homePageResp=_homePageResp;
@property(retain) TransferPhoneDelHisRcvrReq *delHisRcvrReq; // @synthesize delHisRcvrReq=_delHisRcvrReq;
@property(retain) TransferPhonePlaceOrderReq *placeOrderReq; // @synthesize placeOrderReq=_placeOrderReq;
@property(retain) TransferPhoneCheckNameReq *checkNameReq; // @synthesize checkNameReq=_checkNameReq;
@property(retain) TransferPhoneGetRcvrReq *getRcvrReq; // @synthesize getRcvrReq=_getRcvrReq;
@property(retain) WCPayTransferPhoneSuccPageCgi *succPageCgi; // @synthesize succPageCgi=_succPageCgi;
@property(retain) WCPayTransferPhonePayCheckCgi *payCheckCgi; // @synthesize payCheckCgi=_payCheckCgi;
@property(retain) WCPayTransferPhonePlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
@property(retain) WCPayTransferPhoneCheckNameCgi *checkNameCgi; // @synthesize checkNameCgi=_checkNameCgi;
@property(retain) WCPayTransferPhoneGetRcvrCgi *getRcvrCgi; // @synthesize getRcvrCgi=_getRcvrCgi;
@property(retain) WCPayTransferPhoneDelHisRcvrCgi *delHisRcvrsCgi; // @synthesize delHisRcvrsCgi=_delHisRcvrsCgi;
@property(retain) WCPayTransferPhoneGetHisRcvrsCgi *getHisRcvrsCgi; // @synthesize getHisRcvrsCgi=_getHisRcvrsCgi;
@property(retain) WCPayTransferPhoneHomePageCgi *homePageCgi; // @synthesize homePageCgi=_homePageCgi;
@property __weak id <WCPayTransferPhoneLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)popAndPush:(id)arg1;
- (void)call:(id)arg1;
- (void)WCPayTransferPhoneProtocalHalfPageDisagree;
- (void)WCPayTransferPhoneProtocalHalfPageAgree;
- (void)onWCPayTransferPhoneWelcomePageNext;
- (void)onWCPayTransferPhoneWelcomePageBack;
- (void)onClickJumpItem:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)OnWCPayT2BCTransferControlLogicFinish;
- (void)OnWCPayPwdViewControllerBack;
- (void)onWCPayTransferPhoneEntryPageToSetUp;
- (void)onWCPayTransferPhoneEntryPageToPhone;
- (void)OnContinueWCPayTransferPhoneEntryPageToPhone;
- (void)OnContinueClickTransToBank;
- (void)onWCPayTransferPhoneLogicToBank;
- (void)onWCPayTransferPhoneEntryPageToBank;
- (void)onWCPayTransferPhoneEntryPageBack;
- (void)onWCPayTransferPhoneHistoryPageDel:(id)arg1;
- (void)onWCPayTransferPhoneHistoryPageSelect:(id)arg1;
- (void)onWCPayTransferPhoneHistoryPageLoadMore;
- (id)onWCPayTransferPhoneHistoryPageGetHisRcvrsResp;
- (void)onWCPayTransferPhoneHistoryPageBack;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onWCPayTransferPhoneSuccessPageClickJumpItem:(id)arg1;
- (id)onWCPayTransferPhoneSuccessPageName;
- (id)onWCPayTransferPhoneSuccessPageAmount;
- (id)onWCPayTransferPhoneSuccessPageResp;
- (void)onWCPayTransferPhoneSuccessPageBack;
- (_Bool)gotoViewController:(id)arg1;
- (void)activeTextField;
- (void)startSuccessPageCgi;
- (void)startPayCheckCgi;
- (void)onPayMoneyLogicDidStop;
- (void)onPayMoneyLogicSuccess;
- (id)onPayMoneyConfirmViewDesc;
- (void)startCheckName:(id)arg1 reason:(unsigned int)arg2 spamInfo:(id)arg3;
- (void)startCheckName:(id)arg1 reason:(unsigned int)arg2;
- (_Bool)onWCPayTransferPhoneMainPageShowCheckName;
- (id)onWCPayTransferPhoneMainPageShowName;
- (id)onWCPayTransferPhoneMainPageGetRcvrResp;
- (void)onWCPayTransferPhoneMainPageToCheckName:(id)arg1;
- (void)onWCPayTransferPhoneMainPageToNext:(unsigned int)arg1 comment:(id)arg2 mode:(unsigned int)arg3;
- (void)onWCPayTransferPhoneMainPageBack;
- (void)onWCPayTransferPhoneMainPageActiveTextField;
- (void)cleanMainPageData;
- (void)onWCPayTransferPhoneHomePageClickJumpItem:(id)arg1;
- (void)onWCPayTransferPhoneHomePageBack;
- (void)onWCPayTransferPhoneHomePageToNext:(id)arg1;
- (void)onWCPayTransferPhoneHomePageToHistory;
- (id)onWCPayTransferPhoneHomePage;
- (void)onWCPayTransferPhoneSuccPageCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneSuccPageCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhonePayCheckCgiResp:(id)arg1;
- (void)onWCPayTransferPhonePayCheckCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)checkNameDidChange:(id)arg1;
- (void)cutString:(id)arg1;
- (void)startPaymoneyLogic;
- (void)onWCPayTransferPhonePlaceOrderCgiResp:(id)arg1;
- (void)popToEntryView;
- (void)onWCPayTransferPhonePlaceOrderCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (_Bool)hasMoneyUnit:(id)arg1;
- (id)genDoubleCheckCustomViewWithCheckWinData:(id)arg1;
- (void)placeOrderAfterCheckNameFinish;
- (void)onWCPayTransferPhoneCheckNameCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneCheckNameCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetRcvrCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneGetRcvrCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetRcvrCgiRcvidInvaild:(id)arg1;
- (void)onWCPayTransferPhoneDelHisRcvrCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneDelHisRcvrCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetHisRcvrsCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneGetHisRcvrsCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneHomePageCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneHomePageCgiResp:(id)arg1;
- (id)processBankCardNumber:(id)arg1;
- (_Bool)isMobileNumber:(id)arg1;
- (_Bool)isBankCardNumber:(id)arg1;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)updateDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

