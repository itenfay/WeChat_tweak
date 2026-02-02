//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, FinderWindowProductInfo, MMWebImageView, UILabel;
@protocol MMFinderLiveFeedStreamProductExpandedCardViewDelegate;

@interface MMFinderLiveFeedStreamProductExpandedCardView
{
    id <MMFinderLiveFeedStreamProductExpandedCardViewDelegate> _delegate;
    FinderWindowProductInfo *_productInfo;
    MMWebImageView *_iconImageView;
    UILabel *_descLabel;
    UILabel *_priceLabel;
    UILabel *_promotingLabel;
    CAGradientLayer *_promotingGradientLayer;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *promotingGradientLayer; // @synthesize promotingGradientLayer=_promotingGradientLayer;
@property(retain, nonatomic) UILabel *promotingLabel; // @synthesize promotingLabel=_promotingLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) __weak id <MMFinderLiveFeedStreamProductExpandedCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endExposeAction;
- (void)startExposeAction;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)onClick:(id)arg1;
- (id)priceString:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)setTaskId:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

