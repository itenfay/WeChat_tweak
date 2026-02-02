//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdFullCardGestureInfo : NSObject
{
    unsigned long long _startTime;
    unsigned long long _endTime;
    NSString *_points;
    double _distance;
    NSString *_color;
    NSArray *_pointsList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pointsList; // @synthesize pointsList=_pointsList;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *points; // @synthesize points=_points;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (id)getTargetCGPointsArray;
- (id)getTargetCGPointsArrayList;
- (_Bool)isValid;
- (id)getLineColor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

