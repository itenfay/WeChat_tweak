//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FLTRect : NSObject
{
    double _left;
    double _top;
    double _right;
    double _bottom;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithLeft:(double)arg1 top:(double)arg2 right:(double)arg3 bottom:(double)arg4;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double right; // @synthesize right=_right;
@property(nonatomic) double top; // @synthesize top=_top;
@property(nonatomic) double left; // @synthesize left=_left;
- (id)toList;

@end

