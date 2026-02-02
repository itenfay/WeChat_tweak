//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor;

@interface KindaUIButton
{
    _Bool _enableHignLight;
    UIColor *_m_highlighBorderColor;
    UIColor *_m_disabledBorderColor;
    UIColor *_m_normalBorderColor;
    UIColor *_normalTextColor;
    UIColor *_normalBackgroudColor;
    UIColor *_disabledTextColor;
    UIColor *_disabledBackgroudColor;
    long long _m_verticalPadding;
    long long _m_horizontalPadding;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_horizontalPadding; // @synthesize m_horizontalPadding=_m_horizontalPadding;
@property(nonatomic) long long m_verticalPadding; // @synthesize m_verticalPadding=_m_verticalPadding;
@property(nonatomic) _Bool enableHignLight; // @synthesize enableHignLight=_enableHignLight;
@property(retain, nonatomic) UIColor *disabledBackgroudColor; // @synthesize disabledBackgroudColor=_disabledBackgroudColor;
@property(retain, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
@property(retain, nonatomic) UIColor *normalBackgroudColor; // @synthesize normalBackgroudColor=_normalBackgroudColor;
@property(retain, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(retain, nonatomic) UIColor *m_normalBorderColor; // @synthesize m_normalBorderColor=_m_normalBorderColor;
@property(retain, nonatomic) UIColor *m_disabledBorderColor; // @synthesize m_disabledBorderColor=_m_disabledBorderColor;
@property(retain, nonatomic) UIColor *m_highlighBorderColor; // @synthesize m_highlighBorderColor=_m_highlighBorderColor;
- (void)setGreenStyle;
- (void)setWeakStyle;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (unsigned long long)colorStyle:(id)arg1;
- (id)getSuperViewBackgroundColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

