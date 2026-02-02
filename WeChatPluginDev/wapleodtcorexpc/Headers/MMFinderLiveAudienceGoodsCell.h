//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGoodsCellSubInfosView, MMFinderLiveGoodsPromotionReplayFloatView, MMFinderLiveGoodsSKUSelectView, MMFinderLiveGoodsSerialNumberView, MMFinderLiveMultiPriceView, MMFinderLiveProductFreeGiftsView, MMFinderLiveProductPromotingMaskView, MMFinderLiveShowBoxItemsView, MMFinderLiveTagsLabel, MMUIButton, MMWebImageView, NSString, UIButton, UILabel;
@protocol MMFinderLiveGoodsCellDelegate;

@interface MMFinderLiveAudienceGoodsCell
{
    UIButton *_addToShoppingCartButton;
    MMWebImageView *_goodsImageView;
    MMFinderLiveGoodsSerialNumberView *_serialNumberView;
    MMFinderLiveProductPromotingMaskView *_promotingView;
    MMFinderLiveProductFreeGiftsView *_freeGiftsView;
    MMUIButton *_actionButton;
    UILabel *_saleCountsLabel;
    MMFinderLiveTagsLabel *_goodsTitleLabel;
    MMFinderLiveGoodsCellSubInfosView *_subInfosView;
    MMFinderLiveShowBoxItemsView *_showBoxItemsView;
    MMFinderLiveShowBoxItemsView *_evaluationsView;
    MMFinderLiveMultiPriceView *_priceView;
    MMFinderLiveGoodsSKUSelectView *_skuSelectView;
    MMFinderLiveGoodsPromotionReplayFloatView *_replayFloatView;
}

+ (double)cellRightContentHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)cellRightContentNormalHeight;
+ (double)cellLeftContentHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)imageWidthForCellWidth:(double)arg1;
+ (id)descLineLabelFont;
+ (double)showBoxItemsViewHeight;
+ (id)showBoxItemsViewConfig;
+ (double)saleCountsHeight;
+ (double)titleLineHeight;
+ (struct CGSize)defaultTagSize;
+ (double)titleSpacing;
+ (id)titleFont;
+ (id)identifier;
+ (_Bool)allowMoreLines;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGoodsPromotionReplayFloatView *replayFloatView; // @synthesize replayFloatView=_replayFloatView;
@property(retain, nonatomic) MMFinderLiveGoodsSKUSelectView *skuSelectView; // @synthesize skuSelectView=_skuSelectView;
@property(retain, nonatomic) MMFinderLiveMultiPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) MMFinderLiveShowBoxItemsView *evaluationsView; // @synthesize evaluationsView=_evaluationsView;
@property(retain, nonatomic) MMFinderLiveShowBoxItemsView *showBoxItemsView; // @synthesize showBoxItemsView=_showBoxItemsView;
@property(retain, nonatomic) MMFinderLiveGoodsCellSubInfosView *subInfosView; // @synthesize subInfosView=_subInfosView;
@property(retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UILabel *saleCountsLabel; // @synthesize saleCountsLabel=_saleCountsLabel;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMFinderLiveProductFreeGiftsView *freeGiftsView; // @synthesize freeGiftsView=_freeGiftsView;
@property(retain, nonatomic) MMFinderLiveProductPromotingMaskView *promotingView; // @synthesize promotingView=_promotingView;
@property(retain, nonatomic) MMFinderLiveGoodsSerialNumberView *serialNumberView; // @synthesize serialNumberView=_serialNumberView;
@property(retain, nonatomic) MMWebImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) UIButton *addToShoppingCartButton; // @synthesize addToShoppingCartButton=_addToShoppingCartButton;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)accessibilityAttributedLabel;
- (void)didClickTail;
- (void)didReleaseTail;
- (void)willShowMoreSKUsTail;
- (void)didSelectSKU:(id)arg1;
- (void)willShowSKUForIndex:(unsigned long long)arg1;
- (void)onWebImageGetDifferentSize;
- (void)onAddToShoppingCartButtonClicked:(id)arg1;
- (void)onPurchaseButtonClicked:(id)arg1;
- (id)productInfo;
- (id)visibleShowBoxItems;
- (void)updateActionButton;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)onFreeGiftsViewClicked;
- (_Bool)isPromotingShow;
- (void)setIsPromoting:(_Bool)arg1;
- (void)layoutRightBottomParts;
- (void)layoutRightTopParts;
- (void)layoutLeftParts;
- (void)layoutSubviews;
- (void)createReplayFloatView;
- (void)addSaleCountsLabel;
- (void)addEvaluationsView;
- (void)addShowBoxItemsView;
- (void)addAddToShoppingCartButton;
- (void)addPriceView;
- (void)addGoodsTitleLabel;
- (void)addActionButton;
- (void)addGoodsImageView;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <MMFinderLiveGoodsCellDelegate> cellDelegate; // @dynamic cellDelegate;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

