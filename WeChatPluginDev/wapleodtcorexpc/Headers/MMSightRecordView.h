//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor, UIImageView, UILabel;

@interface MMSightRecordView : UIView
{
    _Bool _delayAnimationOnlyForNormalState;
    long long _state;
    UIColor *_outerBgColor;
    UIColor *_innerBgColor;
    UIView *_outerDotBg;
    UIView *_outerDotBlurBg;
    UIView *_outerDot;
    UIView *_innerDot;
    UILabel *_timerTextLabel;
    UIImageView *_timerCancellerIcon;
    CAShapeLayer *_outerDotLayer;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) CAShapeLayer *outerDotLayer; // @synthesize outerDotLayer=_outerDotLayer;
@property(retain, nonatomic) UIImageView *timerCancellerIcon; // @synthesize timerCancellerIcon=_timerCancellerIcon;
@property(retain, nonatomic) UILabel *timerTextLabel; // @synthesize timerTextLabel=_timerTextLabel;
@property(retain, nonatomic) UIView *innerDot; // @synthesize innerDot=_innerDot;
@property(retain, nonatomic) UIView *outerDot; // @synthesize outerDot=_outerDot;
@property(retain, nonatomic) UIView *outerDotBlurBg; // @synthesize outerDotBlurBg=_outerDotBlurBg;
@property(retain, nonatomic) UIView *outerDotBg; // @synthesize outerDotBg=_outerDotBg;
@property(retain, nonatomic) UIColor *innerBgColor; // @synthesize innerBgColor=_innerBgColor;
@property(retain, nonatomic) UIColor *outerBgColor; // @synthesize outerBgColor=_outerBgColor;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool delayAnimationOnlyForNormalState; // @synthesize delayAnimationOnlyForNormalState=_delayAnimationOnlyForNormalState;
- (id)getInnerBgColor;
- (id)getOuterBgColor;
- (id)frameAnimationFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (id)radiusAnimationFrom:(double)arg1 to:(double)arg2;
- (void)stateTransitionAnimation;
- (void)setupSubViews;
- (void)hideTimerSec;
- (void)showTimerSec:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

