//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGoodsSerialNumberView, MMFinderLiveMultiPriceView, MMWebImageView;

@interface MMFinderLiveAnchorGoodsCellLeftCardView : UIView
{
    MMWebImageView *_goodsImageView;
    MMFinderLiveMultiPriceView *_priceView;
    MMFinderLiveGoodsSerialNumberView *_serialNumberView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGoodsSerialNumberView *serialNumberView; // @synthesize serialNumberView=_serialNumberView;
@property(retain, nonatomic) MMFinderLiveMultiPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) MMWebImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)setIsPromoting:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

