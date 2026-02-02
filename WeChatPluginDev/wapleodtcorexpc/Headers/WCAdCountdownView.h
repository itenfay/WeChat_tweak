//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUILabel, NSString;
@protocol WCAdCountdownViewDelegate;

@interface WCAdCountdownView
{
    id <WCAdCountdownViewDelegate> _delegate;
    NSString *_title;
    long long _endTime;
    double _maxWidth;
    MMUILabel *_titleLabel;
    MMUILabel *_dayNumLabel;
    MMUILabel *_dayUnitLabel;
    MMUILabel *_hourNumLabel;
    MMUILabel *_timeSeparator1Label;
    MMUILabel *_minuteNumLabel;
    MMUILabel *_timeSeparator2Label;
    MMUILabel *_secondNumLabel;
    MMTimer *_updateTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) MMUILabel *secondNumLabel; // @synthesize secondNumLabel=_secondNumLabel;
@property(retain, nonatomic) MMUILabel *timeSeparator2Label; // @synthesize timeSeparator2Label=_timeSeparator2Label;
@property(retain, nonatomic) MMUILabel *minuteNumLabel; // @synthesize minuteNumLabel=_minuteNumLabel;
@property(retain, nonatomic) MMUILabel *timeSeparator1Label; // @synthesize timeSeparator1Label=_timeSeparator1Label;
@property(retain, nonatomic) MMUILabel *hourNumLabel; // @synthesize hourNumLabel=_hourNumLabel;
@property(retain, nonatomic) MMUILabel *dayUnitLabel; // @synthesize dayUnitLabel=_dayUnitLabel;
@property(retain, nonatomic) MMUILabel *dayNumLabel; // @synthesize dayNumLabel=_dayNumLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCAdCountdownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)calcRealTitleWidth:(_Bool)arg1;
- (void)updateView;
- (void)onTimerUpdateView;
- (void)stopCountdown;
- (void)startCountdown;
- (void)initTimer;
- (id)makeTimeNumLabel;
- (id)makeTimeSeparatorLabel;
- (id)makeDayUnitLabel;
- (id)makeDayNumLabel;
- (id)makeTitleLabel;
- (void)initView;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 endTime:(long long)arg2 maxWidth:(double)arg3;

@end

