//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCanvasComponentSidebarInfo
{
    NSString *_textColor;
    double _cornerRadius;
    NSString *_bgColor;
    double _bgColorAlpha;
    NSArray *_layoutItems;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *layoutItems; // @synthesize layoutItems=_layoutItems;
@property(nonatomic) double bgColorAlpha; // @synthesize bgColorAlpha=_bgColorAlpha;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

