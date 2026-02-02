//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMTimer, NSString, UIButton, UIView;

@interface MMLiveProceedWebViewController
{
    CDUnknownBlockType _proceedActionCallback;
    UIView *_bottomBackgroundView;
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
    UIView *_bottomOperationView;
    UIButton *_proceedButton;
    MMTimer *_countDownTimer;
    long long _innerReadTimerCountdown;
    NSString *_proceedButtonTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *proceedButtonTitle; // @synthesize proceedButtonTitle=_proceedButtonTitle;
@property(nonatomic) long long innerReadTimerCountdown; // @synthesize innerReadTimerCountdown=_innerReadTimerCountdown;
@property(retain, nonatomic) MMTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) UIButton *proceedButton; // @synthesize proceedButton=_proceedButton;
@property(retain, nonatomic) UIView *bottomOperationView; // @synthesize bottomOperationView=_bottomOperationView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) UIView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(copy, nonatomic) CDUnknownBlockType proceedActionCallback; // @synthesize proceedActionCallback=_proceedActionCallback;
- (void)onClickProceedAction:(id)arg1;
- (void)layoutUI;
- (void)setupUI;
- (void)updateButtonTitle:(id)arg1;
- (void)clearCountdownTimer;
- (void)updateCountTimer;
- (void)startCountdownTimer:(long long)arg1;
- (void)configNavigationBarItem;
- (id)navigationBarBackgroundColor;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

