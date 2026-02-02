//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;

@interface WCRedesignVerifyCodeTextItem
{
    _Bool _useShortWording;
    long long _iCount;
    CDUnknownBlockType _tapVerifyCodeButtonHandler;
    CDUnknownBlockType _onSetNeedsLayout;
    UIButton *_verifyCodeButton;
    double _maxCountDownButtonWidth;
    long long _countDown;
}

- (void).cxx_destruct;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(nonatomic) double maxCountDownButtonWidth; // @synthesize maxCountDownButtonWidth=_maxCountDownButtonWidth;
@property(retain, nonatomic) UIButton *verifyCodeButton; // @synthesize verifyCodeButton=_verifyCodeButton;
@property(copy, nonatomic) CDUnknownBlockType onSetNeedsLayout; // @synthesize onSetNeedsLayout=_onSetNeedsLayout;
@property(copy, nonatomic) CDUnknownBlockType tapVerifyCodeButtonHandler; // @synthesize tapVerifyCodeButtonHandler=_tapVerifyCodeButtonHandler;
@property(nonatomic) _Bool useShortWording; // @synthesize useShortWording=_useShortWording;
@property(nonatomic) long long iCount; // @synthesize iCount=_iCount;
- (double)buttonWidthForCalLineBreak;
- (void)updateVerifyCodeButtonWithIsFirst:(_Bool)arg1;
- (void)updateVerifyCodeButton;
- (void)stopCountDownTimer;
- (void)startCountDownTimer;
- (void)config;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

@end

