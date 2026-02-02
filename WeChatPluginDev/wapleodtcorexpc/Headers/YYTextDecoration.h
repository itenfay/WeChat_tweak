//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, UIColor, YYTextShadow;

@interface YYTextDecoration : NSObject
{
    long long _style;
    NSNumber *_width;
    UIColor *_color;
    YYTextShadow *_shadow;
}

+ (id)decorationWithStyle:(long long)arg1 width:(id)arg2 color:(id)arg3;
+ (id)decorationWithStyle:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YYTextShadow *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(nonatomic) long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

