//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetWecoinPageInfoResponse, KindaUIScrollView, NSString, UIView, WCCoinNewUserTipsView;

@interface WCCoinDetailViewController
{
    _Bool _directlyJumpDetailPage;
    _Bool _didBuyCoin;
    KindaUIScrollView *_scrollView;
    UIView *_contentView;
    GetWecoinPageInfoResponse *_pageInfoResponse;
    WCCoinNewUserTipsView *_tipsView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didBuyCoin; // @synthesize didBuyCoin=_didBuyCoin;
@property(retain, nonatomic) WCCoinNewUserTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) GetWecoinPageInfoResponse *pageInfoResponse; // @synthesize pageInfoResponse=_pageInfoResponse;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) KindaUIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool directlyJumpDetailPage; // @synthesize directlyJumpDetailPage=_directlyJumpDetailPage;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)getWecoinPageInfoCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getWecoinPageInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)didFetchMoneySuccess:(id)arg1;
- (void)showNewUserTips;
- (void)getPageInfo;
- (void)clickSubscriptionListEntrance;
- (void)clickBanner;
- (void)clickCoinBalance;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickRightItem;
- (void)clickProfit;
- (void)buyCoin;
- (void)layoutBottomView;
- (void)layoutSubscriptionListEntrance;
- (void)layoutProfitView;
- (void)layoutTopView;
- (void)layoutBannerView;
- (void)layoutContentView;
- (void)refresh;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

