//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, UIViewPropertyAnimator;
@protocol UITimingCurveProvider;

@interface WCPopUpWindowViewController
{
    UIView *_popUpView;
    CDUnknownBlockType _willShowCallback;
    CDUnknownBlockType _willHideCallback;
    CDUnknownBlockType _didHideCallback;
    CDUnknownBlockType _hideAnimations;
    double _showDuration;
    double _hideDuration;
    id <UITimingCurveProvider> _showTimingParameters;
    id <UITimingCurveProvider> _hideTimingParameters;
    UIViewPropertyAnimator *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) id <UITimingCurveProvider> hideTimingParameters; // @synthesize hideTimingParameters=_hideTimingParameters;
@property(retain, nonatomic) id <UITimingCurveProvider> showTimingParameters; // @synthesize showTimingParameters=_showTimingParameters;
@property(nonatomic) double hideDuration; // @synthesize hideDuration=_hideDuration;
@property(nonatomic) double showDuration; // @synthesize showDuration=_showDuration;
@property(copy, nonatomic) CDUnknownBlockType hideAnimations; // @synthesize hideAnimations=_hideAnimations;
@property(copy, nonatomic) CDUnknownBlockType didHideCallback; // @synthesize didHideCallback=_didHideCallback;
@property(copy, nonatomic) CDUnknownBlockType willHideCallback; // @synthesize willHideCallback=_willHideCallback;
@property(copy, nonatomic) CDUnknownBlockType willShowCallback; // @synthesize willShowCallback=_willShowCallback;
@property(retain, nonatomic) UIView *popUpView; // @synthesize popUpView=_popUpView;
- (void)hideView;
- (void)showView:(id)arg1 showAnimation:(CDUnknownBlockType)arg2 hideAnimation:(CDUnknownBlockType)arg3;
- (_Bool)popUpViewAvailable;
- (void)clean;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)init;

@end

