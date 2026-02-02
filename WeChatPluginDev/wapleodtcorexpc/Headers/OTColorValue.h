//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OTColorValue : NSObject
{
    double _red;
    double _green;
    double _blue;
    double _weight;
}

+ (id)colorValueWith:(id)arg1;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double red; // @synthesize red=_red;
- (id)color;
- (void)meanWithColorValue:(id)arg1;
- (double)distanceWith:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;

@end

