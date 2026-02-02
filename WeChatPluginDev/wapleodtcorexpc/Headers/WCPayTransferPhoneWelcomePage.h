//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ComplianceItem, UIButton, UIImageView, UILabel, UIView, WCPayCss, WCPayTransferPhoneProtocalHalfPage;
@protocol WCPayTransferPhoneWelcomePageDelegate><WCPayTransferPhoneProtocalHalfPageDelegate;

@interface WCPayTransferPhoneWelcomePage
{
    ComplianceItem *_complianceItem;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleView;
    UILabel *_subTitleView2;
    UIView *_bottomContainerView;
    UIButton *_confirmButton;
    UIView *_headerView;
    WCPayCss *_css;
    UIView *_subTitleContainerView;
    UIView *_subTitleContainerView2;
    UIImageView *_dotImageView;
    UIImageView *_dotImageView2;
    WCPayTransferPhoneProtocalHalfPage *_halfPage;
    id <WCPayTransferPhoneWelcomePageDelegate><WCPayTransferPhoneProtocalHalfPageDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayTransferPhoneWelcomePageDelegate><WCPayTransferPhoneProtocalHalfPageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPayTransferPhoneProtocalHalfPage *halfPage; // @synthesize halfPage=_halfPage;
@property(retain, nonatomic) UIImageView *dotImageView2; // @synthesize dotImageView2=_dotImageView2;
@property(retain, nonatomic) UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(retain, nonatomic) UIView *subTitleContainerView2; // @synthesize subTitleContainerView2=_subTitleContainerView2;
@property(retain, nonatomic) UIView *subTitleContainerView; // @synthesize subTitleContainerView=_subTitleContainerView;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain) UILabel *subTitleView2; // @synthesize subTitleView2=_subTitleView2;
@property(retain) UILabel *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) ComplianceItem *complianceItem; // @synthesize complianceItem=_complianceItem;
- (void)closeHalfPage;
- (void)onTapStart;
- (void)updateHalfPage;
- (void)updateStartButton;
- (void)updateBottomContainerView;
- (void)updateSubTitleContainverView2;
- (void)updateSubTitleContainverView;
- (void)updateTitleView;
- (void)updateIcon;
- (void)updateHeaderView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)init;

@end

