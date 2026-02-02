//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasAbilitySliderInfo
{
    NSString *_label;
    double _value;
    double _fontSize;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    NSString *_foregroundImage;
    NSString *_backgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(retain, nonatomic) NSString *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

