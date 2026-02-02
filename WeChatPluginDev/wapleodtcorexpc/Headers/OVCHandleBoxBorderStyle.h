//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface OVCHandleBoxBorderStyle : NSObject
{
    UIColor *_strokeColor;
    double _strokeWidth;
    UIColor *_shadowColor;
    double _shadowWidth;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double shadowWidth; // @synthesize shadowWidth=_shadowWidth;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (id)description;
- (id)initWithStrokeColor:(id)arg1 strokeWidth:(double)arg2 shadowColor:(id)arg3 shadowWidth:(double)arg4;

@end

