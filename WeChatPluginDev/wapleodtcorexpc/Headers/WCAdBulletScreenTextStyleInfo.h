//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdBulletScreenTextStyleInfo : NSObject
{
    double _fontSize;
    double _fontSizeMax;
    NSString *_color;
    NSString *_fontWeight;
    NSString *_backgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) double fontSizeMax; // @synthesize fontSizeMax=_fontSizeMax;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

