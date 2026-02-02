//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMAccelerometerData, CMMotionManager;

@interface MMRotationDetector : NSObject
{
    _Bool _shouldDisableAccelerationDetectLog;
    long long _orientation;
    double _dividingWhenPortraitOrientation;
    double _dividingWhenLandscapeOrientation;
    CMAccelerometerData *_accelerometerData;
    CMMotionManager *_motionMgr;
}

+ (id)sharedDetector;
- (void).cxx_destruct;
@property(retain, nonatomic) CMMotionManager *motionMgr; // @synthesize motionMgr=_motionMgr;
@property(retain, nonatomic) CMAccelerometerData *accelerometerData; // @synthesize accelerometerData=_accelerometerData;
@property(nonatomic) double dividingWhenLandscapeOrientation; // @synthesize dividingWhenLandscapeOrientation=_dividingWhenLandscapeOrientation;
@property(nonatomic) double dividingWhenPortraitOrientation; // @synthesize dividingWhenPortraitOrientation=_dividingWhenPortraitOrientation;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool shouldDisableAccelerationDetectLog; // @synthesize shouldDisableAccelerationDetectLog=_shouldDisableAccelerationDetectLog;
- (long long)safeGetCurrentDeviceOrientation;
- (long long)orientationFromAccelerometerData:(CDStruct_78c249a6)arg1;
- (void)endRotationDetection;
- (void)beginRotationDetection;
- (void)resetOptions;
- (id)init;

@end

