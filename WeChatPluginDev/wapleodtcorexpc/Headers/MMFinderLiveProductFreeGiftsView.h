//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, UILabel;

@interface MMFinderLiveProductFreeGiftsView
{
    NSArray *_imageViews;
    UILabel *_label;
}

+ (double)preferHeightForGoods:(id)arg1 inWidth:(double)arg2;
+ (double)imageWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithGoods:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

