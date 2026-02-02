//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetHbRefundConfigResp, GetTransferWordingResponse, MMWebViewController, NSDictionary, NSString, TransferPhoneGetSwitchResp, WCPayGetTransferWordingCgi, WCPayHongBaoRefundConfigCgi, WCPayTransferPhoneChangeSwitchCgi, WCPayTransferPhoneGetSwitchCgi, WCPayTransferPhoneProtocalHalfPage;
@protocol WCPayPwdViewControllerDelegate;

@interface WCPayPwdViewController
{
    id <WCPayPwdViewControllerDelegate> m_delegate;
    _Bool _shouldUpdateWhenAppear;
    _Bool _isAgreedWithProtocol;
    unsigned int _m_fromScene;
    NSDictionary *_payManageData;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
    WCPayHongBaoRefundConfigCgi *_hbRefundConfigCgi;
    GetHbRefundConfigResp *_hbRefundConfigResp;
    WCPayTransferPhoneGetSwitchCgi *_transferPhoneGetSwitchCgi;
    WCPayTransferPhoneChangeSwitchCgi *_transferPhoneChangeSwitchCgi;
    TransferPhoneGetSwitchResp *_transferPhoneGetSwitchResp;
    MMWebViewController *_uploadIdWebView;
    WCPayTransferPhoneProtocalHalfPage *_protocolHalfPage;
}

+ (id)decoratorViewWith:(id)arg1 header:(_Bool)arg2 width:(double)arg3 delegate:(id)arg4;
+ (void)updateExtraSection:(id)arg1 dic:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property _Bool isAgreedWithProtocol; // @synthesize isAgreedWithProtocol=_isAgreedWithProtocol;
@property _Bool shouldUpdateWhenAppear; // @synthesize shouldUpdateWhenAppear=_shouldUpdateWhenAppear;
@property(retain) WCPayTransferPhoneProtocalHalfPage *protocolHalfPage; // @synthesize protocolHalfPage=_protocolHalfPage;
@property(retain) MMWebViewController *uploadIdWebView; // @synthesize uploadIdWebView=_uploadIdWebView;
@property(retain) TransferPhoneGetSwitchResp *transferPhoneGetSwitchResp; // @synthesize transferPhoneGetSwitchResp=_transferPhoneGetSwitchResp;
@property(retain) WCPayTransferPhoneChangeSwitchCgi *transferPhoneChangeSwitchCgi; // @synthesize transferPhoneChangeSwitchCgi=_transferPhoneChangeSwitchCgi;
@property(retain) WCPayTransferPhoneGetSwitchCgi *transferPhoneGetSwitchCgi; // @synthesize transferPhoneGetSwitchCgi=_transferPhoneGetSwitchCgi;
@property(retain, nonatomic) GetHbRefundConfigResp *hbRefundConfigResp; // @synthesize hbRefundConfigResp=_hbRefundConfigResp;
@property(retain, nonatomic) WCPayHongBaoRefundConfigCgi *hbRefundConfigCgi; // @synthesize hbRefundConfigCgi=_hbRefundConfigCgi;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
@property(retain, nonatomic) NSDictionary *payManageData; // @synthesize payManageData=_payManageData;
@property(nonatomic) unsigned int m_fromScene; // @synthesize m_fromScene=_m_fromScene;
@property(nonatomic) __weak id <WCPayPwdViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)WCPayTransferPhoneProtocalHalfPageDisagree;
- (void)WCPayTransferPhoneProtocalHalfPageAgree;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onWCPayTransferPhoneChangeSwitchCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneChangeSwitchCgiResp:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)genTransferPhoneSectionFooterView;
- (void)onTransferPhoneSwitch:(id)arg1;
- (void)onWCPayTransferPhoneGetSwitchCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetSwitchCgiResp:(id)arg1;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)setWCPayWebLogicStateJsapi:(id)arg1 didGetInfo:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onRealnameVerifySuccess;
- (void)onRealname;
- (void)gotoPayManage:(id)arg1;
- (void)reloadTableFromCache;
- (void)initPayManageDataFromCacheOrNetwork;
- (void)updatePayManageData;
- (void)onProfileChange;
- (void)reloadTable;
- (void)unregisterWCPay;
- (void)onChangeDelayTransferDuration;
- (void)onResetPwd;
- (void)onModifyPwd;
- (void)onSimpleUserSetPwd;
- (void)onTouchIDSwitchChanged:(id)arg1;
- (void)requestWording;
- (id)delayDurationDesc;
- (void)onPayManageLabelToWeb:(id)arg1;
- (void)onSwitchWallet:(id)arg1;
- (void)onChangeHongBaoRefundPayWay;
- (void)managePlanData;
- (void)initCellView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)OnHongBaoRefundConfigRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnHongBaoRefundConfigRepsonseOK:(id)arg1;
- (void)requestHbRefundConfig;
- (void)requestTransferPhoneConfig;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnBack;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

