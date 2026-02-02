//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMLiveRewardGiftCoinButton, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImageView, UIView;

@interface MMFinderLiveFansGroupPayPanel
{
    _Bool _wecoinBalanceUpdated;
    _Bool _fetchWecoinBalanceFinished;
    CDUnknownBlockType _payCallback;
    unsigned long long _openScene;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveRewardGiftItem *_joinFansGroupGiftItem;
    UIView *_contentView;
    MMLiveHalfScreenTitleBarView *_titleBarView;
    MMLiveRewardGiftCoinButton *_coinsButton;
    MMUILabel *_payWecoinLabel;
    MMUILabel *_payWecoinCountLabel;
    UIImageView *_payWecoinIcon;
    MMWebImageView *_giftPreviewView;
    MMUILabel *_fansGroupLabel;
    MMUIButton *_joinFansGroupButton;
    long long _balance;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fetchWecoinBalanceFinished; // @synthesize fetchWecoinBalanceFinished=_fetchWecoinBalanceFinished;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(retain, nonatomic) MMUIButton *joinFansGroupButton; // @synthesize joinFansGroupButton=_joinFansGroupButton;
@property(retain, nonatomic) MMUILabel *fansGroupLabel; // @synthesize fansGroupLabel=_fansGroupLabel;
@property(retain, nonatomic) MMWebImageView *giftPreviewView; // @synthesize giftPreviewView=_giftPreviewView;
@property(retain, nonatomic) UIImageView *payWecoinIcon; // @synthesize payWecoinIcon=_payWecoinIcon;
@property(retain, nonatomic) MMUILabel *payWecoinCountLabel; // @synthesize payWecoinCountLabel=_payWecoinCountLabel;
@property(retain, nonatomic) MMUILabel *payWecoinLabel; // @synthesize payWecoinLabel=_payWecoinLabel;
@property(retain, nonatomic) MMLiveRewardGiftCoinButton *coinsButton; // @synthesize coinsButton=_coinsButton;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *joinFansGroupGiftItem; // @synthesize joinFansGroupGiftItem=_joinFansGroupGiftItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(copy, nonatomic) CDUnknownBlockType payCallback; // @synthesize payCallback=_payCallback;
- (id)audienceLogReporter;
- (void)reportForPayButtonClick;
- (void)reportForPanelExpose;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)onNeedBuyCoinWithCurrentBalance:(long long)arg1;
- (void)joinFanClub;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onJoinFansGroupButtonClicked;
- (void)onCoinButtonClicked;
- (void)onJoinFanClubWithError:(id)arg1 comboId:(id)arg2 taskId:(id)arg3;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutJoinButton;
- (void)layoutFansContentView;
- (void)layPayWecoinInfo;
- (void)layoutTitleBarView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)finderLiveTask;
- (void)showWithAnimated:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (void)updateWecoinBalance:(long long)arg1;
- (void)fetchWecoinBalance;
- (void)initData;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (_Bool)shouldAdaptToDarkLight;
- (void)initView;
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2 openScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

