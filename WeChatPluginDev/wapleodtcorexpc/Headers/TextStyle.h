//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TextStyleAttributeObj, UIColor, UIFont;

@interface TextStyle
{
    UIFont *_oFont;
    NSString *_nsContent;
    UIColor *_oTextColor;
    UIColor *_oDrawColor;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
    double _shadowBlurRadius;
    _Bool _customShadow;
    _Bool _bNewLine;
    _Bool _bShowTruncatingTail;
    TextStyleAttributeObj *_textAttributeObj;
    UIColor *_oDrawHLColor;
    long long _inlineVerticalAlign;
    struct _NSRange _highlightRange;
    struct CGRect _drawFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect drawFrame; // @synthesize drawFrame=_drawFrame;
@property(nonatomic) struct _NSRange highlightRange; // @synthesize highlightRange=_highlightRange;
@property(nonatomic) long long inlineVerticalAlign; // @synthesize inlineVerticalAlign=_inlineVerticalAlign;
@property(retain) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain) UIColor *oDrawHLColor; // @synthesize oDrawHLColor=_oDrawHLColor;
@property(retain) UIColor *oDrawColor; // @synthesize oDrawColor=_oDrawColor;
@property(retain) UIColor *oTextColor; // @synthesize oTextColor=_oTextColor;
@property(retain, nonatomic) TextStyleAttributeObj *textAttributeObj; // @synthesize textAttributeObj=_textAttributeObj;
@property(nonatomic) _Bool bShowTruncatingTail; // @synthesize bShowTruncatingTail=_bShowTruncatingTail;
@property(nonatomic) _Bool bNewLine; // @synthesize bNewLine=_bNewLine;
@property(nonatomic) _Bool customShadow; // @synthesize customShadow=_customShadow;
@property(nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(retain, nonatomic) UIFont *oFont; // @synthesize oFont=_oFont;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

