//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSDictionary, NSString, RichTextView, TimeoutNumber, UIButton, UIImageView, UILabel, UIView, WCActionSheet, WCPayNoticeItemView, WCPayWebImageView;
@protocol WCPayBalanceDetailViewControllerDelegate;

@interface WCPayBalanceDetailViewController
{
    WCActionSheet *m_actionSheet;
    id <WCPayBalanceDetailViewControllerDelegate> m_delegate;
    RichTextView *richTextView;
    _Bool m_bDidPoped;
    NSDictionary *m_dicBanners;
    _Bool _hasShowBalanceUpgrade;
    UIView *_lqpEntranceLine;
    UIButton *_lqpEntranceButton;
    UIView *_containerView;
    UIView *_headerView;
    UIView *_bannerContainer;
    WCPayNoticeItemView *_banner;
    UIImageView *_logoView;
    UILabel *_balanceTitleLabel;
    UIView *_moneyContainerView;
    TimeoutNumber *_timeoutNumber;
    UIButton *_freezeButton;
    WCPayWebImageView *_freezeButtonIcon;
    UILabel *_freezeButtonLabel;
    WCPayWebImageView *_freezeButtonArrow;
    MMUIButton *_lqtEntryButton;
    UIImageView *_lqtEntryButtonArrow;
    UIImageView *_lqtEntryButtonMask;
    UIView *_footerView;
    UIButton *_saveButton;
    UIButton *_fetchButton;
    UIButton *_realnameButton;
    UILabel *_realnameButtonLabel;
    UIImageView *_realnameButtonArrow;
    UIButton *_lctButton;
    UIImageView *_lctButtonIcon;
    UILabel *_lctButtonLabel;
    UIImageView *_lctButtonArrow;
    UIView *_qaContainerView;
    MMUIButton *_qaButton;
    MMUIButton *_upgradeButton;
    UIView *_upgradeLine;
    UILabel *_brandLabel;
}

