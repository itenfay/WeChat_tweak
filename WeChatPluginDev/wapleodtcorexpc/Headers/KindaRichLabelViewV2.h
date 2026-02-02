//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaUILabel, MMDynamicColor, MMVoidCallback, NSMutableArray, NSMutableAttributedString, NSString, RichTextView;
@protocol MMKText;

@interface KindaRichLabelViewV2
{
    int _m_lines;
    float _m_textSize;
    float _m_lineSpacingFactor;
    unsigned int _m_maxLength;
    MMVoidCallback *_lastLinkCallback;
    NSString *_m_text;
    id <MMKText> _m_richText;
    NSString *_m_textFontName;
    RichTextView *_m_richTextView;
    KindaUILabel *_m_textView;
    MMDynamicColor *_m_textColor;
    long long _m_ellipsize;
    long long _m_textAlign;
    long long _m_textViewAlign;
    long long _fontStyle;
    NSMutableArray *_m_textFragmentArray;
    NSString *_m_finalText;
    NSMutableAttributedString *_m_attrStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableAttributedString *m_attrStr; // @synthesize m_attrStr=_m_attrStr;
@property(retain, nonatomic) NSString *m_finalText; // @synthesize m_finalText=_m_finalText;
@property(retain, nonatomic) NSMutableArray *m_textFragmentArray; // @synthesize m_textFragmentArray=_m_textFragmentArray;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(nonatomic) unsigned int m_maxLength; // @synthesize m_maxLength=_m_maxLength;
@property(nonatomic) long long m_textViewAlign; // @synthesize m_textViewAlign=_m_textViewAlign;
@property(nonatomic) long long m_textAlign; // @synthesize m_textAlign=_m_textAlign;
@property(nonatomic) long long m_ellipsize; // @synthesize m_ellipsize=_m_ellipsize;
@property(retain, nonatomic) MMDynamicColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(nonatomic) float m_lineSpacingFactor; // @synthesize m_lineSpacingFactor=_m_lineSpacingFactor;
@property(nonatomic) float m_textSize; // @synthesize m_textSize=_m_textSize;
@property(nonatomic) int m_lines; // @synthesize m_lines=_m_lines;
@property(retain, nonatomic) KindaUILabel *m_textView; // @synthesize m_textView=_m_textView;
@property(retain, nonatomic) RichTextView *m_richTextView; // @synthesize m_richTextView=_m_richTextView;
@property(retain, nonatomic) NSString *m_textFontName; // @synthesize m_textFontName=_m_textFontName;
@property(retain, nonatomic) id <MMKText> m_richText; // @synthesize m_richText=_m_richText;
@property(retain, nonatomic) NSString *m_text; // @synthesize m_text=_m_text;
@property(retain, nonatomic) MMVoidCallback *lastLinkCallback; // @synthesize lastLinkCallback=_lastLinkCallback;
- (id)fontWithStyle:(long long)arg1 size:(double)arg2;
- (id)linkBkgItems;
- (id)linkRanges;
- (void)didclickCharacterInLocation:(long long)arg1;
- (void)reloadFontStyle;
- (long long)getFontStyle;
- (long long)getBaselineAdjustment;
- (void)setBaselineAdjustment:(long long)arg1;
- (_Bool)getAdjustsFontSizeToFitWidth;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (long long)lineBreakMode;
- (long long)getEllipsize;
- (void)setEllipsize:(long long)arg1;
- (id)getTextFont;
- (void)setTextFont:(id)arg1;
- (id)getTextColor;
- (void)setTextColor:(id)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (id)getRichText;
- (void)insideReloadTextView;
- (id)insertWordJoinerInContent:(id)arg1;
- (void)setRichText:(id)arg1;
- (id)getText;
- (void)setText:(id)arg1;
- (float)getLineSpacingFactor;
- (void)setLineSpacingFactor:(float)arg1;
- (int)getLines;
- (void)setLines:(int)arg1;
- (id)getFinalAttrString;
- (void)setAccessibilityString:(id)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

