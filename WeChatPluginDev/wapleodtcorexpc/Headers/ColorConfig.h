//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ColorConfig : NSObject
{
    unsigned int _startSecond;
    unsigned int _endSecond;
    union _GLKVector4 _color1;
    union _GLKVector4 _color2;
    union _GLKVector4 _color3;
    union _GLKVector4 _bgColor1;
    union _GLKVector4 _bgColor2;
    union _GLKVector4 _color1InDarkMode;
    union _GLKVector4 _color2InDarkMode;
    union _GLKVector4 _color3InDarkMode;
    union _GLKVector4 _bgColor1InDarkMode;
    union _GLKVector4 _bgColor2InDarkMode;
}

@property(nonatomic) unsigned int endSecond; // @synthesize endSecond=_endSecond;
@property(nonatomic) unsigned int startSecond; // @synthesize startSecond=_startSecond;
@property(nonatomic) union _GLKVector4 bgColor2InDarkMode; // @synthesize bgColor2InDarkMode=_bgColor2InDarkMode;
@property(nonatomic) union _GLKVector4 bgColor1InDarkMode; // @synthesize bgColor1InDarkMode=_bgColor1InDarkMode;
@property(nonatomic) union _GLKVector4 color3InDarkMode; // @synthesize color3InDarkMode=_color3InDarkMode;
@property(nonatomic) union _GLKVector4 color2InDarkMode; // @synthesize color2InDarkMode=_color2InDarkMode;
@property(nonatomic) union _GLKVector4 color1InDarkMode; // @synthesize color1InDarkMode=_color1InDarkMode;
@property(nonatomic) union _GLKVector4 bgColor2; // @synthesize bgColor2=_bgColor2;
@property(nonatomic) union _GLKVector4 bgColor1; // @synthesize bgColor1=_bgColor1;
@property(nonatomic) union _GLKVector4 color3; // @synthesize color3=_color3;
@property(nonatomic) union _GLKVector4 color2; // @synthesize color2=_color2;
@property(nonatomic) union _GLKVector4 color1; // @synthesize color1=_color1;

@end

