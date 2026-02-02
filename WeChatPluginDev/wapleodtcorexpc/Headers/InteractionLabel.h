//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor;

@interface InteractionLabel
{
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    id _target;
    SEL _selAction;
    _Bool _bIsTouchesEnded;
    struct UIEdgeInsets _touchInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)becomeHighlightedBackgroundColor;
- (void)becomeNormalBackgroundColor;
- (void)initMembers;

@end

