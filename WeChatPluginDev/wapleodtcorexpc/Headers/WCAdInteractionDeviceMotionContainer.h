//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, CMDeviceMotion;
@protocol WCAdInteractionDeviceMotionContainerDelegate;

@interface WCAdInteractionDeviceMotionContainer : NSObject
{
    _Bool _shouldResumeTimer;
    _Bool _isTerminated;
    id <WCAdInteractionDeviceMotionContainerDelegate> _delegate;
    unsigned long long _monitorType;
    CMDeviceMotion *_oriMotion;
    CADisplayLink *_displayTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTerminated; // @synthesize isTerminated=_isTerminated;
@property(nonatomic) _Bool shouldResumeTimer; // @synthesize shouldResumeTimer=_shouldResumeTimer;
@property(retain, nonatomic) CADisplayLink *displayTimer; // @synthesize displayTimer=_displayTimer;
@property(retain, nonatomic) CMDeviceMotion *oriMotion; // @synthesize oriMotion=_oriMotion;
@property(nonatomic) unsigned long long monitorType; // @synthesize monitorType=_monitorType;
@property(nonatomic) __weak id <WCAdInteractionDeviceMotionContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)fetchAngleInDegreesFromOriAngle:(float)arg1 oriAxis:(union _GLKVector3)arg2 orientationType:(unsigned long long)arg3;
- (void)updateOrientationWithCurMotion:(id)arg1 oriMotion:(id)arg2;
- (void)updateOrientation;
- (void)timerUpdateOrientation:(id)arg1;
- (void)deactivateTimer;
- (void)activateTimer;
- (void)deactivateDeviceMotion;
- (void)activateDeviceMotion;
- (void)resetContainer;
- (_Bool)isContainerRunning;
- (_Bool)isContainerTerminated;
- (_Bool)isContainerActive;
- (void)terminateContainer;
- (void)suspendContainer;
- (void)activateContainer;
- (void)onViewDidBecomeActive:(id)arg1;
- (void)onViewWillResignActive:(id)arg1;
- (void)addNotificationObservers;
- (void)dealloc;
- (id)initWithMonitorType:(unsigned long long)arg1;

@end

