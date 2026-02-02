//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMCustomerOrderInfo, MMWebImageView, NSArray, SkuInfo, UILabel;

@interface MMOrderCenterTableViewCellSkuListItem : UIView
{
    SkuInfo *_skuInfo;
    MMCustomerOrderInfo *_order;
    MMWebImageView *_imageView;
    NSArray *_tagViews;
    NSArray *_featureViews;
    UILabel *_nameView;
    UILabel *_attributeView;
    UILabel *_priceView;
    UILabel *_countView;
    UILabel *_statusView;
    UILabel *_deliveryInfoView;
}

+ (id)priceWordingForSkuInfo:(id)arg1 order:(id)arg2;
+ (id)countWordingForSkuInfo:(id)arg1;
+ (id)nameViewTextForSkuInfo:(id)arg1;
+ (double)widthOfOrderLabels:(id)arg1 maxWidth:(double)arg2;
+ (double)preferHeightForSkuInfo:(id)arg1 order:(id)arg2 width:(double)arg3;
+ (id)nameAttributedStringForName:(id)arg1 width:(double)arg2 tagsWidth:(double)arg3;
+ (id)countFont;
+ (id)priceFont;
+ (id)statusFont;
+ (double)deliveryInfoViewHeight;
+ (double)attributeViewHeight;
+ (id)textTagFont;
+ (id)nameFont;
+ (double)nameLineHeight;
+ (double)tagHeight;
+ (struct CGSize)imageTagSize;
+ (double)imageHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *deliveryInfoView; // @synthesize deliveryInfoView=_deliveryInfoView;
@property(retain, nonatomic) UILabel *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) UILabel *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) UILabel *attributeView; // @synthesize attributeView=_attributeView;
@property(retain, nonatomic) UILabel *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) NSArray *featureViews; // @synthesize featureViews=_featureViews;
@property(retain, nonatomic) NSArray *tagViews; // @synthesize tagViews=_tagViews;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMCustomerOrderInfo *order; // @synthesize order=_order;
@property(retain, nonatomic) SkuInfo *skuInfo; // @synthesize skuInfo=_skuInfo;
- (_Bool)isAccessibilityElement;
- (void)updateWithSkuInfo:(id)arg1 order:(id)arg2;
- (void)useFeatureViews:(id)arg1;
- (void)useTagViews:(id)arg1;
- (id)viewsOfOrderLabels:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)rightForLayoutTags:(id)arg1 left:(double)arg2 maxRight:(double)arg3 spacing:(double)arg4 centerY:(double)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

