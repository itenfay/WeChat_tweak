//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAShapeLayer, UIColor;

@interface ZZSeparatorModel : NSObject
{
    CAShapeLayer *_layer;
    UIColor *_color;
    long long _position;
    double _borderWidth;
    double _offset;
    double _begin;
    double _end;
    double _length;
}

- (void).cxx_destruct;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double begin; // @synthesize begin=_begin;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) CAShapeLayer *layer; // @synthesize layer=_layer;
- (id)init;

@end

