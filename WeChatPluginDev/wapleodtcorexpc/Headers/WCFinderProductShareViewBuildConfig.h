//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveMultiPriceViewConfig, MMFinderLiveShowBoxItemsViewConfig, UIFont;

@interface WCFinderProductShareViewBuildConfig : NSObject
{
    double _horizontalMargin;
    double _titleToImage;
    double _tagHeight;
    double _productTagRight;
    double _titleLineHeight;
    UIFont *_titleFont;
    double _titleToNext;
    MMFinderLiveShowBoxItemsViewConfig *_showBoxItemsViewConfig;
    double _showBoxItemsViewHeight;
    double _showBoxItemsViewToNext;
    MMFinderLiveMultiPriceViewConfig *_priceViewConfig;
    double _bottomToPrice;
    double _bottomHeight;
    double _logoWidth;
    double _wxShopLogoWidth;
    double _brandLogoWidth;
    double _bottomLogoLabelPadding;
    UIFont *_shopLabelFont;
}

- (void).cxx_destruct;
@property(nonatomic) UIFont *shopLabelFont; // @synthesize shopLabelFont=_shopLabelFont;
@property(nonatomic) double bottomLogoLabelPadding; // @synthesize bottomLogoLabelPadding=_bottomLogoLabelPadding;
@property(nonatomic) double brandLogoWidth; // @synthesize brandLogoWidth=_brandLogoWidth;
@property(nonatomic) double wxShopLogoWidth; // @synthesize wxShopLogoWidth=_wxShopLogoWidth;
@property(nonatomic) double logoWidth; // @synthesize logoWidth=_logoWidth;
@property(nonatomic) double bottomHeight; // @synthesize bottomHeight=_bottomHeight;
@property(nonatomic) double bottomToPrice; // @synthesize bottomToPrice=_bottomToPrice;
@property(retain, nonatomic) MMFinderLiveMultiPriceViewConfig *priceViewConfig; // @synthesize priceViewConfig=_priceViewConfig;
@property(nonatomic) double showBoxItemsViewToNext; // @synthesize showBoxItemsViewToNext=_showBoxItemsViewToNext;
@property(nonatomic) double showBoxItemsViewHeight; // @synthesize showBoxItemsViewHeight=_showBoxItemsViewHeight;
@property(retain, nonatomic) MMFinderLiveShowBoxItemsViewConfig *showBoxItemsViewConfig; // @synthesize showBoxItemsViewConfig=_showBoxItemsViewConfig;
@property(nonatomic) double titleToNext; // @synthesize titleToNext=_titleToNext;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double titleLineHeight; // @synthesize titleLineHeight=_titleLineHeight;
@property(nonatomic) double productTagRight; // @synthesize productTagRight=_productTagRight;
@property(nonatomic) double tagHeight; // @synthesize tagHeight=_tagHeight;
@property(nonatomic) double titleToImage; // @synthesize titleToImage=_titleToImage;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;

@end

