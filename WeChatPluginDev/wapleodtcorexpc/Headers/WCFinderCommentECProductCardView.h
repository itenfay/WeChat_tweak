//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMECProductShowBoxItemsView, MMECSimpleShopView, MMFinderLiveMultiPriceView, MMWebImageView, UILabel;

@interface WCFinderCommentECProductCardView
{
    MMWebImageView *_imageView;
    UILabel *_titleLabel;
    MMECProductShowBoxItemsView *_showBoxItemsView;
    MMFinderLiveMultiPriceView *_priceView;
    MMECSimpleShopView *_shopView;
}

+ (double)preferHeight;
+ (double)imageToShopView;
+ (struct CGSize)imageSize;
+ (struct UIEdgeInsets)padding;
- (void).cxx_destruct;
@property(retain, nonatomic) MMECSimpleShopView *shopView; // @synthesize shopView=_shopView;
@property(retain, nonatomic) MMFinderLiveMultiPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) MMECProductShowBoxItemsView *showBoxItemsView; // @synthesize showBoxItemsView=_showBoxItemsView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;
- (void)updateWithInfo:(id)arg1;
- (void)initSubviews;
- (void)initContainer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

