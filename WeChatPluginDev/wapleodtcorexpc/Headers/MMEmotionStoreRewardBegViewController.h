//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, EmotionRewardResponseInfo, MMUILabel, MMUIScrollView, MMUIView, MMWebImageView, NSString, RichTextView, StoreEmotionRewardLogicObject, UIImageView;

@interface MMEmotionStoreRewardBegViewController
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    MMUIScrollView *m_scrollView;
    MMWebImageView *m_begRewardImage;
    UIImageView *m_loadingGif;
    MMUIView *m_priceButtonGridView;
    MMUILabel *m_choosePriceTitleLabel;
    RichTextView *m_customAmountBtn;
    StoreEmotionRewardLogicObject *m_rewardLogic;
    MMWebImageView *_designerIconView;
    MMUILabel *_designerNameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *designerNameLabel; // @synthesize designerNameLabel=_designerNameLabel;
@property(retain, nonatomic) MMWebImageView *designerIconView; // @synthesize designerIconView=_designerIconView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onClose;
- (void)onClickCustomAmountButton;
- (void)onChoosePriceButton:(id)arg1;
- (double)updateCustomAmountViewFromMarginTop:(double)arg1;
- (void)initCustomAmountView;
- (id)textForPriceButton:(id)arg1;
- (double)updatePriceButtonGridViewFromMarginTop:(double)arg1;
- (void)initPriceButtonGridView;
- (double)updateDeisgnerInfoViewFromMarginTop:(double)arg1;
- (void)initDesignerInfoView;
- (double)updateBegRewardImageFromMarginTop:(double)arg1;
- (void)initBegRewardImage;
- (void)updateScrollView;
- (void)initScrollView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 extInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

