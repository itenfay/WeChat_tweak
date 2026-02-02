//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePayButton, MMUILabel;
@protocol MMFinderLivePaymentRetryViewBarDelegate;

@interface MMFinderLivePaymentRetryViewBar : UIView
{
    _Bool _isPreparingNotPaidAnimation;
    _Bool _isInAnimation;
    _Bool _needHidden;
    unsigned int _remainTime;
    unsigned int _timeLimit;
    unsigned int _trialEndTime;
    unsigned int _costWeBeanCount;
    unsigned int _lastExtendTime;
    long long _countDownMode;
    unsigned long long _currentLivePaymentType;
    CDUnknownBlockType _countDownUpdatedCallback;
    CDUnknownBlockType _payActionCallback;
    long long _layoutOrientation;
    id <MMFinderLivePaymentRetryViewBarDelegate> _delegate;
    long long _entranceSrc;
    MMUILabel *_retryViewTipLabel;
    MMFinderLivePayButton *_payButton;
    long long _payButtonState;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastExtendTime; // @synthesize lastExtendTime=_lastExtendTime;
@property(nonatomic) _Bool needHidden; // @synthesize needHidden=_needHidden;
@property(nonatomic) long long payButtonState; // @synthesize payButtonState=_payButtonState;
@property(retain, nonatomic) MMFinderLivePayButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) MMUILabel *retryViewTipLabel; // @synthesize retryViewTipLabel=_retryViewTipLabel;
@property(nonatomic) _Bool isInAnimation; // @synthesize isInAnimation=_isInAnimation;
@property(nonatomic) unsigned int costWeBeanCount; // @synthesize costWeBeanCount=_costWeBeanCount;
@property(nonatomic) long long entranceSrc; // @synthesize entranceSrc=_entranceSrc;
@property(nonatomic) unsigned int trialEndTime; // @synthesize trialEndTime=_trialEndTime;
@property(nonatomic) unsigned int timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(nonatomic) _Bool isPreparingNotPaidAnimation; // @synthesize isPreparingNotPaidAnimation=_isPreparingNotPaidAnimation;
@property(nonatomic) __weak id <MMFinderLivePaymentRetryViewBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(copy, nonatomic) CDUnknownBlockType payActionCallback; // @synthesize payActionCallback=_payActionCallback;
@property(copy, nonatomic) CDUnknownBlockType countDownUpdatedCallback; // @synthesize countDownUpdatedCallback=_countDownUpdatedCallback;
@property(nonatomic) unsigned long long currentLivePaymentType; // @synthesize currentLivePaymentType=_currentLivePaymentType;
@property(nonatomic) long long countDownMode; // @synthesize countDownMode=_countDownMode;
- (id)getPayButtonAttributedTextInPayState;
- (id)getPayButtonAttributedText:(_Bool)arg1;
- (void)updateRetryViewTip;
- (double)getPayButtonRight;
- (void)onPayActionTimeout;
- (void)layoutPayButton;
- (void)updateRetryViewTipLabelOrigin;
- (void)layoutRetryViewTipLabel;
- (void)layoutUI;
- (void)updateForRemainTimeChanged;
- (void)countDown;
- (_Bool)isCurrentParamsValid;
- (void)updateSelfDisplay;
- (void)updateHidden:(_Bool)arg1;
- (void)terminateAndDrainRemainTime;
- (void)executeAnimation;
- (void)updateRemainTime:(unsigned int)arg1 checkEqual:(_Bool)arg2 isExpandingTime:(_Bool)arg3;
- (void)updateTrialEndTime:(unsigned int)arg1;
- (void)updateTimeLimit:(unsigned int)arg1;
- (void)updateCurrentLivePaymentType:(unsigned long long)arg1 remainTime:(unsigned int)arg2 timeLimit:(unsigned int)arg3 trialEndTime:(unsigned int)arg4 costWeBeanCount:(unsigned int)arg5;
- (void)stopCountdown;
- (void)startCountDown;
- (double)paybuttonTop;
- (double)paybuttonWidth;
- (void)layoutSubviews;
- (id)initWithFromSource:(long long)arg1 countDownMode:(long long)arg2;

@end

