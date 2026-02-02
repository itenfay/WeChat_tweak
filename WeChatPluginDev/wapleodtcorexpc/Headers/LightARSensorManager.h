//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMotionManager, NSOperationQueue;

@interface LightARSensorManager : NSObject
{
    _Bool _isStarted;
    CDUnknownBlockType _motionHandler;
    CDUnknownBlockType _gyroHandler;
    CDUnknownBlockType _accHandler;
    double _deviceMotionUpdateInterval;
    double _gyroUpdateInterval;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionUpdateQueue;
    NSOperationQueue *_gyroUpdateQueue;
    NSOperationQueue *_accUpdateQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(retain, nonatomic) NSOperationQueue *accUpdateQueue; // @synthesize accUpdateQueue=_accUpdateQueue;
@property(retain, nonatomic) NSOperationQueue *gyroUpdateQueue; // @synthesize gyroUpdateQueue=_gyroUpdateQueue;
@property(retain, nonatomic) NSOperationQueue *motionUpdateQueue; // @synthesize motionUpdateQueue=_motionUpdateQueue;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) double gyroUpdateInterval; // @synthesize gyroUpdateInterval=_gyroUpdateInterval;
@property(nonatomic) double deviceMotionUpdateInterval; // @synthesize deviceMotionUpdateInterval=_deviceMotionUpdateInterval;
@property(copy, nonatomic) CDUnknownBlockType accHandler; // @synthesize accHandler=_accHandler;
@property(copy, nonatomic) CDUnknownBlockType gyroHandler; // @synthesize gyroHandler=_gyroHandler;
@property(copy, nonatomic) CDUnknownBlockType motionHandler; // @synthesize motionHandler=_motionHandler;
- (void)stop;
- (void)start;
- (id)init;

@end

