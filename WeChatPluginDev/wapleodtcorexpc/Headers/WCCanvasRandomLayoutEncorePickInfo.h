//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasRandomLayoutEncorePickInfo
{
    NSString *_titleIconUrl;
    NSString *_titlePrefix;
    NSString *_titleSuffix;
    NSString *_buttonIconUrl;
    NSString *_buttonTitle;
    NSString *_buttonTitleColor;
    NSString *_buttonBgColor;
    double _buttonCornerRadius;
    NSString *_doneTitle;
    NSString *_doneButtonTitle;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(retain, nonatomic) NSString *doneTitle; // @synthesize doneTitle=_doneTitle;
@property(nonatomic) double buttonCornerRadius; // @synthesize buttonCornerRadius=_buttonCornerRadius;
@property(retain, nonatomic) NSString *buttonBgColor; // @synthesize buttonBgColor=_buttonBgColor;
@property(retain, nonatomic) NSString *buttonTitleColor; // @synthesize buttonTitleColor=_buttonTitleColor;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *buttonIconUrl; // @synthesize buttonIconUrl=_buttonIconUrl;
@property(retain, nonatomic) NSString *titleSuffix; // @synthesize titleSuffix=_titleSuffix;
@property(retain, nonatomic) NSString *titlePrefix; // @synthesize titlePrefix=_titlePrefix;
@property(retain, nonatomic) NSString *titleIconUrl; // @synthesize titleIconUrl=_titleIconUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

