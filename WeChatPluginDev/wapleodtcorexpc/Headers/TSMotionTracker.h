//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMotionManager, NSMutableArray, NSOperationQueue, NSString;

@interface TSMotionTracker : NSObject
{
    unsigned long long _numberOfMotionsKept;
    NSOperationQueue *_workQueue;
    CMMotionManager *_motionManager;
    NSMutableArray *_accelerationItems;
    NSMutableArray *_gyroItems;
    NSMutableArray *_motionItems;
    double _timeBeganTracking;
    CDUnknownBlockType _eventHandler;
}

+ (void)postflightTrack;
+ (void)preflightTrack;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) double timeBeganTracking; // @synthesize timeBeganTracking=_timeBeganTracking;
@property(retain, nonatomic) NSMutableArray *motionItems; // @synthesize motionItems=_motionItems;
@property(retain, nonatomic) NSMutableArray *gyroItems; // @synthesize gyroItems=_gyroItems;
@property(retain, nonatomic) NSMutableArray *accelerationItems; // @synthesize accelerationItems=_accelerationItems;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) unsigned long long numberOfMotionsKept; // @synthesize numberOfMotionsKept=_numberOfMotionsKept;
- (void)stopMotionMonitoring;
- (_Bool)startMotionMonitoringWithEventHandler:(CDUnknownBlockType)arg1;
- (void)stopGyroMonitoring;
- (_Bool)startGyroMonitoringWithEventHandler:(CDUnknownBlockType)arg1;
- (void)stopAccelerationMonitoring;
- (_Bool)startAccelerationMonitoringWithEventHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 trackEventHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

