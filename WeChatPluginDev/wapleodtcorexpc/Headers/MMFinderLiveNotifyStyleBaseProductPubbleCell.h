//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnyPromise, MMWebImageView, UIImageView, UILabel;

@interface MMFinderLiveNotifyStyleBaseProductPubbleCell
{
    MMWebImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UIImageView *_iconView;
    AnyPromise *_getProductInfo;
}

+ (double)preferDisplayDurationWithComment:(id)arg1;
+ (struct CGSize)preferSizeForCellFrame:(id)arg1;
+ (id)font;
+ (double)horizontalMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) AnyPromise *getProductInfo; // @synthesize getProductInfo=_getProductInfo;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)onWillOpenProduct:(id)arg1;
- (void)onTap;
- (void)didMoveToWindow;
- (double)priceRightMargin;
- (double)rightIconLeftMargin;
- (id)hotSaleInfo;
- (void)layoutUI;
- (id)initWithCellFrame:(id)arg1;

@end

