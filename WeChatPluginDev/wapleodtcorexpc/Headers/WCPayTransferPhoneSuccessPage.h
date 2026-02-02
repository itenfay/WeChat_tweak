//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaUIView, NSMutableArray, TransferPhoneSuccPageResp, UIButton, UIImageView, UILabel, UIView, WCPayCss;
@protocol WCPayTransferPhoneSuccessPageDelegate;

@interface WCPayTransferPhoneSuccessPage
{
    id <WCPayTransferPhoneSuccessPageDelegate> _m_delegate;
    KindaUIView *_noticeView;
    UILabel *_noticeLabel;
    UIView *_containerView;
    UIView *_headerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subTitleView;
    UIView *_firstLineView;
    UIView *_bottomContainerView;
    UIButton *_backButton;
    WCPayCss *_css;
    TransferPhoneSuccPageResp *_succResp;
    NSMutableArray *_keyValueArray;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *keyValueArray; // @synthesize keyValueArray=_keyValueArray;
@property(retain) TransferPhoneSuccPageResp *succResp; // @synthesize succResp=_succResp;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain) UIView *firstLineView; // @synthesize firstLineView=_firstLineView;
@property(retain) UILabel *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain) KindaUIView *noticeView; // @synthesize noticeView=_noticeView;
@property __weak id <WCPayTransferPhoneSuccessPageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onTapBack;
- (void)updateBackButton;
- (void)updateBottomContainerView;
- (void)updateKeyValue;
- (void)updateFirstLineView;
- (void)updateSubTitleView;
- (void)updateTitleView;
- (void)updateIconView;
- (void)updateHeaderView;
- (void)updateNoticeLabel;
- (void)onTapNotice;
- (void)updateNoticeView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

