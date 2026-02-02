//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTipsViewController, NSString, OpenECardReq, WCPayBindECardCgi, WCPayEcardModelView, WCPayLQTDetailControlLogic, WCPayLQTOpenLqbAccountCgi, WCPayOpenECardAuthCgi, WCPayOpenECardCgi, WCPayQryBankList4BindCgi;
@protocol WCPayOpenECardControlLogicDelegate;

@interface WCPayOpenECardControlLogic
{
    _Bool _bIsOpenECardSucc;
    _Bool _bIsReuseExistingEcard;
    _Bool _bIsQryBankListAfterBindCard;
    id <WCPayOpenECardControlLogicDelegate> _delegate;
    WCPayOpenECardAuthCgi *_openECardAuthCgi;
    WCPayQryBankList4BindCgi *_bankListCgi;
    WCPayOpenECardCgi *_openECardCgi;
    WCPayBindECardCgi *_bindECardCgi;
    WCPayLQTOpenLqbAccountCgi *_lqbOpenAccoutCgi;
    NSString *_jsapiToken;
    NSString *_jsapiExtraData;
    WCPayLQTDetailControlLogic *_lqtDetailControlLogic;
    NSString *_bindCardSerial;
    MMTipsViewController *_verifyTips;
    NSString *_currentInputMobile;
    OpenECardReq *_openEcardReq;
    WCPayEcardModelView *_openEcardModelView;
}

- (void).cxx_destruct;
@property(retain) WCPayEcardModelView *openEcardModelView; // @synthesize openEcardModelView=_openEcardModelView;
@property(retain) OpenECardReq *openEcardReq; // @synthesize openEcardReq=_openEcardReq;
@property(retain, nonatomic) NSString *currentInputMobile; // @synthesize currentInputMobile=_currentInputMobile;
@property(retain, nonatomic) MMTipsViewController *verifyTips; // @synthesize verifyTips=_verifyTips;
@property(nonatomic) _Bool bIsQryBankListAfterBindCard; // @synthesize bIsQryBankListAfterBindCard=_bIsQryBankListAfterBindCard;
@property(retain, nonatomic) NSString *bindCardSerial; // @synthesize bindCardSerial=_bindCardSerial;
@property(nonatomic) _Bool bIsReuseExistingEcard; // @synthesize bIsReuseExistingEcard=_bIsReuseExistingEcard;
@property(nonatomic) _Bool bIsOpenECardSucc; // @synthesize bIsOpenECardSucc=_bIsOpenECardSucc;
@property(retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic; // @synthesize lqtDetailControlLogic=_lqtDetailControlLogic;
@property(retain, nonatomic) NSString *jsapiExtraData; // @synthesize jsapiExtraData=_jsapiExtraData;
@property(retain, nonatomic) NSString *jsapiToken; // @synthesize jsapiToken=_jsapiToken;
@property(retain, nonatomic) WCPayLQTOpenLqbAccountCgi *lqbOpenAccoutCgi; // @synthesize lqbOpenAccoutCgi=_lqbOpenAccoutCgi;
@property(retain, nonatomic) WCPayBindECardCgi *bindECardCgi; // @synthesize bindECardCgi=_bindECardCgi;
@property(retain, nonatomic) WCPayOpenECardCgi *openECardCgi; // @synthesize openECardCgi=_openECardCgi;
@property(retain, nonatomic) WCPayQryBankList4BindCgi *bankListCgi; // @synthesize bankListCgi=_bankListCgi;
@property(retain, nonatomic) WCPayOpenECardAuthCgi *openECardAuthCgi; // @synthesize openECardAuthCgi=_openECardAuthCgi;
@property(nonatomic) __weak id <WCPayOpenECardControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCPayEcardModelViewTextChange:(id)arg1;
- (void)onWCPayEcardModelViewClickNewCardLink;
- (void)onWCPayEcardModelViewHideKeyboard;
- (void)onWCPayEcardModelViewShowKeyboard:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)openECardAfterBindNewCard;
- (void)queryBankListForBindFailOrCancel;
- (void)onAddPayCardResult:(_Bool)arg1 newCardBindSerial:(id)arg2;
- (void)startAddPayCardLogic;
- (void)onLQTDetailControlLogicStop;
- (void)gotoLQTDetailControLogic:(id)arg1;
- (void)clickLqbOpenAccountError;
- (void)onGetLqbOpenAccountCgiResp:(id)arg1;
- (void)sendLqbOpenAccountRequest;
- (void)bindECardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)bindECardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)qryBankList4BindCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryBankList4BindCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)openECardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)openECardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)openECardAuthCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)openECardAuthCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)sendOpenEcardAuthRequestWithPwd:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)successVCFinished:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)vc:(id)arg1 didSelectCardType:(id)arg2;
- (void)eCardBankListVCBack;
- (void)eCardBankListVCDidChoseNewCard:(id)arg1;
- (void)eCardBankListVC:(id)arg1 didSelectedCard:(id)arg2;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)showPasswordVC;
- (void)startQueryBankCardList;
- (void)startOpenECardWithBankType:(id)arg1 PhoneNumber:(id)arg2 bindSerial:(id)arg3 bankCardNo:(id)arg4 isisRepeatSend:(_Bool)arg5 fromScene:(int)arg6 bankCardInfo:(id)arg7;
- (void)startOpenECardWithBankType:(id)arg1 PhoneNumber:(id)arg2 bindSerial:(id)arg3 bankCardNo:(id)arg4 isisRepeatSend:(_Bool)arg5 fromScene:(int)arg6;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

