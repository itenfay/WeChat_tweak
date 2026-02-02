//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WCFinderAnimationLoadingView : UIView
{
    _Bool _animationReady;
    _Bool _isLoadingState;
    UIImageView *_animationImageView;
    double _duration;
}

+ (id)loadingViewWithWidth:(double)arg1;
+ (id)loadingView;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLoadingState; // @synthesize isLoadingState=_isLoadingState;
@property(nonatomic) _Bool animationReady; // @synthesize animationReady=_animationReady;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isAnimating;
- (void)stopLoading;
- (void)startLoading;
- (void)configWithImage:(id)arg1 perRoundDuraion:(double)arg2;
- (void)configWithImageName:(id)arg1 perRoundDuraion:(double)arg2;

@end

