//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSString, UIColor, UIImageView, UILabel;

@interface WCLiveCountdownToastView : UIView
{
    _Bool _centerVertically;
    UIColor *_toastBackGroundColor;
    CDUnknownBlockType _timerTimeOutCallback;
    UIView *_toastViewContainer;
    UIView *_toastView;
    MMTimer *_coundownTimer;
    UILabel *_coundownTips;
    UIImageView *_completionImageView;
    UILabel *_wordingLabel;
    NSString *_wordings;
    long long _timerCountdown;
    long long _countDown;
    NSString *_timeoutIcon;
    NSString *_timeoutText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *timeoutText; // @synthesize timeoutText=_timeoutText;
@property(retain, nonatomic) NSString *timeoutIcon; // @synthesize timeoutIcon=_timeoutIcon;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(nonatomic) long long timerCountdown; // @synthesize timerCountdown=_timerCountdown;
@property(retain, nonatomic) NSString *wordings; // @synthesize wordings=_wordings;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) UIImageView *completionImageView; // @synthesize completionImageView=_completionImageView;
@property(retain, nonatomic) UILabel *coundownTips; // @synthesize coundownTips=_coundownTips;
@property(retain, nonatomic) MMTimer *coundownTimer; // @synthesize coundownTimer=_coundownTimer;
@property(retain, nonatomic) UIView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIView *toastViewContainer; // @synthesize toastViewContainer=_toastViewContainer;
@property(nonatomic) _Bool centerVertically; // @synthesize centerVertically=_centerVertically;
@property(copy, nonatomic) CDUnknownBlockType timerTimeOutCallback; // @synthesize timerTimeOutCallback=_timerTimeOutCallback;
@property(retain, nonatomic) UIColor *toastBackGroundColor; // @synthesize toastBackGroundColor=_toastBackGroundColor;
- (void)adjustContentViews;
- (void)layoutWordingLabel;
- (void)layoutCompletionImageView;
- (void)layoutCoundownTips;
- (void)layoutToastView;
- (void)showCompletion;
- (void)clearCountdownTimerAndRemoveView:(_Bool)arg1;
- (void)updateCountTimer;
- (void)startCountdownTimer;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 countTime:(long long)arg2 wordings:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 countTime:(long long)arg2 wordings:(id)arg3 timeoutIcon:(id)arg4 timeoutText:(id)arg5;

@end

