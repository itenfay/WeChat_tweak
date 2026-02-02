//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableAttributedString, NSString, UIColor, UILabel, UIView;

@interface WCFlowLyricsView
{
    _Bool _isRepeatByReplay;
    _Bool _hasStart;
    UIColor *_unSelectedColor;
    UIColor *_defaultLabelTextColor;
    UILabel *_flowLabel;
    UIView *_gradientMaskView;
    double _lastLyricsStartTime;
    NSString *_originString;
    NSMutableAttributedString *_attributedString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSString *originString; // @synthesize originString=_originString;
@property(nonatomic) _Bool hasStart; // @synthesize hasStart=_hasStart;
@property(nonatomic) _Bool isRepeatByReplay; // @synthesize isRepeatByReplay=_isRepeatByReplay;
@property(nonatomic) double lastLyricsStartTime; // @synthesize lastLyricsStartTime=_lastLyricsStartTime;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(retain, nonatomic) UILabel *flowLabel; // @synthesize flowLabel=_flowLabel;
@property(retain, nonatomic) UIColor *defaultLabelTextColor; // @synthesize defaultLabelTextColor=_defaultLabelTextColor;
@property(retain, nonatomic) UIColor *unSelectedColor; // @synthesize unSelectedColor=_unSelectedColor;
- (id)getAimLabelTextColor:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateFromRightToLeftDuration:(double)arg1 offset:(float)arg2;
- (_Bool)isAnimating;
- (void)replay;
- (void)resetToStopState;
- (void)stopFlow;
- (void)startFlowInMs:(unsigned long long)arg1;
- (void)startFlow;
- (void)waitingFlow;
- (id)getHitKeysFor:(id)arg1;
- (void)setContentViewData:(id)arg1 withFromeBgmSearch:(_Bool)arg2;
- (void)addLyricsLabel;
- (void)addGradientMaskView;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

