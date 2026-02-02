//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMWebImageView, NSArray;

@interface MMFinderLiveIconTransitionCarouselView : UIView
{
    _Bool _isAnimationStart;
    double _animationDuration;
    double _transitionDuration;
    NSArray *_images;
    NSArray *_webImageUrls;
    unsigned long long _currentIndex;
    MMWebImageView *_imageView;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isAnimationStart; // @synthesize isAnimationStart=_isAnimationStart;
@property(retain, nonatomic) NSArray *webImageUrls; // @synthesize webImageUrls=_webImageUrls;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (void)dealloc;
- (void)transitionSingleImage;
- (void)stopTimer;
- (void)startTimer;
- (void)stop;
- (void)start;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithWebImageUrls:(id)arg1;
- (id)initWithImages:(id)arg1;

@end

