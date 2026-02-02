//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, YYTextShadow;

@interface YYTextBorder : NSObject
{
    int _lineJoin;
    long long _lineStyle;
    double _strokeWidth;
    UIColor *_strokeColor;
    double _cornerRadius;
    YYTextShadow *_shadow;
    UIColor *_fillColor;
    struct UIEdgeInsets _insets;
}

+ (id)borderWithFillColor:(id)arg1 cornerRadius:(double)arg2;
+ (id)borderWithLineStyle:(long long)arg1 lineWidth:(double)arg2 strokeColor:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) YYTextShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) long long lineStyle; // @synthesize lineStyle=_lineStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

