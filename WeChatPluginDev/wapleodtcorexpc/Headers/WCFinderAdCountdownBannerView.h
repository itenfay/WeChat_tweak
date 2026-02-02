//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUIButton, UILabel;
@protocol WCFinderAdCountdownBannerViewDelegate;

@interface WCFinderAdCountdownBannerView : UIView
{
    id <WCFinderAdCountdownBannerViewDelegate> _delegate;
    long long _totalWatchCount;
    long long _countdownNum;
    MMTimer *_countdownTimer;
    UILabel *_countdownLabel;
    UIView *_separateLine;
    MMUIButton *_adTipsButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *adTipsButton; // @synthesize adTipsButton=_adTipsButton;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) long long countdownNum; // @synthesize countdownNum=_countdownNum;
@property(nonatomic) long long totalWatchCount; // @synthesize totalWatchCount=_totalWatchCount;
@property(nonatomic) __weak id <WCFinderAdCountdownBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)countdownLabelString;
- (_Bool)adHasPlayOver;
- (void)pauseCountdown;
- (void)startCountdown;
- (void)adBannerViewClickFeedbackAction:(id)arg1;
- (void)updateUIWithTime:(long long)arg1;
- (void)countdownTimerCallBack;
- (void)layoutComponents;
- (void)createCountdownTimerWithTimeInterval:(long long)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 countdownNum:(long long)arg2;

@end

