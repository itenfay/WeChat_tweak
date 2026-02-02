//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSAttributedString.h>

@class NSArray, NSDictionary, NSNumber, NSParagraphStyle, NSShadow, NSString, UIColor, UIFont, YYTextBorder, YYTextDecoration, YYTextShadow;

@interface NSAttributedString (Highlighted)
+ (id)yy_attachmentStringWithEmojiImage:(id)arg1 fontSize:(double)arg2;
+ (id)yy_attachmentStringWithContent:(id)arg1 contentMode:(long long)arg2 attachmentSize:(struct CGSize)arg3 alignToFont:(id)arg4 alignment:(long long)arg5;
+ (id)yy_attachmentStringWithContent:(id)arg1 contentMode:(long long)arg2 width:(double)arg3 ascent:(double)arg4 descent:(double)arg5;
+ (CDUnknownBlockType)zz_create;
- (id)elasticsearchStyleHighlightedStringWithhighlightedColor:(id)arg1;
- (id)highlightedStringWithStartMark:(id)arg1 endMark:(id)arg2 highlightedColor:(id)arg3;
- (id)initWithFormat:(id)arg1 attributes:(id)arg2 argumentAttributes:(id)arg3;
- (id)initWithFormat:(id)arg1 attributes:(id)arg2 argumentAttributes:(id)arg3 arguments:(char *)arg4;
- (_Bool)yy_canDrawWithUIKit;
- (_Bool)yy_isSharedAttributesInAllRange;
- (struct _NSRange)yy_rangeOfAll;
- (id)yy_plainTextForRange:(struct _NSRange)arg1;
- (struct CGAffineTransform)yy_textGlyphTransformAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGAffineTransform yy_textGlyphTransform;
- (id)yy_textBackgroundBorderAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextBorder *yy_textBackgroundBorder;
- (id)yy_textBorderAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextBorder *yy_textBorder;
- (id)yy_textStrikethroughAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextDecoration *yy_textStrikethrough;
- (id)yy_textUnderlineAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextDecoration *yy_textUnderline;
- (id)yy_textInnerShadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextShadow *yy_textInnerShadow;
- (id)yy_textShadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextShadow *yy_textShadow;
- (id)yy_tabStopsAtIndex:(unsigned long long)arg1;
- (double)yy_defaultTabIntervalAtIndex:(unsigned long long)arg1;
- (float)yy_hyphenationFactorAtIndex:(unsigned long long)arg1;
- (long long)yy_baseWritingDirectionAtIndex:(unsigned long long)arg1;
- (double)yy_lineHeightMultipleAtIndex:(unsigned long long)arg1;
- (double)yy_maximumLineHeightAtIndex:(unsigned long long)arg1;
- (double)yy_minimumLineHeightAtIndex:(unsigned long long)arg1;
- (double)yy_tailIndentAtIndex:(unsigned long long)arg1;
- (double)yy_headIndentAtIndex:(unsigned long long)arg1;
- (double)yy_firstLineHeadIndentAtIndex:(unsigned long long)arg1;
- (double)yy_paragraphSpacingBeforeAtIndex:(unsigned long long)arg1;
- (double)yy_paragraphSpacingAtIndex:(unsigned long long)arg1;
- (double)yy_lineSpacingAtIndex:(unsigned long long)arg1;
- (long long)yy_lineBreakModeAtIndex:(unsigned long long)arg1;
- (long long)yy_alignmentAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *yy_tabStops;
@property(readonly, nonatomic) double yy_defaultTabInterval;
@property(readonly, nonatomic) float yy_hyphenationFactor;
@property(readonly, nonatomic) long long yy_baseWritingDirection;
@property(readonly, nonatomic) double yy_lineHeightMultiple;
@property(readonly, nonatomic) double yy_maximumLineHeight;
@property(readonly, nonatomic) double yy_minimumLineHeight;
@property(readonly, nonatomic) double yy_tailIndent;
@property(readonly, nonatomic) double yy_headIndent;
@property(readonly, nonatomic) double yy_firstLineHeadIndent;
@property(readonly, nonatomic) double yy_paragraphSpacingBefore;
@property(readonly, nonatomic) double yy_paragraphSpacing;
@property(readonly, nonatomic) double yy_lineSpacing;
@property(readonly, nonatomic) long long yy_lineBreakMode;
@property(readonly, nonatomic) long long yy_alignment;
- (id)yy_paragraphStyleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSParagraphStyle *yy_paragraphStyle;
- (id)yy_writingDirectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *yy_writingDirection;
- (id)yy_languageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *yy_language;
- (_Bool)yy_verticalGlyphFormAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool yy_verticalGlyphForm;
- (id)yy_baselineOffsetAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_baselineOffset;
- (id)yy_expansionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_expansion;
- (id)yy_obliquenessAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_obliqueness;
- (id)yy_textEffectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *yy_textEffect;
- (id)yy_ligatureAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_ligature;
- (id)yy_underlineColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_underlineColor;
- (long long)yy_underlineStyleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long yy_underlineStyle;
- (id)yy_strikethroughColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_strikethroughColor;
- (long long)yy_strikethroughStyleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long yy_strikethroughStyle;
- (id)yy_shadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSShadow *yy_shadow;
- (id)yy_strokeColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_strokeColor;
- (id)yy_strokeWidthAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_strokeWidth;
- (id)yy_backgroundColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_backgroundColor;
- (id)yy_colorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *yy_color;
- (id)yy_kernAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *yy_kern;
- (id)yy_fontAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIFont *yy_font;
@property(readonly, copy, nonatomic) NSDictionary *yy_attributes;
- (id)yy_attribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)yy_attributesAtIndex:(unsigned long long)arg1;
- (id)safeAttributedSubstringFromRange:(struct _NSRange)arg1;
@end

