//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAShapeLayer, UIColor;

@interface ZZCornerModel : NSObject
{
    CAShapeLayer *_layer;
    long long _position;
    double _radius;
    UIColor *_color;
    double _borderWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(readonly, nonatomic) CAShapeLayer *layer; // @synthesize layer=_layer;

@end

