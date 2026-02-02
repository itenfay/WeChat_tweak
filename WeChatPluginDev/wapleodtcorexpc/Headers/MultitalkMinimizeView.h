//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MMTimerLabel, NSString, UILabel;

@interface MultitalkMinimizeView : UIImageView
{
    UIImageView *m_iconImageView;
    UILabel *m_descriptionLabel;
    MMTimerLabel *m_timerLabel;
    unsigned long long _frameMode;
    unsigned long long _descMode;
    NSString *_extendAccessibilityString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extendAccessibilityString; // @synthesize extendAccessibilityString=_extendAccessibilityString;
@property(nonatomic) unsigned long long descMode; // @synthesize descMode=_descMode;
@property(nonatomic) unsigned long long frameMode; // @synthesize frameMode=_frameMode;
@property(retain, nonatomic) MMTimerLabel *m_timerLabel; // @synthesize m_timerLabel;
@property(retain, nonatomic) UILabel *m_descriptionLabel; // @synthesize m_descriptionLabel;
@property(retain, nonatomic) UIImageView *m_iconImageView; // @synthesize m_iconImageView;
- (id)endingDescTextColor;
- (id)normalDescTextColor;
- (id)timerLabelTextColor;
- (void)updateDescMode:(unsigned long long)arg1 withDisplayTime:(double)arg2;
- (void)clearDesc;
- (void)updateTimerForIlinkToMultiTalk:(double)arg1;
- (void)startTimer;
- (void)updateSubviewsByDescMode;
- (void)updateSubviewsByFrameMode;
- (void)updateSubviews;
- (void)changeFrameMode:(unsigned long long)arg1;
- (void)initTimerView;
- (void)initDescView;
- (void)initIconView;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

