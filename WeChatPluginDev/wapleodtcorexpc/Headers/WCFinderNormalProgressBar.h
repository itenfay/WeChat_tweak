//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSNumber, NSString, UIPanGestureRecognizer, UIView, WCFinderNormalProgressBarConfig;

@interface WCFinderNormalProgressBar
{
    _Bool _showAnchorPoint;
    _Bool _showLargeBar;
    int _lastTime;
    MMUIButton *_dotBtn;
    WCFinderNormalProgressBarConfig *_config;
    UIView *_leftBarView;
    UIView *_rightBarView;
    NSNumber *_valueNum;
    UIPanGestureRecognizer *_panGes;
    double _lastX;
}

+ (double)progressBarVisibleHeight;
+ (id)finderNormalProgressBarWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(nonatomic) double lastX; // @synthesize lastX=_lastX;
@property(nonatomic) int lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) NSNumber *valueNum; // @synthesize valueNum=_valueNum;
@property(retain, nonatomic) UIView *rightBarView; // @synthesize rightBarView=_rightBarView;
@property(retain, nonatomic) UIView *leftBarView; // @synthesize leftBarView=_leftBarView;
@property(retain, nonatomic) WCFinderNormalProgressBarConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MMUIButton *dotBtn; // @synthesize dotBtn=_dotBtn;
- (_Bool)isShowLargeBar;
- (_Bool)isShowAnchorPoint;
- (void)setShowAnchorPoint:(_Bool)arg1;
- (void)setShowLargeBar:(_Bool)arg1;
- (void)resetAnimation;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)reset;
- (_Bool)checkProgressValueValid:(double)arg1;
- (void)removeProgressAnimation;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shoudAnimateToProgress:(double)arg1 duration:(double)arg2 time:(double)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3;
- (void)updateUIWithValue:(double)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)layoutSubviews;
- (void)onPanProgressIcon:(id)arg1;
- (void)setupWithConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (id)initWithConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

