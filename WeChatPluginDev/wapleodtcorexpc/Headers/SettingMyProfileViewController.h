//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetWecoinBalanceResponse, MMHeadImageView, NSString, NameEditorViewController, RingToneSettingCellHandler, WCTableViewManager;

@interface SettingMyProfileViewController
{
    MMHeadImageView *m_headImage;
    NameEditorViewController *m_CurrentVC;
    NSString *m_nsTempNickName;
    _Bool m_bHaveInvoiceInfo;
    WCTableViewManager *m_tableViewMgr;
    GetWecoinBalanceResponse *_wecoinBalanceResponse;
    RingToneSettingCellHandler *_ringToneSettingCellHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneSettingCellHandler *ringToneSettingCellHandler; // @synthesize ringToneSettingCellHandler=_ringToneSettingCellHandler;
@property(retain, nonatomic) GetWecoinBalanceResponse *wecoinBalanceResponse; // @synthesize wecoinBalanceResponse=_wecoinBalanceResponse;
- (void)registerYReportSdk;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onFinderSvrExptConfigHitChanged:(int)arg1;
- (void)didPatSuffixModified;
- (void)viewDidTransitionToNewSize;
- (void)setupDeepLinkConfig;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)onModifyNickName:(id)arg1 vc:(id)arg2;
- (void)onInfoChange;
- (void)OnGetInvoiceRet:(_Bool)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)preLoadGlobalRing;
- (void)dealloc;
- (void)showWCCoinView;
- (void)showSocialInfo;
- (void)showInvoiceView;
- (void)showMyAddressInfoView;
- (void)showQRInfoView;
- (void)showModifyPatpatSuffixWithScene:(unsigned long long)arg1;
- (void)showModifyPatpatSuffix;
- (void)showModifyNickName;
- (void)makeChangeImg;
- (id)wccoinCellRightView;
- (void)fetchData;
- (_Bool)shouldRestrictContentViewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAppear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onChangeImg:(id)arg1;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (void)updateTableCell;
- (void)showModifyUserNameProtocol;
- (_Bool)isNeedShowWCPay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

