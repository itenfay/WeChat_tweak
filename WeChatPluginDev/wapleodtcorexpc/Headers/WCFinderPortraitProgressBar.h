//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSNumber, NSString, UIColor, UIPanGestureRecognizer, UIView;

@interface WCFinderPortraitProgressBar
{
    int _lastTime;
    MMUIButton *_dotBtn;
    unsigned long long _curType;
    UIPanGestureRecognizer *_panGes;
    unsigned long long _supportType;
    double _barHeight;
    double _dotSize;
    UIColor *_dotColor;
    UIColor *_leftColor;
    UIColor *_rightColor;
    UIView *_leftBarView;
    UIView *_rightBarView;
    NSNumber *_valueNum;
    double _lastX;
    double _offsetX;
}

- (void).cxx_destruct;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) double lastX; // @synthesize lastX=_lastX;
@property(nonatomic) int lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSNumber *valueNum; // @synthesize valueNum=_valueNum;
@property(retain, nonatomic) UIView *rightBarView; // @synthesize rightBarView=_rightBarView;
@property(retain, nonatomic) UIView *leftBarView; // @synthesize leftBarView=_leftBarView;
@property(retain, nonatomic) UIColor *rightColor; // @synthesize rightColor=_rightColor;
@property(retain, nonatomic) UIColor *leftColor; // @synthesize leftColor=_leftColor;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property(nonatomic) double dotSize; // @synthesize dotSize=_dotSize;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(nonatomic) unsigned long long supportType; // @synthesize supportType=_supportType;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(nonatomic) unsigned long long curType; // @synthesize curType=_curType;
@property(retain, nonatomic) MMUIButton *dotBtn; // @synthesize dotBtn=_dotBtn;
- (id)accessibilityLabel;
- (void)resetAnimation;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)reset;
- (_Bool)checkProgressValueValid:(double)arg1;
- (void)removeProgressAnimation;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shoudAnimateToProgress:(double)arg1 duration:(double)arg2 time:(double)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3;
- (void)updateUIWithValue:(double)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (unsigned long long)getDragState:(long long)arg1;
- (double)checkPositionX:(double)arg1;
- (void)onPanProgressIcon:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)configUI;
- (_Bool)isSupportType:(unsigned long long)arg1;
- (void)configSupportType:(unsigned long long)arg1;
- (void)configCurType:(unsigned long long)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

