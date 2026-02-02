//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUILabel, MMUIView, NSArray, UIImageView;

@interface EmoticonLensDynamicTipView
{
    MMUIView *_tipContentView;
    UIImageView *_iconImageView;
    MMUILabel *_tipLabel;
    MMTimer *_hiddenTimer;
    MMTimer *_startTimer;
    NSArray *_actionTypes;
    long long _currentIndex;
}

+ (double)getHeight;
- (void).cxx_destruct;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *actionTypes; // @synthesize actionTypes=_actionTypes;
@property(retain, nonatomic) MMTimer *startTimer; // @synthesize startTimer=_startTimer;
@property(retain, nonatomic) MMTimer *hiddenTimer; // @synthesize hiddenTimer=_hiddenTimer;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUIView *tipContentView; // @synthesize tipContentView=_tipContentView;
- (void)animationDidFinish;
- (void)startHiddenViewTimerWithDuration:(double)arg1;
- (void)configWithTip:(id)arg1 imageList:(id)arg2 duration:(double)arg3;
- (void)layoutSubviews;
- (void)playActionType:(long long)arg1 withDuration:(double)arg2 isFirstTip:(_Bool)arg3;
- (void)startNextActionAnimation;
- (void)stopAnimation;
- (void)startPlayWithActionTypes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

