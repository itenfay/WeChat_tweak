//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJDashLineStyle, UIColor;

@interface OMJHandleBoxBorderStyle : NSObject
{
    UIColor *_strokeColor;
    double _strokeWidth;
    UIColor *_shadowColor;
    double _shadowWidth;
    OMJDashLineStyle *_dashLineStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OMJDashLineStyle *dashLineStyle; // @synthesize dashLineStyle=_dashLineStyle;
@property(nonatomic) double shadowWidth; // @synthesize shadowWidth=_shadowWidth;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithStrokeColor:(id)arg1 strokeWidth:(double)arg2 shadowColor:(id)arg3 shadowWidth:(double)arg4 dashLineStyle:(id)arg5;
- (id)initWithStrokeColor:(id)arg1 strokeWidth:(double)arg2 shadowColor:(id)arg3 shadowWidth:(double)arg4;

@end

