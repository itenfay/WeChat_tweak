//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, CAMediaTimingFunction, UIScrollView;

@interface ScrollViewTimingDelegate : NSObject
{
    _Bool _animationStarted;
    UIScrollView *_scrollView;
    CADisplayLink *_displayLink;
    CAMediaTimingFunction *_timingFunction;
    double _duration;
    double _beginTime;
    struct CGPoint _beginContentOffset;
    struct CGPoint _deltaContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint deltaContentOffset; // @synthesize deltaContentOffset=_deltaContentOffset;
@property(nonatomic) struct CGPoint beginContentOffset; // @synthesize beginContentOffset=_beginContentOffset;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool animationStarted; // @synthesize animationStarted=_animationStarted;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)stopAnimation;
- (void)updateProgress:(double)arg1;
- (void)updateContentOffset:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 withTimingFunction:(id)arg2 duration:(double)arg3;
- (void)setContentOffset:(struct CGPoint)arg1 withTimingFunction:(id)arg2;
- (void)dealloc;

@end

