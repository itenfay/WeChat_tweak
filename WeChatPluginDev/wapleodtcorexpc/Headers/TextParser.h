//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, TextStyleAttributeObj, UIColor, UIFont;

@interface TextParser
{
    UIFont *_font;
    UIColor *_color;
    UIColor *_highlightColor;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
    double _shadowBlurRadius;
    _Bool _customShadow;
    TextStyleAttributeObj *_textAttributeObj;
    NSMutableDictionary *m_dictWordLen;
    int m_maxAlphaWordLen;
    struct CGSize m_chineseWordSize;
    _Bool _lineBreakByClipping;
    long long _inlineVerticalAlign;
    NSMutableArray *_currentStyles;
}

+ (void)initialize;
+ (id)newInstance;
+ (id)getAlphaSet;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *currentStyles; // @synthesize currentStyles=_currentStyles;
@property(nonatomic) long long inlineVerticalAlign; // @synthesize inlineVerticalAlign=_inlineVerticalAlign;
@property(nonatomic) _Bool lineBreakByClipping; // @synthesize lineBreakByClipping=_lineBreakByClipping;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) TextStyleAttributeObj *textAttributeObj; // @synthesize textAttributeObj=_textAttributeObj;
@property(nonatomic) _Bool customShadow; // @synthesize customShadow=_customShadow;
@property(nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)attributeStringForContent:(id)arg1;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (void)markLastStyleAsEnd;
- (id)charWrappingTruncated:(id)arg1 limitWidth:(double)arg2 origin:(struct CGPoint)arg3 location:(double)arg4;
- (id)parseTextForStyles:(id)arg1 withParserPosition:(struct _NSParserPosition *)arg2;
- (long long)FindtheIndexToFillFullLine:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 width:(long long)arg4 withFont:(id)arg5 withError:(long long)arg6;
- (id)arrayWithWordSplit:(id)arg1 wordWrapping:(_Bool)arg2;
- (id)arrayWithWordSplit:(id)arg1;
- (_Bool)isChangeLineChar:(unsigned short)arg1;
- (_Bool)useWordWrapping;
- (void)addAlphaWord:(id)arg1 ToSplitArray:(id)arg2;
- (id)getStyle;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)substringOf:(id)arg1 WithRange:(struct _NSRange)arg2;
- (struct CGSize)calcWordSize:(id)arg1;
- (id)init;

@end

