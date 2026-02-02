//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, CMDeviceMotion;

@interface WCAdInteractionDeviceMotionView
{
    _Bool _shouldResumeTimer;
    CMDeviceMotion *_oriMotion;
    CADisplayLink *_displayTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldResumeTimer; // @synthesize shouldResumeTimer=_shouldResumeTimer;
@property(retain, nonatomic) CADisplayLink *displayTimer; // @synthesize displayTimer=_displayTimer;
@property(retain, nonatomic) CMDeviceMotion *oriMotion; // @synthesize oriMotion=_oriMotion;
- (double)fetchAngleInDegreesFromOriAngle:(float)arg1 oriAxis:(union _GLKVector3)arg2 orientationType:(unsigned long long)arg3;
- (void)updateOrientationWithCurMotion:(id)arg1 oriMotion:(id)arg2;
- (void)updateOrientation;
- (void)timerUpdateOrientation:(id)arg1;
- (void)deactivateTimer;
- (void)activeTimer;
- (void)deactivateDeviceMotion;
- (void)activeDeviceMotion;
- (void)deactivateItems;
- (_Bool)terminateContentViews;
- (_Bool)suspendContentViews;
- (_Bool)activeContentViews;
- (void)onViewDidBecomeActive:(id)arg1;
- (void)onViewWillResignActive:(id)arg1;
- (void)addNotificationObservers;
- (void)dealloc;

@end

