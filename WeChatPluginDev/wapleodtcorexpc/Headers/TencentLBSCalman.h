//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TencentLBSCalman : NSObject
{
    int _minAccuracy;
    float _Q_metres_per_second;
    double _lat;
    double _lng;
    double _q;
    double _r;
    double _x;
    double _p;
    long long _TimeStamp_milliseconds;
    double _variance;
}

@property(nonatomic) double variance; // @synthesize variance=_variance;
@property(nonatomic) long long TimeStamp_milliseconds; // @synthesize TimeStamp_milliseconds=_TimeStamp_milliseconds;
@property(nonatomic) float Q_metres_per_second; // @synthesize Q_metres_per_second=_Q_metres_per_second;
@property(nonatomic) double p; // @synthesize p=_p;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double r; // @synthesize r=_r;
@property(nonatomic) double q; // @synthesize q=_q;
@property(nonatomic) int minAccuracy; // @synthesize minAccuracy=_minAccuracy;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
- (void)calmanLocationPredictWithLat:(double)arg1 lng:(double)arg2 accuracy:(double)arg3 timestamp:(long long)arg4 speed:(double)arg5;
- (double)calmanDistancePredict:(double)arg1;
- (void)reset;
- (id)init;

@end

