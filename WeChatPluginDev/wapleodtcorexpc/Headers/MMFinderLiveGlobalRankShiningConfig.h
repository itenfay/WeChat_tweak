//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveGlobalRankShiningConfig : NSObject
{
    double _initialScale;
    double _initialAlpha;
    double _targetScale;
    double _targetAlpha;
    double _animationDuration;
    double _startTime;
    struct CGPoint _normalizedOrigin;
    struct CGPoint _absoluteCenter;
}

+ (id)configWithAbsoluteCenter:(struct CGPoint)arg1 initScale:(double)arg2 initAlpha:(double)arg3 targetScale:(double)arg4 targetAlpha:(double)arg5 duration:(double)arg6 startTime:(double)arg7;
+ (id)configWithNormalizedOrigin:(struct CGPoint)arg1 initScale:(double)arg2 initAlpha:(double)arg3 targetScale:(double)arg4 targetAlpha:(double)arg5 duration:(double)arg6 startTime:(double)arg7;
+ (id)configForGlobalRankSignWithRank:(unsigned long long)arg1;
+ (id)configForAudienceJoin;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double targetAlpha; // @synthesize targetAlpha=_targetAlpha;
@property(nonatomic) double targetScale; // @synthesize targetScale=_targetScale;
@property(nonatomic) double initialAlpha; // @synthesize initialAlpha=_initialAlpha;
@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) struct CGPoint absoluteCenter; // @synthesize absoluteCenter=_absoluteCenter;
@property(nonatomic) struct CGPoint normalizedOrigin; // @synthesize normalizedOrigin=_normalizedOrigin;

@end

