//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, UIScrollView;

@interface MJScrollViewAutoScroller : NSObject
{
    _Bool _isAutoScrolling;
    double _minScrollVelocity;
    double _maxScrollVelocity;
    UIScrollView *_scrollView;
    CADisplayLink *_displayLink;
    double _lastAutoScrollTimestamp;
    double _minimumMoveDistance;
    struct CGPoint _lastTouchPoint;
    struct CGPoint _originalTouchPoint;
    struct UIEdgeInsets _autoScrollEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double minimumMoveDistance; // @synthesize minimumMoveDistance=_minimumMoveDistance;
@property(nonatomic) struct CGPoint originalTouchPoint; // @synthesize originalTouchPoint=_originalTouchPoint;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(nonatomic) double lastAutoScrollTimestamp; // @synthesize lastAutoScrollTimestamp=_lastAutoScrollTimestamp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool isAutoScrolling; // @synthesize isAutoScrolling=_isAutoScrolling;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double maxScrollVelocity; // @synthesize maxScrollVelocity=_maxScrollVelocity;
@property(nonatomic) double minScrollVelocity; // @synthesize minScrollVelocity=_minScrollVelocity;
@property(nonatomic) struct UIEdgeInsets autoScrollEdgeInsets; // @synthesize autoScrollEdgeInsets=_autoScrollEdgeInsets;
- (double)autoScrollVelocity;
- (void)updateWithTouchPointInScrollViewContainer:(struct CGPoint)arg1;
- (void)handleDisplayLink:(id)arg1;
- (void)invalidateDisplayLinkIfNeeded;
- (void)startDisplayLinkIfNeeded;
- (void)stop;
- (void)start;
- (id)initWithScrollView:(id)arg1;

@end

