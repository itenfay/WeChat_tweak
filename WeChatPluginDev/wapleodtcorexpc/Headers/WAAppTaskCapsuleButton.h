//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImage, UIView;

@interface WAAppTaskCapsuleButton
{
    _Bool _isDisabled;
    UIView *_hightlightedView;
    UIImage *_icon;
    UIImage *_iconWhenDisabled;
}

+ (id)genRoundedCapsuleButton;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconWhenDisabled; // @synthesize iconWhenDisabled=_iconWhenDisabled;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(retain, nonatomic) UIView *hightlightedView; // @synthesize hightlightedView=_hightlightedView;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateIcon;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

