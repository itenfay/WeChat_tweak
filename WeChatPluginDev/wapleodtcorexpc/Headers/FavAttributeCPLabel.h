//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, UIFont;

@interface FavAttributeCPLabel
{
    UIFont *m_font;
    UIColor *m_textColor;
    double _lineSpace;
    UIColor *_highlightColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;
- (void)internalSetLineSpace;
- (void)internalSetText;
- (void)formAttributedString;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

