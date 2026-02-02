//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGoodsSerialNumberView, MMFinderLiveTagsLabel, MMWebImageView, NSString, UILabel;

@interface MMFinderLiveGoodsSimpifiedCell
{
    MMFinderLiveTagsLabel *_goodsTitleLabel;
    MMWebImageView *_goodsImageView;
    MMFinderLiveGoodsSerialNumberView *_serialNumberView;
    UILabel *_descLabel;
    UILabel *_priceLabel;
}

+ (id)identifier;
+ (double)imageWidthForCellWidth:(double)arg1;
+ (double)cellHeightWithModel:(id)arg1 cellWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMFinderLiveGoodsSerialNumberView *serialNumberView; // @synthesize serialNumberView=_serialNumberView;
@property(retain, nonatomic) MMWebImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) MMFinderLiveTagsLabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
- (id)accessibilityAttributedLabel;
- (id)displayPriceWording;
- (void)updateWithGoodsViewModel:(id)arg1 isCurAskedProduct:(_Bool)arg2;
- (void)layoutSubviews;
- (void)onWebImageGetDifferentSize;
- (void)addPriceLabel;
- (void)addDescLabel;
- (void)addGoodsTitleLabel;
- (void)addGoodsImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

