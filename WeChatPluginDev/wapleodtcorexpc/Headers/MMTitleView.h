//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIFont, UIGestureRecognizer;
@protocol MMTitleViewDelegate;

@interface MMTitleView
{
    _Bool _forceAccessibilityElementDisabled;
    id <MMTitleViewDelegate> _delegate;
    long long _aligment;
    UIFont *_titleFont;
    UIGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) long long aligment; // @synthesize aligment=_aligment;
@property(nonatomic) _Bool forceAccessibilityElementDisabled; // @synthesize forceAccessibilityElementDisabled=_forceAccessibilityElementDisabled;
@property(nonatomic) __weak id <MMTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapAtTitleView:(id)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)getSubTitle;
- (id)getTitle;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

