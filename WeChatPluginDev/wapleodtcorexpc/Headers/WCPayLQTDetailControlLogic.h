//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTipsViewController, NSString, WCPayLQTAutoChargeCloseCgi, WCPayLQTAutoChargeModifyTimeCgi, WCPayLQTAutoChargeOpenCgi, WCPayLQTAutoChargeQrySettingCgi, WCPayLQTCloseFundAccountCgi, WCPayLQTMoneyControlLogic, WCPayLQTOnClickRedDotCgi, WCPayLQTOpenLqbAccountCgi, WCPayLQTQryUserFundDetailCgi;
@protocol WCPayLQTDetailControlLogicDelegate;

@interface WCPayLQTDetailControlLogic
{
    _Bool _bIsLQTFetchOrSaveSucc;
    _Bool _bHasShowRealnameGuide;
    id <WCPayLQTDetailControlLogicDelegate> _logicDelegate;
    NSString *_traceInfo;
    WCPayLQTQryUserFundDetailCgi *_qryDetailCgi;
    WCPayLQTCloseFundAccountCgi *_closeFundCgi;
    WCPayLQTMoneyControlLogic *_lqtMoneyControlLogic;
    WCPayLQTOpenLqbAccountCgi *_lqbOpenAccoutCgi;
    WCPayLQTOnClickRedDotCgi *_lqtOnClickRedDotCgi;
    unsigned long long _fromScene;
    MMTipsViewController *_upgradeTipsView;
    unsigned long long _getPwdScene;
    WCPayLQTAutoChargeQrySettingCgi *_autoChargeQrySettingCgi;
    WCPayLQTAutoChargeOpenCgi *_autoChargeOpenCgi;
    WCPayLQTAutoChargeCloseCgi *_autoChargeCloseCgi;
    WCPayLQTAutoChargeModifyTimeCgi *_autoChargeModifyTimeCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayLQTAutoChargeModifyTimeCgi *autoChargeModifyTimeCgi; // @synthesize autoChargeModifyTimeCgi=_autoChargeModifyTimeCgi;
@property(retain, nonatomic) WCPayLQTAutoChargeCloseCgi *autoChargeCloseCgi; // @synthesize autoChargeCloseCgi=_autoChargeCloseCgi;
@property(retain, nonatomic) WCPayLQTAutoChargeOpenCgi *autoChargeOpenCgi; // @synthesize autoChargeOpenCgi=_autoChargeOpenCgi;
@property(retain, nonatomic) WCPayLQTAutoChargeQrySettingCgi *autoChargeQrySettingCgi; // @synthesize autoChargeQrySettingCgi=_autoChargeQrySettingCgi;
@property(nonatomic) unsigned long long getPwdScene; // @synthesize getPwdScene=_getPwdScene;
@property(nonatomic) _Bool bHasShowRealnameGuide; // @synthesize bHasShowRealnameGuide=_bHasShowRealnameGuide;
@property(retain) MMTipsViewController *upgradeTipsView; // @synthesize upgradeTipsView=_upgradeTipsView;
@property(nonatomic) _Bool bIsLQTFetchOrSaveSucc; // @synthesize bIsLQTFetchOrSaveSucc=_bIsLQTFetchOrSaveSucc;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) WCPayLQTOnClickRedDotCgi *lqtOnClickRedDotCgi; // @synthesize lqtOnClickRedDotCgi=_lqtOnClickRedDotCgi;
@property(retain, nonatomic) WCPayLQTOpenLqbAccountCgi *lqbOpenAccoutCgi; // @synthesize lqbOpenAccoutCgi=_lqbOpenAccoutCgi;
@property(retain, nonatomic) WCPayLQTMoneyControlLogic *lqtMoneyControlLogic; // @synthesize lqtMoneyControlLogic=_lqtMoneyControlLogic;
@property(retain, nonatomic) WCPayLQTCloseFundAccountCgi *closeFundCgi; // @synthesize closeFundCgi=_closeFundCgi;
@property(retain, nonatomic) WCPayLQTQryUserFundDetailCgi *qryDetailCgi; // @synthesize qryDetailCgi=_qryDetailCgi;
@property(retain, nonatomic) NSString *traceInfo; // @synthesize traceInfo=_traceInfo;
@property(nonatomic) __weak id <WCPayLQTDetailControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (id)getTempDirectory;
- (id)getFormatVideoPath:(id)arg1;
- (id)getTempVideoPath:(id)arg1;
- (id)generateDownloadArgsWrap:(id)arg1;
- (id)genStaticVideoPlayInfo:(id)arg1;
- (void)call:(id)arg1;
- (void)onGetLQTOnClickRedDotResp:(id)arg1;
- (void)onGetLQTAutoChargeModifyTimeResp:(id)arg1;
- (void)sendAutoChargeSettingModifyTimeRequestWithModifyTime:(id)arg1;
- (void)onGetLQTAutoChargeCloseCgiResp:(id)arg1;
- (void)sendAutoChargeSettingCloseRequestWithPayPwd:(id)arg1;
- (void)onGetLQTAutoChargeOpenResp:(id)arg1;
- (void)sendAutoChargeSettingOpenRequestWithPayPwd:(id)arg1;
- (void)onGetLQTAutoChargeQrySettingCgiResp:(id)arg1 fromServer:(_Bool)arg2;
- (void)getLQTAutoChargeQrySettingDataFromSvr:(_Bool)arg1;
- (void)refreshAutoSettingViewControllerWithOldData;
- (void)onUserModifyAutoChargeTime:(id)arg1;
- (void)onUserCloseAutoChargeSetting;
- (void)onUserOpenAutoChargeSetting;
- (void)onChargeSettingViewControllerBack;
- (void)gotoSettingViewControllerAndPutDetailViewControllerBack;
- (void)reportLQTUpgradeV2:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)BalanceDetailJumpToLQTSave:(id)arg1 showKeyboard:(_Bool)arg2 entranceType:(int)arg3 bindSerial:(id)arg4 amount:(id)arg5 vcDelegate:(id)arg6;
- (void)onDetailViewContollerClickRedDot:(id)arg1;
- (void)onDetailViewControllerShouldPopItem:(id)arg1 fromTransferIn:(_Bool)arg2;
- (void)onDetailViewControllerClickDeposit;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)clickLqbOpenAccountError;
- (void)onGetLqbOpenAccountCgiResp:(id)arg1;
- (void)sendLqbOpenAccountRequest;
- (void)delayDismissViewControllerOnCloseAccount;
- (void)onGetLQTCloseFundAccountResp:(id)arg1;
- (void)sendCloseFundAccountRequestWithPwdString:(id)arg1;
- (void)realNameTipsVCDidCancel:(id)arg1;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)onGetLQTQryUserFundDetailRealnameGuideInfo:(id)arg1;
- (void)onPopsItemClick:(id)arg1;
- (void)onGetDetailPopItems:(id)arg1 scene:(unsigned long long)arg2;
- (void)onGetLQTQryUserFundDetailPopItems:(id)arg1;
- (void)onGetLQTQryUserFundDetailResp:(id)arg1;
- (void)queryUserLQTDetailFromSvrShouldLoading:(_Bool)arg1 loadCache:(_Bool)arg2;
- (void)queryUserLQTDetailFromSvrShouldLoading:(_Bool)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)showPayPwdViewControllerWithScene:(unsigned long long)arg1;
- (void)onLQTMoneyControlLogicNeedToRefreshBalanceDetail;
- (void)onLQTMoneyControlLogicNeedToRefreshLQTDetail;
- (void)onLQTMoneyControlLogicStop:(_Bool)arg1;
- (void)onLQTMoneyControlLogicUpdateTraceInfo:(id)arg1;
- (void)onDetailViewControllerClickAutoChargeSetting;
- (void)onDetailViewControllerNeedUpdateDataFromSvrWithLoading;
- (void)onDetailViewControllerNeedUpdateDataFromSvr;
- (void)onDetailViewControllerUnBindBtnClick;
- (void)startLQTMoneyControlLogicWithMoneyScece:(unsigned long long)arg1;
- (void)onDetailViewControllerFetchBtnClick;
- (void)onDetailViewControllerSaveBtnClick;
- (void)onDetailViewControllerBack;
- (void)gotoLQTDetailViewControllerAndRequestData;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithFromScene:(unsigned long long)arg1 controlData:(id)arg2;
- (void)dealloc;
- (void)updateTraceInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

