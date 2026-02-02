//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableAttributedString, UIColor, UIFont, UILabel, UIStackView;

@interface MJTimecodeView
{
    unsigned long long _fontConfiguration;
    UILabel *_currentTimeLabel;
    UILabel *_durationLabel;
    UILabel *_separatorLabel;
    UIStackView *_labelContainer;
    UIFont *_normalFont;
    UIFont *_subscriptFont;
    UIColor *_currentTimeColor;
    UIColor *_durationColor;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _currentDuration;
    _Bool _shouldShowHourDigit;
    NSMutableAttributedString *_currentTimeAttributedString;
    NSMutableAttributedString *_durationAttributedString;
    unsigned long long _displayMode;
    CDStruct_1b6d18a9 _frameDuration;
}

+ (id)timecodeFontOfSize:(double)arg1 weight:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
- (void)updateDurationLabel;
- (void)updateTimeLabel;
- (void)setDuration:(CDStruct_1b6d18a9)arg1;
- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (void)commonInit;
- (id)initWithFontConfiguration:(unsigned long long)arg1;

@end

