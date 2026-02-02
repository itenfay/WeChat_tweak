//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TSMotionTracker, TSTouchTrackRecognizer, UIView;

@interface TSTouchMotionTracker : NSObject
{
    _Bool _didBeingOnTouch;
    double _maximumMotionDuration;
    double _minimiusMotionDuration;
    UIView *_attachedView;
    TSTouchTrackRecognizer *_trackRecognizer;
    TSMotionTracker *_motionTracker;
    CDUnknownBlockType _eventHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property _Bool didBeingOnTouch; // @synthesize didBeingOnTouch=_didBeingOnTouch;
@property(retain, nonatomic) TSMotionTracker *motionTracker; // @synthesize motionTracker=_motionTracker;
@property(retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer; // @synthesize trackRecognizer=_trackRecognizer;
@property(nonatomic) __weak UIView *attachedView; // @synthesize attachedView=_attachedView;
@property double minimiusMotionDuration; // @synthesize minimiusMotionDuration=_minimiusMotionDuration;
@property double maximumMotionDuration; // @synthesize maximumMotionDuration=_maximumMotionDuration;
- (void)dealloc;
- (void)controlOnTouchUp:(id)arg1 withEvent:(id)arg2;
- (void)controlOnTouchDown:(id)arg1 withEvent:(id)arg2;
- (id)initWithInterval:(double)arg1 view:(id)arg2 trackEventHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

