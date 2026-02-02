//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UILabel;

@interface MMECSimpleShopView
{
    MMWebImageView *_platformIconView;
    MMWebImageView *_brandIconView;
    UILabel *_label;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMWebImageView *brandIconView; // @synthesize brandIconView=_brandIconView;
@property(retain, nonatomic) MMWebImageView *platformIconView; // @synthesize platformIconView=_platformIconView;
- (void)updateWithInfo:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)brandIconToLabel;
- (double)platformIconToLabel;

@end

