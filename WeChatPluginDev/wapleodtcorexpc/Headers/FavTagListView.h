//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIColor;
@protocol FavTagEditViewDelegate;

@interface FavTagListView
{
    NSMutableArray *m_arrTagButtons;
    UIColor *m_defaultButtonTextColor;
    id <FavTagEditViewDelegate> m_delegate;
    _Bool _alignCenter;
    double _buttonCornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double buttonCornerRadius; // @synthesize buttonCornerRadius=_buttonCornerRadius;
@property(nonatomic) _Bool alignCenter; // @synthesize alignCenter=_alignCenter;
@property(nonatomic) __weak id <FavTagEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)longPressBtn:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)makeButtonCenter;
- (struct CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)unHighLightAll;
- (void)highLightButtons:(id)arg1;
- (void)setHighLightKeyword:(id)arg1;
- (void)setButtonHighLight:(_Bool)arg1 named:(id)arg2;
- (id)addButton:(id)arg1;
- (void)setButtonBackground:(id)arg1 chosen:(_Bool)arg2 cornerRadius:(double)arg3;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithTags:(id)arg1 alignCenter:(_Bool)arg2;
- (id)initWithTags:(id)arg1;

@end

