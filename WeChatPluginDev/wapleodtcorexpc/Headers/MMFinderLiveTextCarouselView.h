//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, UILabel;
@protocol MMFinderLiveTextCarouselViewDelegate;

@interface MMFinderLiveTextCarouselView : UIView
{
    _Bool _keepWordingOnScreenWhenFinish;
    _Bool _allowRepeatedPlay;
    _Bool _isAnimationStart;
    _Bool _isInAnimation;
    id <MMFinderLiveTextCarouselViewDelegate> _delegate;
    double _animationDuration;
    CDUnknownBlockType _onCarouselAnimationFinishOnceBlock;
    unsigned long long _currentIndex;
    NSArray *_dataSource;
    MMTimer *_scrollTimer;
    UILabel *_currentLabel;
    UILabel *_nextLabel;
    unsigned long long _repeatCount;
    unsigned long long _remainingCount;
}

+ (double)labelHeight;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long remainingCount; // @synthesize remainingCount=_remainingCount;
@property(nonatomic) unsigned long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) UILabel *nextLabel; // @synthesize nextLabel=_nextLabel;
@property(retain, nonatomic) UILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(retain, nonatomic) MMTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isInAnimation; // @synthesize isInAnimation=_isInAnimation;
@property(nonatomic) _Bool isAnimationStart; // @synthesize isAnimationStart=_isAnimationStart;
@property(copy, nonatomic) CDUnknownBlockType onCarouselAnimationFinishOnceBlock; // @synthesize onCarouselAnimationFinishOnceBlock=_onCarouselAnimationFinishOnceBlock;
@property(nonatomic) _Bool allowRepeatedPlay; // @synthesize allowRepeatedPlay=_allowRepeatedPlay;
@property(nonatomic) _Bool keepWordingOnScreenWhenFinish; // @synthesize keepWordingOnScreenWhenFinish=_keepWordingOnScreenWhenFinish;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) __weak id <MMFinderLiveTextCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTimerShouldScroll;
- (void)stopTimer;
- (void)startTimer;
- (void)layoutSubviews;
- (void)dealloc;
- (void)reset;
- (void)hideCurrentLabel;
- (void)stop;
- (void)start;
- (void)updateWithDataSource:(id)arg1 repeatCount:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

