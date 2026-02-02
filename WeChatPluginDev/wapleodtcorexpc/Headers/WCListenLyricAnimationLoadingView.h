//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WCListenLyricAnimationLoadingView
{
    int _repeatCount;
    UIView *_p1;
    UIView *_p2;
    UIView *_p3;
    double _remainDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double remainDuration; // @synthesize remainDuration=_remainDuration;
@property(nonatomic) int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) UIView *p3; // @synthesize p3=_p3;
@property(retain, nonatomic) UIView *p2; // @synthesize p2=_p2;
@property(retain, nonatomic) UIView *p1; // @synthesize p1=_p1;
- (id)genPoint;
- (void)reset;
- (void)runCountDownAnimationWithDuraion:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runLoadingAnimation:(CDUnknownBlockType)arg1;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

