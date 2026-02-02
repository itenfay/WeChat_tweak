//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, UIScrollView;

@interface UIScrollViewAnimator : NSObject
{
    UIScrollView *_scrollView;
    double _duration;
    CDUnknownBlockType _completionBlock;
    CADisplayLink *_displayLink;
    double _animationStartTime;
    struct CGPoint _fromContentOffset;
    struct CGPoint _toContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double animationStartTime; // @synthesize animationStartTime=_animationStartTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) struct CGPoint toContentOffset; // @synthesize toContentOffset=_toContentOffset;
@property(nonatomic) struct CGPoint fromContentOffset; // @synthesize fromContentOffset=_fromContentOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (double)timingFuncEaseOut:(double)arg1;
- (void)updateScrollViewContentOffset:(id)arg1;
- (void)animateToContentOffset:(struct CGPoint)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithScrollView:(id)arg1;

@end

