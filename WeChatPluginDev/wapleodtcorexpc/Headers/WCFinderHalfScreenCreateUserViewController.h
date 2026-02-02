//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIButton, UILabel, WCFinderGetWechatHDHeadFetcher, WCFinderHalfScreenCreateUserVCAcctView;
@protocol WCFinderHalfScreenCreateUserViewControllerDelegate;

@interface WCFinderHalfScreenCreateUserViewController
{
    NSString *_reccommendCreateAcctNickName;
    NSString *_confirmBtnTitle;
    NSString *_customCreateTip;
    UILabel *_tipsView;
    WCFinderHalfScreenCreateUserVCAcctView *_acctView;
    MMUIButton *_aggreCheckBox;
    RichTextView *_aggrementView;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    WCFinderGetWechatHDHeadFetcher *_wechatHDHeadFetcher;
}

+ (double)getHeightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGetWechatHDHeadFetcher *wechatHDHeadFetcher; // @synthesize wechatHDHeadFetcher=_wechatHDHeadFetcher;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) RichTextView *aggrementView; // @synthesize aggrementView=_aggrementView;
@property(retain, nonatomic) MMUIButton *aggreCheckBox; // @synthesize aggreCheckBox=_aggreCheckBox;
@property(retain, nonatomic) WCFinderHalfScreenCreateUserVCAcctView *acctView; // @synthesize acctView=_acctView;
@property(retain, nonatomic) UILabel *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSString *customCreateTip; // @synthesize customCreateTip=_customCreateTip;
@property(retain, nonatomic) NSString *confirmBtnTitle; // @synthesize confirmBtnTitle=_confirmBtnTitle;
@property(copy, nonatomic) NSString *reccommendCreateAcctNickName; // @synthesize reccommendCreateAcctNickName=_reccommendCreateAcctNickName;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickCancelBtn:(id)arg1;
- (void)onClickConfirmBtn:(id)arg1;
- (void)onClickEditBtn;
- (void)onClickAgreementCheckBox:(id)arg1;
- (void)shakeAggreetView;
- (id)getNickName;
- (void)viewDidLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (void)setupLayout;
- (void)setViewDataReport:(id)arg1 drid:(id)arg2;
- (id)getReportDict;
- (void)setupSubViews;
- (void)setupHalfScreenView;
- (void)setupData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCFinderHalfScreenCreateUserViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

