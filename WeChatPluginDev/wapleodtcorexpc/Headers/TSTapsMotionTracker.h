//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TSMotionTracker, TSTouchTrackRecognizer, UIView;
@protocol OS_dispatch_source;

@interface TSTapsMotionTracker : NSObject
{
    double _motionMonitoringDuration;
    double _motionMonitoryingDelay;
    UIView *_attachedView;
    TSTouchTrackRecognizer *_trackRecognizer;
    TSMotionTracker *_motionTracker;
    NSObject<OS_dispatch_source> *_motionTrackerTimer;
    CDUnknownBlockType _eventHandler;
    double _intervalForMotionTracker;
    NSMutableArray *_touches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *touches; // @synthesize touches=_touches;
@property double intervalForMotionTracker; // @synthesize intervalForMotionTracker=_intervalForMotionTracker;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain) NSObject<OS_dispatch_source> *motionTrackerTimer; // @synthesize motionTrackerTimer=_motionTrackerTimer;
@property(retain, nonatomic) TSMotionTracker *motionTracker; // @synthesize motionTracker=_motionTracker;
@property(retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer; // @synthesize trackRecognizer=_trackRecognizer;
@property(nonatomic) __weak UIView *attachedView; // @synthesize attachedView=_attachedView;
@property double motionMonitoryingDelay; // @synthesize motionMonitoryingDelay=_motionMonitoryingDelay;
@property double motionMonitoringDuration; // @synthesize motionMonitoringDuration=_motionMonitoringDuration;
- (void)fireMotionMonitoringWithTouch:(id)arg1;
- (void)scheduleDelayedStoppingMonitoring;
- (void)stopMonitoringMotions;
- (void)scheduleMonitoringMotionsOnPress;
- (void)startMonitoringMotions;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 view:(id)arg2 trackEventHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

