//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, UIGestureRecognizer;

@interface BrandProfileCeilingTableView
{
    UIGestureRecognizer *_otherGestureRecognizer;
    CAGradientLayer *_backgroundLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) __weak UIGestureRecognizer *otherGestureRecognizer; // @synthesize otherGestureRecognizer=_otherGestureRecognizer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)reloadGradientLayer;
- (void)layoutSubviews;
- (void)initGackgroundLayer;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

@end

