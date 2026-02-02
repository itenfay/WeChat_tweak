//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface BrandShopWindowButton : NSObject
{
    UIImageView *_shopWindowButtonTailIcon;
    double _titleTailIconPadding;
}

@property(nonatomic) double titleTailIconPadding; // @synthesize titleTailIconPadding=_titleTailIconPadding;
@property(retain, nonatomic) UIImageView *shopWindowButtonTailIcon; // @synthesize shopWindowButtonTailIcon=_shopWindowButtonTailIcon;
- (void)layoutSubviews;

@end

