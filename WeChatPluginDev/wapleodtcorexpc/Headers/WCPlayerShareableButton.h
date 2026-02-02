//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIImageView, UIView;

@interface WCPlayerShareableButton
{
    RichTextView *_richTitle;
    UIImageView *_indicator;
    UIView *_hightLightMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hightLightMaskView; // @synthesize hightLightMaskView=_hightLightMaskView;
@property(retain, nonatomic) UIImageView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) RichTextView *richTitle; // @synthesize richTitle=_richTitle;
- (void)setHighlighted:(_Bool)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)prepareForAccessibility;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

