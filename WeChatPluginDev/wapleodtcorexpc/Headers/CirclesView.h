//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CircleView, NSMutableArray, NSString;

@interface CirclesView : UIView
{
    NSMutableArray *m_peakPowerArray;
    _Bool _animating;
    _Bool _circleAnimating;
    CircleView *_circleView;
    CircleView *_circleView2;
    CircleView *_circleView3;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CircleView *circleView3; // @synthesize circleView3=_circleView3;
@property(retain, nonatomic) CircleView *circleView2; // @synthesize circleView2=_circleView2;
@property(retain, nonatomic) CircleView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic) _Bool circleAnimating; // @synthesize circleAnimating=_circleAnimating;
@property _Bool animating; // @synthesize animating=_animating;
- (void)startPeakPowerAnimate;
- (void)OnPeakPowerChange:(float)arg1;
- (void)animateCircle3;
- (void)stopAnimate;
- (void)startAnimate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

