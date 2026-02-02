//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, CAShapeLayer, UIColor, UIView;

@interface MMLiveLikeButtonAnimationView
{
    _Bool _needUpdateBgProgress;
    UIView *_animationView;
    UIColor *_topColor;
    UIColor *_bottomColor;
    double _progressWidth;
    double _progress;
    CAShapeLayer *_bgProgressLayer;
    CAShapeLayer *_progressLayer;
    CALayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(nonatomic) _Bool needUpdateBgProgress; // @synthesize needUpdateBgProgress=_needUpdateBgProgress;
@property(retain, nonatomic) CAShapeLayer *bgProgressLayer; // @synthesize bgProgressLayer=_bgProgressLayer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(retain, nonatomic) UIColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property(retain, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
- (void)configWithTopColor:(id)arg1 bottomColor:(id)arg2 progressWidth:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawCycleProgress;
- (void)createBackgruondProgressView;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateProgress:(double)arg1;
- (void)refreshProgress:(double)arg1;

@end

