//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageTextBgView, UIColor, WCEditVideoColorConfig;

@interface EditImageTextView
{
    unsigned long long _textStyle;
    UIColor *_mainColor;
    double _scale;
    double _cornerRadius;
    EditImageTextBgView *_textBgView;
    WCEditVideoColorConfig *_colorConfig;
    struct UIEdgeInsets _minimumContentInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCEditVideoColorConfig *colorConfig; // @synthesize colorConfig=_colorConfig;
@property(retain, nonatomic) EditImageTextBgView *textBgView; // @synthesize textBgView=_textBgView;
@property(nonatomic) struct UIEdgeInsets minimumContentInsets; // @synthesize minimumContentInsets=_minimumContentInsets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *mainColor; // @synthesize mainColor=_mainColor;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
- (void)updateBackgroundRects;
- (void)textChanged:(id)arg1;
@property(nonatomic) double highlightAlpha;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupEmotionColorConfig;
- (void)recenter;
- (void)layoutSubviews;

@end

