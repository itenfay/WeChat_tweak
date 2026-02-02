//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, UIButton, UILabel;
@protocol MMLiveCountdownTipsViewDelegate;

@interface MMLiveCountdownTipsView : UIView
{
    _Bool _isFinish;
    UIView *_tipsViewContainer;
    UIButton *_cancelButton;
    MMTimer *_coundownTimer;
    UILabel *_coundownTips;
    long long _timerCountdown;
    long long _countDown;
    id <MMLiveCountdownTipsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveCountdownTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(nonatomic) long long timerCountdown; // @synthesize timerCountdown=_timerCountdown;
@property(retain, nonatomic) UILabel *coundownTips; // @synthesize coundownTips=_coundownTips;
@property(retain, nonatomic) MMTimer *coundownTimer; // @synthesize coundownTimer=_coundownTimer;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *tipsViewContainer; // @synthesize tipsViewContainer=_tipsViewContainer;
@property(nonatomic) _Bool isFinish; // @synthesize isFinish=_isFinish;
- (void)onCancelLiveActionClicked;
- (void)layoutCancelButton;
- (void)layoutCoundownTips;
- (void)clearCountdownTimer;
- (void)updateCountTimer;
- (void)startCountdownTimer;
- (void)dealloc;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 countTime:(long long)arg2 delegate:(id)arg3;

@end

