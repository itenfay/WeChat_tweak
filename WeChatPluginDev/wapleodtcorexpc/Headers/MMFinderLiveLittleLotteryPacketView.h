//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class LOTAnimationView, MMFinderLiveLotteryPacketDisplayLogic, MMTimerLabel, NSDateComponentsFormatter, UIImageView;

@interface MMFinderLiveLittleLotteryPacketView : UIView
{
    _Bool _isStaticStyle;
    unsigned int _remainTime;
    unsigned int _currentLotteryStatus;
    CDUnknownBlockType _countDownCompleteCallback;
    CDUnknownBlockType _countDownRemainTimeCallback;
    long long _currentState;
    NSDateComponentsFormatter *_accessibilityTimeFormatter;
    UIView *_staticBGView;
    LOTAnimationView *_pagPacketView;
    MMTimerLabel *_tipLabel;
    UIImageView *_imageView;
    CDUnknownBlockType _didMoveToSuperviewBlock;
    double _tipLabelHeightForStaticStyle;
    MMFinderLiveLotteryPacketDisplayLogic *_logic;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveLotteryPacketDisplayLogic *logic; // @synthesize logic=_logic;
@property(nonatomic) _Bool isStaticStyle; // @synthesize isStaticStyle=_isStaticStyle;
@property(nonatomic) double tipLabelHeightForStaticStyle; // @synthesize tipLabelHeightForStaticStyle=_tipLabelHeightForStaticStyle;
@property(copy, nonatomic) CDUnknownBlockType didMoveToSuperviewBlock; // @synthesize didMoveToSuperviewBlock=_didMoveToSuperviewBlock;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMTimerLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) LOTAnimationView *pagPacketView; // @synthesize pagPacketView=_pagPacketView;
@property(retain, nonatomic) UIView *staticBGView; // @synthesize staticBGView=_staticBGView;
@property(retain, nonatomic) NSDateComponentsFormatter *accessibilityTimeFormatter; // @synthesize accessibilityTimeFormatter=_accessibilityTimeFormatter;
@property(nonatomic) unsigned int currentLotteryStatus; // @synthesize currentLotteryStatus=_currentLotteryStatus;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(copy, nonatomic) CDUnknownBlockType countDownRemainTimeCallback; // @synthesize countDownRemainTimeCallback=_countDownRemainTimeCallback;
@property(copy, nonatomic) CDUnknownBlockType countDownCompleteCallback; // @synthesize countDownCompleteCallback=_countDownCompleteCallback;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)didMoveToSuperview;
- (unsigned int)currentRemainTime;
- (void)setImage:(id)arg1;
- (void)reset;
- (void)stopDisplay;
- (void)stopCountDown;
- (_Bool)isCountingDown;
- (void)startCountDown;
- (void)convertRemainTimeToHour:(unsigned int *)arg1 minute:(unsigned int *)arg2 second:(unsigned int *)arg3;
- (void)switchToBigAnimationStyleWithCompletion:(CDUnknownBlockType)arg1;
- (void)startDisplayAnimated;
- (void)switchToNormalStyle;
- (void)switchToStaticStyleAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutTipLabel;
- (void)layoutPagPacketView;
- (void)setAlpha:(double)arg1;
- (void)layoutStaticBGView;
- (void)layoutImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

