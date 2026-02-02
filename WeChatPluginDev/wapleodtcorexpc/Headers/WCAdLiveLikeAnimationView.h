//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveLikeAnimationUtil, MMTimer, NSArray;

@interface WCAdLiveLikeAnimationView
{
    _Bool _pauseFlag;
    MMLiveLikeAnimationUtil *_liveLikeAnimationUtil;
    MMTimer *_animationTimer;
    double _animationInterval;
    NSArray *_cheerIconList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cheerIconList; // @synthesize cheerIconList=_cheerIconList;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(nonatomic) _Bool pauseFlag; // @synthesize pauseFlag=_pauseFlag;
@property(retain, nonatomic) MMTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *liveLikeAnimationUtil; // @synthesize liveLikeAnimationUtil=_liveLikeAnimationUtil;
- (void)displayLiveLikeAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)dealloc;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 animationInterval:(double)arg2 cheerIconList:(id)arg3;

@end

