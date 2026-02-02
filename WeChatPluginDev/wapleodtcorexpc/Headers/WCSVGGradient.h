//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCSVGGradient : NSObject
{
    NSString *_gradientId;
    long long _type;
    double _radius;
    NSMutableArray *_stops;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    struct CGAffineTransform _gradientTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *stops; // @synthesize stops=_stops;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) struct CGAffineTransform gradientTransform; // @synthesize gradientTransform=_gradientTransform;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *gradientId; // @synthesize gradientId=_gradientId;
- (void)applyGradientToStyledPath:(id)arg1 tintColor:(id)arg2 inContext:(struct CGContext *)arg3;
- (struct CGGradient *)gradientFromTintColor:(id)arg1;
- (void)addStopWithAttributes:(id)arg1;
- (id)initWithType:(long long)arg1 attributes:(id)arg2;

@end

