//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, WCPayPayMoneyLogic;
@protocol WCPayGPOrderStatusControlLogicDelegate;

@interface WCPayGPOrderStatusControlLogic
{
    _Bool _bIsLaunchSucc;
    unsigned int _msgLocalID;
    unsigned int _ver;
    id <WCPayGPOrderStatusControlLogicDelegate> _orderStatusDelegate;
    WCPayPayMoneyLogic *_payMoneyLogic;
    unsigned long long _currentLogicScene;
    NSString *_curAlertRightBtnUrl;
    NSString *_sign;
    CContact *_launchContact;
    unsigned long long _customizeAAPayAmount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long customizeAAPayAmount; // @synthesize customizeAAPayAmount=_customizeAAPayAmount;
@property(retain, nonatomic) CContact *launchContact; // @synthesize launchContact=_launchContact;
@property(nonatomic) _Bool bIsLaunchSucc; // @synthesize bIsLaunchSucc=_bIsLaunchSucc;
@property(nonatomic) unsigned int ver; // @synthesize ver=_ver;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *curAlertRightBtnUrl; // @synthesize curAlertRightBtnUrl=_curAlertRightBtnUrl;
@property(nonatomic) unsigned int msgLocalID; // @synthesize msgLocalID=_msgLocalID;
@property(nonatomic) unsigned long long currentLogicScene; // @synthesize currentLogicScene=_currentLogicScene;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(nonatomic) __weak id <WCPayGPOrderStatusControlLogicDelegate> orderStatusDelegate; // @synthesize orderStatusDelegate=_orderStatusDelegate;
- (void)onLaunchControlLogicStop;
- (void)onLaunchGroupPaySuccWithContact:(id)arg1;
- (void)call:(id)arg1;
- (void)openH5WithUrl:(id)arg1;
- (void)prepayAlertViewConfirmClick;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetAACloseUnpayNotifyResonse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetSendPayNotifyMsgResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCloseAAOrderResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderPrePayResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderDetailResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAPaySuccResponse:(id)arg1;
- (void)queryAAPaySuccFromSvrWithTransId:(id)arg1;
- (void)getAAOrderDetailFromSvr;
- (_Bool)gotoViewController:(id)arg1;
- (void)activtyMoneyTextFieldIfNecessary;
- (_Bool)updateC2CNewXmlMsgContentWithRespXml:(id)arg1;
- (void)addAAPaySuccessSysMsg;
- (void)delayStopLogic;
- (void)ContinueDismissAndStopLogic;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showSetPwdTipsView;
- (void)dismissAndStopLogic;
- (void)handleQryPaySuccFinish;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayGPMoneyInputViewControllerConfirmWithMoney:(unsigned long long)arg1 payReason:(id)arg2;
- (void)onWCPayGPMoneyInputViewControllerBack;
- (void)handleCustomizeAAClickPayMoneyButton;
- (void)onClickLaunchNewGroupPayBtn;
- (void)onClickViewBalanceLink;
- (void)startPayMoneyLogic:(_Bool)arg1;
- (void)startPayMoneyLogic;
- (void)onPayerClickCloseUnPayNotify;
- (void)onLauncherClickCloseOrderBtn;
- (void)onLauncherClickSendPayNotifyMsgBtn;
- (void)onPayerClickPayMoneyButton:(id)arg1;
- (void)onOrderStatusViewControllerCancel;
- (void)confirmCloseUnPayNotifyFromSysMsg;
- (void)cancelCloseUnPayNotifyFromSysMsg;
- (void)confirmCloseOrderFromSysMsg;
- (void)cancelCloseOrderFromSysMsg;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithJSParam:(id)arg1;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 withMsgLocalID:(unsigned int)arg5;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 selectedMessageWrap:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

