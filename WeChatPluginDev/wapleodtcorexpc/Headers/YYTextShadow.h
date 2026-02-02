//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface YYTextShadow : NSObject
{
    int _blendMode;
    UIColor *_color;
    double _radius;
    YYTextShadow *_subShadow;
    struct CGSize _offset;
}

+ (id)shadowWithNSShadow:(id)arg1;
+ (id)shadowWithColor:(id)arg1 offset:(struct CGSize)arg2 radius:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) YYTextShadow *subShadow; // @synthesize subShadow=_subShadow;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)nsShadow;

@end

