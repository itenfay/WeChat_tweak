//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSTimer;

@interface MJShootCountdownView
{
    MMUILabel *_countdownLabel;
    NSTimer *_timer;
    double _remainingTime;
    CDUnknownBlockType _cancellationHandler;
    CDUnknownBlockType _completionHandler;
}

+ (double)MJMapCountdownTimerMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMUILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
- (void)swapCountdownLabelWithOutStageCompletionHandler:(CDUnknownBlockType)arg1 inStageCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dismissCountdownLabelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateCountdown;
- (void)stopTimer;
- (void)startTimer;
- (void)updateCountdownLabelContent;
- (void)cancelCountdown;
- (void)showCountdownWithTimerMode:(unsigned long long)arg1 cancellationHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

