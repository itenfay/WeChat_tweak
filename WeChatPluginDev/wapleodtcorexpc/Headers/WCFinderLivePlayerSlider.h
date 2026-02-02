//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSMutableArray, NSNumber, NSString, SliderPanGestureRecognizerHandler, UIPanGestureRecognizer;
@protocol WCFinderLivePlayerSliderDelegate;

@interface WCFinderLivePlayerSlider : UIView
{
    _Bool _isStartRecognizePanGes;
    int _lastTime;
    id <WCFinderLivePlayerSliderDelegate> _delegate;
    MMUIButton *_progressIconButton;
    NSNumber *_lastValueNum;
    UIView *_leftBarView;
    UIView *_rightBarView;
    UIPanGestureRecognizer *_panGes;
    SliderPanGestureRecognizerHandler *_panGesDelegateHandler;
    double _startGesHandleRecordWidth;
    NSNumber *_valueNum;
    double _lastX;
    NSMutableArray *_autoAttachDotList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *autoAttachDotList; // @synthesize autoAttachDotList=_autoAttachDotList;
@property(nonatomic) double lastX; // @synthesize lastX=_lastX;
@property(nonatomic) int lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSNumber *valueNum; // @synthesize valueNum=_valueNum;
@property(nonatomic) double startGesHandleRecordWidth; // @synthesize startGesHandleRecordWidth=_startGesHandleRecordWidth;
@property(nonatomic) _Bool isStartRecognizePanGes; // @synthesize isStartRecognizePanGes=_isStartRecognizePanGes;
@property(retain, nonatomic) SliderPanGestureRecognizerHandler *panGesDelegateHandler; // @synthesize panGesDelegateHandler=_panGesDelegateHandler;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) UIView *rightBarView; // @synthesize rightBarView=_rightBarView;
@property(retain, nonatomic) UIView *leftBarView; // @synthesize leftBarView=_leftBarView;
@property(retain, nonatomic) NSNumber *lastValueNum; // @synthesize lastValueNum=_lastValueNum;
@property(retain, nonatomic) MMUIButton *progressIconButton; // @synthesize progressIconButton=_progressIconButton;
@property(nonatomic) __weak id <WCFinderLivePlayerSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)makeProgressIconBtnNotOverBoundary;
- (void)resetLayer:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)updateValueNum:(id)arg1;
- (double)sliderBarCenterY;
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
- (void)setValue:(double)arg1;
- (double)value;
- (void)configAutoAttachDotValues:(id)arg1;
- (double)checkAndAdjustDotValueForAutoAttach:(double)arg1;
- (unsigned long long)getSliderDragStateFromPanGestureState:(long long)arg1;
- (void)onPanProgressIcon:(id)arg1;
- (void)updateUIWithDragState:(unsigned long long)arg1;
- (void)updateUIWithValue:(double)arg1;
- (void)updateWidgetsOrigin;
- (void)layoutProgressIconButton;
- (void)layoutLeftBarView;
- (void)layoutRightBarView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initNotifications;
- (void)initGestures;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

