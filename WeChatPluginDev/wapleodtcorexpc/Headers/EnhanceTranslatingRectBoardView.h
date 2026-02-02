//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink;

@interface EnhanceTranslatingRectBoardView : UIView
{
    _Bool _isAnimating;
    CADisplayLink *_displayLink;
    double _beginTimeInterval;
    double _animationDuration;
    struct CGPoint _headPoint;
    struct CGPoint _tailPoint;
    struct CGRect _rectBoardFrame;
}

- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double beginTimeInterval; // @synthesize beginTimeInterval=_beginTimeInterval;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) struct CGPoint tailPoint; // @synthesize tailPoint=_tailPoint;
@property(nonatomic) struct CGPoint headPoint; // @synthesize headPoint=_headPoint;
@property(nonatomic) struct CGRect rectBoardFrame; // @synthesize rectBoardFrame=_rectBoardFrame;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)drawLinesInRectangle:(id)arg1 headPoint:(struct CGPoint)arg2 tailPoint:(struct CGPoint)arg3;
- (struct CGPoint)convertPointFromMovingDistance:(double)arg1;
- (void)displayLinkTicked;
- (void)resetRectBoard;
- (void)showRectBoardAnimation:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