- (void).cxx_destruct;
@property(retain) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain) UIView *upgradeLine; // @synthesize upgradeLine=_upgradeLine;
@property(retain) MMUIButton *upgradeButton; // @synthesize upgradeButton=_upgradeButton;
@property(retain) MMUIButton *qaButton; // @synthesize qaButton=_qaButton;
@property(retain) UIView *qaContainerView; // @synthesize qaContainerView=_qaContainerView;
@property(retain) UIImageView *lctButtonArrow; // @synthesize lctButtonArrow=_lctButtonArrow;
@property(retain) UILabel *lctButtonLabel; // @synthesize lctButtonLabel=_lctButtonLabel;
@property(retain) UIImageView *lctButtonIcon; // @synthesize lctButtonIcon=_lctButtonIcon;
@property(retain) UIButton *lctButton; // @synthesize lctButton=_lctButton;
@property(retain) UIImageView *realnameButtonArrow; // @synthesize realnameButtonArrow=_realnameButtonArrow;
@property(retain) UILabel *realnameButtonLabel; // @synthesize realnameButtonLabel=_realnameButtonLabel;
@property(retain) UIButton *realnameButton; // @synthesize realnameButton=_realnameButton;
@property(retain) UIButton *fetchButton; // @synthesize fetchButton=_fetchButton;
@property(retain) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UIImageView *lqtEntryButtonMask; // @synthesize lqtEntryButtonMask=_lqtEntryButtonMask;
@property(retain) UIImageView *lqtEntryButtonArrow; // @synthesize lqtEntryButtonArrow=_lqtEntryButtonArrow;
@property(retain) MMUIButton *lqtEntryButton; // @synthesize lqtEntryButton=_lqtEntryButton;
@property(retain) WCPayWebImageView *freezeButtonArrow; // @synthesize freezeButtonArrow=_freezeButtonArrow;
@property(retain) UILabel *freezeButtonLabel; // @synthesize freezeButtonLabel=_freezeButtonLabel;
@property(retain) WCPayWebImageView *freezeButtonIcon; // @synthesize freezeButtonIcon=_freezeButtonIcon;
@property(retain) UIButton *freezeButton; // @synthesize freezeButton=_freezeButton;
@property(retain) TimeoutNumber *timeoutNumber; // @synthesize timeoutNumber=_timeoutNumber;
@property(retain) UIView *moneyContainerView; // @synthesize moneyContainerView=_moneyContainerView;
@property(retain) UILabel *balanceTitleLabel; // @synthesize balanceTitleLabel=_balanceTitleLabel;
@property(retain) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain) WCPayNoticeItemView *banner; // @synthesize banner=_banner;
@property(retain) UIView *bannerContainer; // @synthesize bannerContainer=_bannerContainer;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property _Bool hasShowBalanceUpgrade; // @synthesize hasShowBalanceUpgrade=_hasShowBalanceUpgrade;
@property(retain) UIButton *lqpEntranceButton; // @synthesize lqpEntranceButton=_lqpEntranceButton;
@property(retain) UIView *lqpEntranceLine; // @synthesize lqpEntranceLine=_lqpEntranceLine;
- (void)lqtActionEntryBtnClick:(id)arg1;
- (void)onWCPayFreezeBalanceMsgNotify:(id)arg1;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)realNameTipsVCDidCancel:(id)arg1;
- (void)reportWithAction:(unsigned long long)arg1 url:(id)arg2;
- (void)onRealnameBtnHighlight:(id)arg1;
- (void)onRealnameBtnCancel:(id)arg1;
- (void)onRealnameBtnClick:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)onLCTBtnHighlight:(id)arg1;
- (void)onLCTBtnCancel:(id)arg1;
- (void)onLCTBtnClick:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)onWatchBalanceList;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)OnLeftBarButtonDone;
- (void)refreshViewWithData:(id)arg1;
- (void)onClickLqpEntranceButton;
- (_Bool)isShowLCTEntry;
- (void)balanceFreezeClick;
- (void)lqtActionEntryArrowHighlight:(id)arg1;
- (void)lqtActionEntryBtnCancel:(id)arg1;
- (id)colorFromInt:(unsigned long long)arg1;
- (void)stopNumberTimeout;
- (id)init;
- (void)updateBrandLabel;
- (void)updateUpgradeButton;
- (void)updateUpgradeLine;
- (_Bool)shouldShowUpgradeLine;
- (_Bool)shouldShowUpgradeButton;
- (void)onClickQaButton:(id)arg1;
- (void)updateQaButton;
- (_Bool)shouldShowQaButton;
- (void)updateQaContainerView;
- (void)updateLctButtonArrow;
- (void)updateLctButtonLabel;
- (void)updateLctButtonIcon;
- (void)updateLctButton;
- (_Bool)shouldShowLctButton;
- (void)updateRealnameButtonArrow;
- (void)updateRealnameButtonLabel;
- (void)updateRealnameButton;
- (_Bool)shouldShowRealnameButton;
- (void)updateFetchButton;
- (_Bool)shouldShowFetchButton;
- (void)updateSaveButton;
- (void)updateFooterView;
- (void)updateLqtEntryButtonArrow;
- (void)updateLqtEntryButtonMask;
- (void)updateLqtEntryButton;
- (_Bool)shouldShowLqtEntryButton;
- (void)updateFreezeButtonArrow;
- (void)updateFreezeButtonLabel;
- (void)updateFreezeButtonIcon;
- (void)updateFreezeButton;
- (_Bool)shouldShowFreezeButton;
- (void)updateTimeoutNumber;
- (void)updateMoneyContainerView;
- (void)updateBalanceTitleLabel;
- (void)updateLogoView;
- (void)updateBanner;
- (_Bool)shouldShowBanner;
- (void)updateBannerContainer;
- (void)updateHeaderView;
- (void)updateView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

