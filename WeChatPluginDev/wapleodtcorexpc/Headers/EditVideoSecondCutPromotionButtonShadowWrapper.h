//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, EditVideoSecondCutPromotionButton;

@interface EditVideoSecondCutPromotionButtonShadowWrapper
{
    EditVideoSecondCutPromotionButton *_button;
    CAGradientLayer *_backgroundLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) EditVideoSecondCutPromotionButton *button; // @synthesize button=_button;
- (void)updateEditVideoEntrance:(unsigned long long)arg1;
- (void)updateEntryType:(long long)arg1;
- (long long)getCurrentEntryType;
- (void)setButtonClickAction:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (void)_initBackgroundLayer;
- (void)_initButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

