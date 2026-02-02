//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnchorGoodsCellLeftCardView, MMFinderLiveGoodsAskedForPromotingView, MMFinderLiveGoodsCellSubInfosView, MMFinderLiveGoodsPromotionReplayButton, MMFinderLiveShowBoxItemsView, MMFinderLiveTagsLabel, MMUIButton, NSString, UILabel;
@protocol MMFinderLiveAnchorGoodsCellDelegate;

@interface MMFinderLiveAnchorGoodsCell
{
    MMFinderLiveAnchorGoodsCellLeftCardView *_leftCardView;
    UILabel *_saleCountsLabel;
    MMFinderLiveTagsLabel *_goodsTitleLabel;
    MMFinderLiveShowBoxItemsView *_evaluationsView;
    MMFinderLiveShowBoxItemsView *_showBoxItemsView;
    MMFinderLiveGoodsCellSubInfosView *_subInfosView;
    MMFinderLiveGoodsAskedForPromotingView *_askedForPromotingView;
    MMFinderLiveGoodsPromotionReplayButton *_replayButton;
    MMUIButton *_actionButton;
    MMUIButton *_preHotButton;
    MMUIButton *_showPriceButton;
}

+ (id)showBoxItemsViewConfig;
+ (id)identifier;
+ (double)imageWidthForCellWidth:(double)arg1;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
+ (double)askedForPromotingViewHeight;
+ (double)askedForPromotingViewTopMargin;
+ (double)buttonsTopMargin;
+ (double)buttonsHeight;
+ (double)subInfosHeight;
+ (double)subInfosTopMargin;
+ (id)subInfosFont;
+ (double)tagsSpacing;
+ (id)titleFont;
+ (double)showBoxItemsViewHeight;
+ (unsigned long long)titleMaxLines;
+ (double)titleLeftMargin;
+ (struct UIEdgeInsets)padding;
+ (double)saleCountsHeight;
+ (double)titleLineHeight;
+ (struct CGSize)defaultTagSize;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *showPriceButton; // @synthesize showPriceButton=_showPriceButton;
@property(retain, nonatomic) MMUIButton *preHotButton; // @synthesize preHotButton=_preHotButton;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMFinderLiveGoodsPromotionReplayButton *replayButton; // @synthesize replayButton=_replayButton;
@property(retain, nonatomic) MMFinderLiveGoodsAskedForPromotingView *askedForPromotingView; // @synthesize askedForPromotingView=_askedForPromotingView;
@property(retain, nonatomic) MMFinderLiveGoodsCellSubInfosView *subInfosView; // @synthesize subInfosView=_subInfosView;
@property(retain, nonatomic) MMFinderLiveShowBoxItemsView *showBoxItemsView; // @synthesize showBoxItemsView=_showBoxItemsView;
@property(retain, nonatomic) MMFinderLiveShowBoxItemsView *evaluationsView; // @synthesize evaluationsView=_evaluationsView;
@property(retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UILabel *saleCountsLabel; // @synthesize saleCountsLabel=_saleCountsLabel;
@property(retain, nonatomic) MMFinderLiveAnchorGoodsCellLeftCardView *leftCardView; // @synthesize leftCardView=_leftCardView;
- (id)accessibilityAttributedLabel;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)setActionButtonPromotingState:(_Bool)arg1;
- (void)onShowPriceButtonClicked:(id)arg1;
- (void)onPreHotButtonClicked:(id)arg1;
- (void)onPromoteButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)addReplayButton;
- (void)addShowPriceButton;
- (void)addPreHotButton;
- (void)addActionButton;
- (id)createNormalButton;
- (void)onWebImageGetDifferentSize;
- (id)addShowBoxItemsView;
- (void)addGoodsTitleLabel;
- (void)addSaleCountsLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

// Remaining properties
@property(nonatomic) __weak id <MMFinderLiveAnchorGoodsCellDelegate> cellDelegate; // @dynamic cellDelegate;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

