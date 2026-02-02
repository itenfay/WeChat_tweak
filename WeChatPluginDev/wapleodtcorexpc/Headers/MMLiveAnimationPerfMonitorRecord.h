//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface MMLiveAnimationPerfMonitorRecord
{
    _Bool _isInfinity;
    float _animFrameRate;
    UIView *_animationView;
    double _predictStartTime;
    double _predictUpdateComposeRectTime;
    double _animDuration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInfinity; // @synthesize isInfinity=_isInfinity;
@property(nonatomic) double animDuration; // @synthesize animDuration=_animDuration;
@property(nonatomic) double predictUpdateComposeRectTime; // @synthesize predictUpdateComposeRectTime=_predictUpdateComposeRectTime;
@property(nonatomic) double predictStartTime; // @synthesize predictStartTime=_predictStartTime;
@property(nonatomic) float animFrameRate; // @synthesize animFrameRate=_animFrameRate;
@property(nonatomic) __weak UIView *animationView; // @synthesize animationView=_animationView;
- (double)minArea;
- (id)rootView;
- (double)remainComposeRectUpdateDelayTime;
- (double)remainAnimDuration;
- (double)remainStartDelayTime;
- (_Bool)autoEndMonitor;
- (_Bool)autoStartMonitor;
- (void)autoUpdateComposeRect;
- (_Bool)isAnimationValid;
- (void)clear;
- (_Bool)isValid;
- (_Bool)stopMonitorIfNeed;
- (_Bool)startMonitorIfNeed;
- (void)updateComposeSizePercent:(double)arg1;
- (void)updateComposeRect:(struct CGRect)arg1;
- (void)parseAnimation;
- (void)initDefaultDatas;
- (id)initWithAnimationView:(id)arg1;

@end

