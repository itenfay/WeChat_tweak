//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HoneyPayListResp, NSDictionary, NSString, UIButton, WCPayAgreementView, WCPayNoticeItemView;
@protocol HoneyPayHomeViewControllerDelegate;

@interface HoneyPayHomeViewController
{
    id <HoneyPayHomeViewControllerDelegate> _delegate;
    HoneyPayListResp *_response;
    WCPayAgreementView *_agreementView;
    UIButton *_addCardButton;
    UIButton *_helpButton;
    NSDictionary *_bannerData;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain, nonatomic) NSDictionary *bannerData; // @synthesize bannerData=_bannerData;
@property(retain, nonatomic) UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) UIButton *addCardButton; // @synthesize addCardButton=_addCardButton;
@property(retain, nonatomic) WCPayAgreementView *agreementView; // @synthesize agreementView=_agreementView;
@property(retain, nonatomic) HoneyPayListResp *response; // @synthesize response=_response;
@property(nonatomic) __weak id <HoneyPayHomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)agreementWording;
- (_Bool)useTransparentNavibar;
- (id)banner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)clickAddCard;
- (void)clickCardCell:(id)arg1;
- (void)clickWelcomeHelp;
- (void)onRightBarButtonClick;
- (void)makeReachLimitCell:(id)arg1;
- (void)makeAddCardCell:(id)arg1;
- (void)makeCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)showCardList;
- (void)showWelcome;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)requestBannerData;
- (void)refreshViewWithData:(id)arg1;
- (_Bool)useBlackStatusbar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

