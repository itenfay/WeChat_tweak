//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface MMLiveDisplayLinkAnimator : NSObject
{
    _Bool _useHighFrameRate;
    double _duration;
    CDUnknownBlockType _animation;
    CDUnknownBlockType _completed;
    double _startTime;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType completed; // @synthesize completed=_completed;
@property(copy, nonatomic) CDUnknownBlockType animation; // @synthesize animation=_animation;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool useHighFrameRate; // @synthesize useHighFrameRate=_useHighFrameRate;
- (void)invalidate;
- (void)animateWithDisplayLink:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithDuration:(double)arg1 animationBlock:(CDUnknownBlockType)arg2 completedBlock:(CDUnknownBlockType)arg3;

@end

