//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveShopShelfHintInfo, MMWebImageView, UILabel;

@interface MMFinderLiveShopShelfTipsView
{
    MMFinderLiveShopShelfHintInfo *_info;
    UILabel *_label;
    MMWebImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMFinderLiveShopShelfHintInfo *info; // @synthesize info=_info;
- (double)selfCornerRadius;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)imageSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

