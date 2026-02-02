//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentTextAreaInfo
{
    unsigned int _showType;
    unsigned int _textAlignmentType;
    unsigned int _fontSize;
    unsigned int _maxLines;
    int _fontType;
    NSString *_content;
    long long _textVerticalAlignmentType;
    NSString *_fontColorStr;
    double _lineSpace;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) int fontType; // @synthesize fontType=_fontType;
@property(retain, nonatomic) NSString *fontColorStr; // @synthesize fontColorStr=_fontColorStr;
@property(nonatomic) unsigned int maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) unsigned int fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) long long textVerticalAlignmentType; // @synthesize textVerticalAlignmentType=_textVerticalAlignmentType;
@property(nonatomic) unsigned int textAlignmentType; // @synthesize textAlignmentType=_textAlignmentType;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

