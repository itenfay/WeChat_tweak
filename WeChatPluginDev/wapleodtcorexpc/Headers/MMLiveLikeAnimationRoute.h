//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveLikeAnimationRoute : NSObject
{
    _Bool _isAnimating;
    double _firstAnimationOffsetX;
    double _secondAnimationOffsetX;
    double _thirdAnimationOffsetX;
    double _firstAnimationOffsetY;
    double _secondAnimationOffsetY;
    double _thirdAnimationOffsetY;
    double _firstAnimationDuration;
    double _secondAnimationDuration;
    double _thirdAnimationDuration;
    double _finalAnimationViewAlpha;
}

@property(nonatomic) double finalAnimationViewAlpha; // @synthesize finalAnimationViewAlpha=_finalAnimationViewAlpha;
@property(nonatomic) double thirdAnimationDuration; // @synthesize thirdAnimationDuration=_thirdAnimationDuration;
@property(nonatomic) double secondAnimationDuration; // @synthesize secondAnimationDuration=_secondAnimationDuration;
@property(nonatomic) double firstAnimationDuration; // @synthesize firstAnimationDuration=_firstAnimationDuration;
@property(nonatomic) double thirdAnimationOffsetY; // @synthesize thirdAnimationOffsetY=_thirdAnimationOffsetY;
@property(nonatomic) double secondAnimationOffsetY; // @synthesize secondAnimationOffsetY=_secondAnimationOffsetY;
@property(nonatomic) double firstAnimationOffsetY; // @synthesize firstAnimationOffsetY=_firstAnimationOffsetY;
@property(nonatomic) double thirdAnimationOffsetX; // @synthesize thirdAnimationOffsetX=_thirdAnimationOffsetX;
@property(nonatomic) double secondAnimationOffsetX; // @synthesize secondAnimationOffsetX=_secondAnimationOffsetX;
@property(nonatomic) double firstAnimationOffsetX; // @synthesize firstAnimationOffsetX=_firstAnimationOffsetX;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)startStageAnimationWithDuration:(double)arg1 transformScale:(double)arg2 alpha:(double)arg3 animationOption:(unsigned long long)arg4 offsetX:(double)arg5 offsetY:(double)arg6 animationView:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)startLiveLikeHeadImageAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startLiveLikeAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

