//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveMultiPriceViewConfig, NSString, UILabel;

@interface MMFinderLiveMultiPriceView : UIView
{
    MMFinderLiveMultiPriceViewConfig *_config;
    NSString *_currentPriceDescription;
    unsigned long long _currentPrice;
    NSString *_currentPriceWording;
    NSString *_currentPriceSuffix;
    unsigned long long _listPrice;
    NSString *_priceSuffixDescription;
    UILabel *_currentPriceLabel;
    UILabel *_currentPriceSuffixLabel;
    UILabel *_currentPriceDescriptionLabel;
    UILabel *_listPriceLabel;
    UILabel *_priceSuffixDescriptionLabel;
}

+ (double)heightForNormalStateWithConfig:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *priceSuffixDescriptionLabel; // @synthesize priceSuffixDescriptionLabel=_priceSuffixDescriptionLabel;
@property(retain, nonatomic) UILabel *listPriceLabel; // @synthesize listPriceLabel=_listPriceLabel;
@property(retain, nonatomic) UILabel *currentPriceDescriptionLabel; // @synthesize currentPriceDescriptionLabel=_currentPriceDescriptionLabel;
@property(retain, nonatomic) UILabel *currentPriceSuffixLabel; // @synthesize currentPriceSuffixLabel=_currentPriceSuffixLabel;
@property(retain, nonatomic) UILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
@property(copy, nonatomic) NSString *priceSuffixDescription; // @synthesize priceSuffixDescription=_priceSuffixDescription;
@property(nonatomic) unsigned long long listPrice; // @synthesize listPrice=_listPrice;
@property(copy, nonatomic) NSString *currentPriceSuffix; // @synthesize currentPriceSuffix=_currentPriceSuffix;
@property(copy, nonatomic) NSString *currentPriceWording; // @synthesize currentPriceWording=_currentPriceWording;
@property(nonatomic) unsigned long long currentPrice; // @synthesize currentPrice=_currentPrice;
@property(copy, nonatomic) NSString *currentPriceDescription; // @synthesize currentPriceDescription=_currentPriceDescription;
@property(retain, nonatomic) MMFinderLiveMultiPriceViewConfig *config; // @synthesize config=_config;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addObserves;
- (void)initSubViews;
- (double)leftSpacingOf:(id)arg1;
- (void)layoutSubviewsHorizontal;
- (void)layoutSubviewsVertical;
- (void)layoutSubviews;
- (void)updateSubviewsIsHiddenForData;
- (void)updateUI;
- (id)initWithConfig:(id)arg1;
- (void)updateWithECProductCard:(id)arg1;
- (id)accessibilityAttributedLabel;
- (void)updateWithProductShareItem:(id)arg1;
- (void)updateWithGoods:(id)arg1;
- (void)prepareForReuse;

@end

