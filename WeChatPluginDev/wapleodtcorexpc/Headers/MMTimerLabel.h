//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@interface MMTimerLabel : UILabel
{
    long long _second;
    long long _minute;
    long long _hour;
    _Bool _isShowHourDefault;
    _Bool _isActive;
    _Bool _isCountDown;
    _Bool _isInMinutesMode;
    CDUnknownBlockType _countDownCompleteCallback;
    CDUnknownBlockType _countDownRemainTimeCallback;
    CDUnknownBlockType _handleTextBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handleTextBlock; // @synthesize handleTextBlock=_handleTextBlock;
@property(copy, nonatomic) CDUnknownBlockType countDownRemainTimeCallback; // @synthesize countDownRemainTimeCallback=_countDownRemainTimeCallback;
@property(copy, nonatomic) CDUnknownBlockType countDownCompleteCallback; // @synthesize countDownCompleteCallback=_countDownCompleteCallback;
@property(nonatomic) _Bool isInMinutesMode; // @synthesize isInMinutesMode=_isInMinutesMode;
@property(nonatomic) long long hour; // @synthesize hour=_hour;
@property(nonatomic) long long minute; // @synthesize minute=_minute;
@property(nonatomic) long long second; // @synthesize second=_second;
- (void)countDownFromHour:(long long)arg1 miniute:(long long)arg2 second:(long long)arg3 complte:(CDUnknownBlockType)arg4 remain:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (unsigned int)currentTime;
- (_Bool)isActive;
- (void)pauseTimer;
- (void)stopTimer;
- (void)startTimer;
- (void)reset;
- (void)setIsShowHourDefault:(_Bool)arg1;
- (void)increaseTime;
- (void)updateLabel;

@end

