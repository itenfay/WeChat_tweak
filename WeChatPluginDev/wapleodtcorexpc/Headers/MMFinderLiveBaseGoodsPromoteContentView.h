//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGoodsItem, MMFinderLiveMultiPriceView, MMFinderLiveShowBoxItemsGroupsView, MMFinderLiveTagsLabel, MMUIButton, MMWebImageView, NSString, UIImageView;
@protocol MMFinderLiveBaseGoodsPromoteContentViewDelegate;

@interface MMFinderLiveBaseGoodsPromoteContentView : UIView
{
    MMWebImageView *_goodsImageView;
    MMUIButton *_actionButton;
    UIImageView *_withFreeGiftTagView;
    MMFinderLiveShowBoxItemsGroupsView *_showBoxItemsView;
    id <MMFinderLiveBaseGoodsPromoteContentViewDelegate> _delegate;
    MMFinderLiveGoodsItem *_goods;
    UIView *_backgroundView;
    MMFinderLiveTagsLabel *_goodsTitleLabel;
    MMFinderLiveMultiPriceView *_priceView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveMultiPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMFinderLiveGoodsItem *goods; // @synthesize goods=_goods;
@property(nonatomic) __weak id <MMFinderLiveBaseGoodsPromoteContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveShowBoxItemsGroupsView *showBoxItemsView; // @synthesize showBoxItemsView=_showBoxItemsView;
@property(retain, nonatomic) UIImageView *withFreeGiftTagView; // @synthesize withFreeGiftTagView=_withFreeGiftTagView;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMWebImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (void)startHideAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (void)startDisplayAnimation:(double)arg1;
- (void)onWebImageGetDifferentSize;
- (id)visibleShowBoxItems;
- (void)onActionButtonClicked:(id)arg1;
- (void)refreshData;
- (void)fillWithGoods:(id)arg1;
- (void)layoutRightTop;
- (void)layoutRightBottom;
- (void)layoutLeft;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

