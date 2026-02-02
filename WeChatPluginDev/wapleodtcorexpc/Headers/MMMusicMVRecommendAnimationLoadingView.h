//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MMMusicMVRecommendAnimationLoadingView : UIView
{
    _Bool _animationReady;
    _Bool _isLoadingState;
    UIImageView *_animationImageView;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoadingState; // @synthesize isLoadingState=_isLoadingState;
@property(nonatomic) _Bool animationReady; // @synthesize animationReady=_animationReady;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
- (_Bool)isAnimating;
- (void)stopLoading;
- (void)startLoading;
- (void)configWithImage:(id)arg1 perRoundDuraion:(double)arg2;
- (void)configWithImageName:(id)arg1 perRoundDuraion:(double)arg2;

@end

