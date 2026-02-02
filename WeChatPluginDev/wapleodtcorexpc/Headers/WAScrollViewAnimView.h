//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIScrollView;

@interface WAScrollViewAnimView : UIView
{
    UIScrollView *_scrollView;
    UIView *_animateView;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *animateView; // @synthesize animateView=_animateView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setNeedsCancelAnimation;
- (void)timeTick:(id)arg1;
- (void)startAnimateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 startPoint:(struct CGPoint)arg6 endPoint:(struct CGPoint)arg7;
- (void)stopAnimate;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

