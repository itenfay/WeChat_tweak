//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QueryWeChatWalletResponse, TimeoutNumber, UITableView, WCPayControlData, WCPayCustomModalView, WCPayLQTOnClickRedDotCgi, WCPayQueryWeChatWalletCgi;
@protocol WCPayWalletViewControllerDelegate;

@interface WCPayWalletViewController
{
    _Bool _m_hasShowModalView;
    _Bool _hasConfigNumber;
    id <WCPayWalletViewControllerDelegate> _m_delegate;
    WCPayControlData *_m_oPayData;
    WCPayQueryWeChatWalletCgi *_m_walletCgi;
    QueryWeChatWalletResponse *_m_walletCgiResp;
    WCPayLQTOnClickRedDotCgi *_m_lqtOnClickRedDotCgi;
    NSMutableArray *_m_bottomTextArray;
    WCPayCustomModalView *_m_modalView;
    UITableView *_m_tableView;
    TimeoutNumber *_balanceNumber;
    TimeoutNumber *_lqtNumber;
    NSDictionary *_bannerDict;
    double _timeout;
    NSMutableDictionary *_redDotReportStateDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *redDotReportStateDict; // @synthesize redDotReportStateDict=_redDotReportStateDict;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSDictionary *bannerDict; // @synthesize bannerDict=_bannerDict;
@property _Bool hasConfigNumber; // @synthesize hasConfigNumber=_hasConfigNumber;
@property(retain) TimeoutNumber *lqtNumber; // @synthesize lqtNumber=_lqtNumber;
@property(retain) TimeoutNumber *balanceNumber; // @synthesize balanceNumber=_balanceNumber;
@property(retain) UITableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property _Bool m_hasShowModalView; // @synthesize m_hasShowModalView=_m_hasShowModalView;
@property(retain) WCPayCustomModalView *m_modalView; // @synthesize m_modalView=_m_modalView;
@property(retain) NSMutableArray *m_bottomTextArray; // @synthesize m_bottomTextArray=_m_bottomTextArray;
@property(retain) WCPayLQTOnClickRedDotCgi *m_lqtOnClickRedDotCgi; // @synthesize m_lqtOnClickRedDotCgi=_m_lqtOnClickRedDotCgi;
@property(retain) QueryWeChatWalletResponse *m_walletCgiResp; // @synthesize m_walletCgiResp=_m_walletCgiResp;
@property(retain) WCPayQueryWeChatWalletCgi *m_walletCgi; // @synthesize m_walletCgi=_m_walletCgi;
@property(retain, nonatomic) WCPayControlData *m_oPayData; // @synthesize m_oPayData=_m_oPayData;
@property __weak id <WCPayWalletViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)call:(id)arg1;
- (void)onGetLQTOnClickRedDotResp:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (id)getAccessibilityLabelStringForView:(id)arg1;
- (id)getNumberView:(id)arg1 font:(id)arg2 color:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCellAccessibilitylabel:(id)arg1 viewData:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onWCPaySecuritySettingViewControllerDidCallUpdate;
- (void)onWCPaySecuritySettingViewControllerBack;
- (void)reportWithAction:(unsigned long long)arg1 CellId:(id)arg2 CellType:(unsigned long long)arg3;
- (void)onWCPayWalletLQTBalanceChange;
- (void)onWCPayWalletUpdateDidCall;
- (void)webViewDidReturn:(id)arg1;
- (void)onWCPayCustomModalViewDidConfirm:(id)arg1;
- (void)onWCPayCustomModalViewDidCancel:(id)arg1;
- (void)onWCPayCustomModalViewToWeb:(id)arg1 fromButton:(_Bool)arg2;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)honeyPayHomeLogicDidStop:(id)arg1;
- (void)onWCPayQueryWeChatWalletCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)update:(id)arg1 number:(id)arg2 fontAndColorFrom:(id)arg3;
- (void)onWCPayQueryWeChatWalletCgiResp:(id)arg1 fromServer:(_Bool)arg2;
- (void)onRealnameVerfitySuccessNotification:(id)arg1;
- (void)clickPaySettings;
- (void)clickRealname;
- (void)clickPaySecurity;
- (void)clickHoneyPay;
- (void)clickLqtWithTraceInfo:(id)arg1;
- (void)clickLqt;
- (void)clickBalance;
- (void)clickBankCard;
- (void)clickTinyAppCell:(id)arg1;
- (void)clickH5Cell:(id)arg1;
- (void)updateBottomView;
- (void)reloadTableView;
- (void)onRightBarButtonClick;
- (id)getNoticeBanner;
- (void)updateNavigationBar;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)updateLqtNumber;
- (void)updateBalanceNumber;
- (void)updateView;
- (void)mayDelayUpdateWalletData;
- (void)onLqtRedDotClicked:(id)arg1;
- (void)updateWalletData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
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

