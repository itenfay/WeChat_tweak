//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGiftWallSettingView, MMFinderLiveRewardWishInputView, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMLiveRewardGiftSelectionView, MMUIButton, MMUILabel, NSArray, NSMutableArray, NSString, UIImageView, UIScrollView;

@interface MMFinderLiveSaveWishListPanel
{
    _Bool _isModify;
    _Bool _isDeleted;
    unsigned int _totalPrice;
    CDUnknownBlockType _dismissedCallBlock;
    CDUnknownBlockType _clickHelpButtonCallBlock;
    MMFinderLiveTaskId *_taskId;
    UIScrollView *_contentView;
    MMLiveHalfScreenTitleBarView *_titleBarView;
    MMUILabel *_titleLabel;
    MMUIButton *_doneButton;
    MMUILabel *_priceTitleLabel;
    UIImageView *_coinIconView;
    MMUILabel *_priceLabel;
    MMFinderLiveRewardWishInputView *_inputView;
    MMLiveRewardGiftSelectionView *_giftSelectionView;
    NSMutableArray *_targetGiftViews;
    NSMutableArray *_displayGiftItemViews;
    NSArray *_lastRewardWishList;
    MMFinderLiveGiftWallSettingView *_giftWallSettingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGiftWallSettingView *giftWallSettingView; // @synthesize giftWallSettingView=_giftWallSettingView;
@property(retain, nonatomic) NSArray *lastRewardWishList; // @synthesize lastRewardWishList=_lastRewardWishList;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isModify; // @synthesize isModify=_isModify;
@property(nonatomic) unsigned int totalPrice; // @synthesize totalPrice=_totalPrice;
@property(retain, nonatomic) NSMutableArray *displayGiftItemViews; // @synthesize displayGiftItemViews=_displayGiftItemViews;
@property(retain, nonatomic) NSMutableArray *targetGiftViews; // @synthesize targetGiftViews=_targetGiftViews;
@property(retain, nonatomic) MMLiveRewardGiftSelectionView *giftSelectionView; // @synthesize giftSelectionView=_giftSelectionView;
@property(retain, nonatomic) MMFinderLiveRewardWishInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *priceTitleLabel; // @synthesize priceTitleLabel=_priceTitleLabel;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType clickHelpButtonCallBlock; // @synthesize clickHelpButtonCallBlock=_clickHelpButtonCallBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissedCallBlock; // @synthesize dismissedCallBlock=_dismissedCallBlock;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onRewardGiftSelectionViewWillClose:(_Bool)arg1;
- (void)onSelectGiftWithGiftItem:(id)arg1;
- (void)onInputTargetCount:(unsigned int)arg1;
- (void)onClearCurrentLiveRewardWish:(id)arg1;
- (void)onUpdateTargetRewardCount:(id)arg1;
- (void)onAddTargetRewardGift:(id)arg1;
- (void)onClickGiftWallHelp;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onDoneButtonClicked;
- (void)updateTotalPrice;
- (void)removeDisplayLiveRewardWishView:(id)arg1;
- (void)addDisplayLiveRewardWishView:(id)arg1;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutTargetGiftViews;
- (void)layoutPriceView;
- (void)layoutTitleBarView;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithWishes:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)initTargetGiftViews;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)initView;
- (id)initWithTaskId:(id)arg1 rewardWishList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

