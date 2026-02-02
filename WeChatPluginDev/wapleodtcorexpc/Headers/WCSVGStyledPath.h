//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIBezierPath, UIColor, WCSVGGradient;

@interface WCSVGStyledPath : NSObject
{
    UIBezierPath *_path;
    UIColor *_fillColor;
    WCSVGGradient *_fillGradient;
    UIColor *_strokeColor;
    double _strokeWidth;
    NSArray *_affineTransforms;
    double _opacity;
}

- (void).cxx_destruct;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) NSArray *affineTransforms; // @synthesize affineTransforms=_affineTransforms;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) WCSVGGradient *fillGradient; // @synthesize fillGradient=_fillGradient;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (id)description;
- (void)drawStyledPathInContext:(struct CGContext *)arg1 tintColor:(id)arg2;
- (id)initWithPath:(id)arg1;

@end

