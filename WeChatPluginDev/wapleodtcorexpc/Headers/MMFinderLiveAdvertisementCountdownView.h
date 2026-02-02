//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUILabel, WCFinderProgressView;

@interface MMFinderLiveAdvertisementCountdownView : UIView
{
    long long _totalTime;
    CDUnknownBlockType _countdownCompletion;
    MMTimer *_timer;
    MMUILabel *_descLabel;
    MMUILabel *_timeLabel;
    UIView *_backgroundView;
    MMUILabel *_trailerLabel;
    WCFinderProgressView *_progress;
    double _countdownTime;
    long long _countdownInteval;
    double _timeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) long long countdownInteval; // @synthesize countdownInteval=_countdownInteval;
@property(nonatomic) double countdownTime; // @synthesize countdownTime=_countdownTime;
@property(retain, nonatomic) WCFinderProgressView *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) MMUILabel *trailerLabel; // @synthesize trailerLabel=_trailerLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType countdownCompletion; // @synthesize countdownCompletion=_countdownCompletion;
@property(nonatomic) long long totalTime; // @synthesize totalTime=_totalTime;
- (void)invalidateTimer;
- (void)countDownTrailerTime;
- (void)countDownTime;
- (void)finishTrailerCountdown;
- (void)startTrailerCountdown;
- (void)startAdvertisementCountdown;
- (void)initTimer:(SEL)arg1;
- (id)formatTime:(unsigned int)arg1;
- (void)refreshTimeLabel:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

