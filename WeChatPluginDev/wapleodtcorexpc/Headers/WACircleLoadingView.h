//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface WACircleLoadingView : UIView
{
    _Bool _animating;
    float _progress;
    float _circleDuration;
    float _progressAnimationDuration;
    float _pointSize;
    float _pointBorderWidth;
    float _backLineWidth;
    float _progressWidth;
    CAShapeLayer *_backLayer;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_pointLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) float progressWidth; // @synthesize progressWidth=_progressWidth;
@property(nonatomic) float backLineWidth; // @synthesize backLineWidth=_backLineWidth;
@property(retain, nonatomic) CAShapeLayer *pointLayer; // @synthesize pointLayer=_pointLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *backLayer; // @synthesize backLayer=_backLayer;
@property(nonatomic) float pointBorderWidth; // @synthesize pointBorderWidth=_pointBorderWidth;
@property(nonatomic) float pointSize; // @synthesize pointSize=_pointSize;
@property(nonatomic) float progressAnimationDuration; // @synthesize progressAnimationDuration=_progressAnimationDuration;
@property(nonatomic) float circleDuration; // @synthesize circleDuration=_circleDuration;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)traitCollectionDidChange:(id)arg1;
- (void)startCircleAnimate;
- (void)buildLayout;
- (id)initWithFrame:(struct CGRect)arg1 backLineWidth:(float)arg2 progressWidth:(float)arg3;

@end

