//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OVCTextLayerMetadata : NSObject
{
    int _layerID;
    float _fontSize;
    float _textStrokeWidth;
    float _textShadowBlurRadius;
    float _characterSpacing;
    float _characterWidthMultiple;
    float _backgroundCornerRadius;
    float _backgroundStrokeWidth;
    NSString *_textTemplate;
    NSString *_text;
    NSArray *_textBlockMetadatas;
    NSString *_contentLocaleID;
    NSString *_fontName;
    NSString *_textFill;
    NSString *_textStrokeFill;
    NSString *_textShadowFill;
    unsigned long long _textParagraphType;
    unsigned long long _textAlignment;
    NSString *_backgroundColor;
    NSString *_backgroundStrokeColor;
    struct CGVector _shearDegrees;
    struct CGVector _textShadowOffset;
    struct UIEdgeInsets _backgroundEdgeInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets backgroundEdgeInsets; // @synthesize backgroundEdgeInsets=_backgroundEdgeInsets;
@property(readonly, nonatomic) float backgroundStrokeWidth; // @synthesize backgroundStrokeWidth=_backgroundStrokeWidth;
@property(readonly, nonatomic) NSString *backgroundStrokeColor; // @synthesize backgroundStrokeColor=_backgroundStrokeColor;
@property(readonly, nonatomic) float backgroundCornerRadius; // @synthesize backgroundCornerRadius=_backgroundCornerRadius;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) float characterWidthMultiple; // @synthesize characterWidthMultiple=_characterWidthMultiple;
@property(readonly, nonatomic) float characterSpacing; // @synthesize characterSpacing=_characterSpacing;
@property(readonly, nonatomic) unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) unsigned long long textParagraphType; // @synthesize textParagraphType=_textParagraphType;
@property(readonly, nonatomic) float textShadowBlurRadius; // @synthesize textShadowBlurRadius=_textShadowBlurRadius;
@property(readonly, nonatomic) struct CGVector textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(readonly, nonatomic) NSString *textShadowFill; // @synthesize textShadowFill=_textShadowFill;
@property(readonly, nonatomic) float textStrokeWidth; // @synthesize textStrokeWidth=_textStrokeWidth;
@property(readonly, nonatomic) NSString *textStrokeFill; // @synthesize textStrokeFill=_textStrokeFill;
@property(readonly, nonatomic) NSString *textFill; // @synthesize textFill=_textFill;
@property(readonly, nonatomic) struct CGVector shearDegrees; // @synthesize shearDegrees=_shearDegrees;
@property(readonly, nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, nonatomic) NSString *contentLocaleID; // @synthesize contentLocaleID=_contentLocaleID;
@property(readonly, nonatomic) NSArray *textBlockMetadatas; // @synthesize textBlockMetadatas=_textBlockMetadatas;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSString *textTemplate; // @synthesize textTemplate=_textTemplate;
@property(readonly, nonatomic) int layerID; // @synthesize layerID=_layerID;
- (id)initWithLayerID:(int)arg1 textTemplate:(id)arg2 text:(id)arg3 textBlockMetadatas:(id)arg4 contentLocaleID:(id)arg5 fontName:(id)arg6 fontSize:(float)arg7 shearDegrees:(struct CGVector)arg8 textFill:(id)arg9 textStrokeFill:(id)arg10 textStrokeWidth:(float)arg11 textShadowFill:(id)arg12 textShadowOffset:(struct CGVector)arg13 textShadowBlurRadius:(float)arg14 textParagraphType:(unsigned long long)arg15 textAlignment:(unsigned long long)arg16 characterSpacing:(float)arg17 characterWidthMultiple:(float)arg18 backgroundColor:(id)arg19 backgroundCornerRadius:(float)arg20 backgroundStrokeColor:(id)arg21 backgroundStrokeWidth:(float)arg22 backgroundEdgeInsets:(struct UIEdgeInsets)arg23;

@end

