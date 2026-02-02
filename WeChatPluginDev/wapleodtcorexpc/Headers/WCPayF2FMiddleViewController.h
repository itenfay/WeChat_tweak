//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CgiF2FDynamicCodeResp, MMHeadImageView, MMTimer, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIView, WCPayF2FDynamicCodeCgi, WCPayWebImageView;
@protocol WCPayF2FMiddleViewControllerDelegate;

@interface WCPayF2FMiddleViewController
{
    unsigned int _m_amount;
    id <WCPayF2FMiddleViewControllerDelegate> _m_delegate;
    UIView *_m_headerView;
    UIView *_m_panelView;
    UIView *_m_headWordingBackView;
    UILabel *_m_headWordingView;
    UILabel *_m_moneyTitleView;
    UILabel *_m_moneyView;
    UIImageView *_m_qrcodeView;
    MMHeadImageView *_m_headImageView;
    WCPayWebImageView *_m_webImageView;
    UIImageView *_m_iconView;
    UIView *_m_lineView;
    UIView *_m_keyValueView;
    UIButton *_m_buttonView;
    UIImageView *_m_footerIconView;
    UILabel *_m_footerWordingView;
    NSMutableArray *_m_keyListView;
    NSMutableArray *_m_valueListView;
    WCPayF2FDynamicCodeCgi *_m_f2fDynamicCodeCgi;
    CgiF2FDynamicCodeResp *_m_f2fDynamicCodeResp;
    NSString *_m_getDynamicCodeSign;
    NSString *_m_getDynamicCodeExtend;
    NSString *_m_dynamicCodeSpamWording;
    MMTimer *_m_refreshTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *m_refreshTimer; // @synthesize m_refreshTimer=_m_refreshTimer;
@property(retain, nonatomic) NSString *m_dynamicCodeSpamWording; // @synthesize m_dynamicCodeSpamWording=_m_dynamicCodeSpamWording;
@property(retain, nonatomic) NSString *m_getDynamicCodeExtend; // @synthesize m_getDynamicCodeExtend=_m_getDynamicCodeExtend;
@property(retain, nonatomic) NSString *m_getDynamicCodeSign; // @synthesize m_getDynamicCodeSign=_m_getDynamicCodeSign;
@property(nonatomic) unsigned int m_amount; // @synthesize m_amount=_m_amount;
@property(retain, nonatomic) CgiF2FDynamicCodeResp *m_f2fDynamicCodeResp; // @synthesize m_f2fDynamicCodeResp=_m_f2fDynamicCodeResp;
@property(retain, nonatomic) WCPayF2FDynamicCodeCgi *m_f2fDynamicCodeCgi; // @synthesize m_f2fDynamicCodeCgi=_m_f2fDynamicCodeCgi;
@property(retain, nonatomic) NSMutableArray *m_valueListView; // @synthesize m_valueListView=_m_valueListView;
@property(retain, nonatomic) NSMutableArray *m_keyListView; // @synthesize m_keyListView=_m_keyListView;
@property(retain, nonatomic) UILabel *m_footerWordingView; // @synthesize m_footerWordingView=_m_footerWordingView;
@property(retain, nonatomic) UIImageView *m_footerIconView; // @synthesize m_footerIconView=_m_footerIconView;
@property(retain, nonatomic) UIButton *m_buttonView; // @synthesize m_buttonView=_m_buttonView;
@property(retain, nonatomic) UIView *m_keyValueView; // @synthesize m_keyValueView=_m_keyValueView;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UIImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
@property(retain, nonatomic) WCPayWebImageView *m_webImageView; // @synthesize m_webImageView=_m_webImageView;
@property(retain, nonatomic) MMHeadImageView *m_headImageView; // @synthesize m_headImageView=_m_headImageView;
@property(retain, nonatomic) UIImageView *m_qrcodeView; // @synthesize m_qrcodeView=_m_qrcodeView;
@property(retain, nonatomic) UILabel *m_moneyView; // @synthesize m_moneyView=_m_moneyView;
@property(retain, nonatomic) UILabel *m_moneyTitleView; // @synthesize m_moneyTitleView=_m_moneyTitleView;
@property(retain, nonatomic) UILabel *m_headWordingView; // @synthesize m_headWordingView=_m_headWordingView;
@property(retain, nonatomic) UIView *m_headWordingBackView; // @synthesize m_headWordingBackView=_m_headWordingBackView;
@property(retain, nonatomic) UIView *m_panelView; // @synthesize m_panelView=_m_panelView;
@property(retain, nonatomic) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
@property(nonatomic) __weak id <WCPayF2FMiddleViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)callBackDelegate;
- (void)onClickTransfer;
- (void)closeView;
- (void)leftBarButtonItemClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPress:(id)arg1;
- (void)timeToRefreshCode;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 netWorkError:(id)arg2;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 resp:(id)arg2;
- (void)adjustFooter;
- (void)updateFooterWordingView;
- (void)updateFooterIconView;
- (void)updateButtonView;
- (void)updateKeyValueView;
- (void)updateLineView;
- (void)updateIconView;
- (void)updateWebImageView;
- (void)updateHeadImageView;
- (void)updateQrcodeView;
- (void)adjustMoney;
- (void)updateMoneyView;
- (void)updateMoneyTitleView;
- (void)updateHeadWordingView;
- (void)updateHeadWordingBackView;
- (void)updatePanelView;
- (void)updateView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)refreshDynamicData;
- (void)updateNavigation;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)updateData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

