//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultitalkMinimizeViewController, NSString, SequenceAnimationObject;
@protocol MultitalkMinimizeWindowDelegate;

@interface MultitalkMinimizeWindow
{
    SequenceAnimationObject *m_animationObject;
    MultitalkMinimizeViewController *m_viewController;
    id <MultitalkMinimizeWindowDelegate> _m_delegate;
    SequenceAnimationObject *_m_animationObjectForAlpha;
    long long _m_startOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_startOrientation; // @synthesize m_startOrientation=_m_startOrientation;
@property(retain, nonatomic) SequenceAnimationObject *m_animationObjectForAlpha; // @synthesize m_animationObjectForAlpha=_m_animationObjectForAlpha;
@property(nonatomic) __weak id <MultitalkMinimizeWindowDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) MultitalkMinimizeViewController *m_viewController; // @synthesize m_viewController;
@property(retain, nonatomic) SequenceAnimationObject *m_animationObject; // @synthesize m_animationObject;
- (void)onMultitalkMinimizeViewControllerTap;
- (struct CGRect)fullScreenRect;
- (void)makeKeyWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showMinimizeWindow;
- (void)hideMinimizeWindow;
- (struct CGRect)vaildFrame;
- (void)updateDescMode:(unsigned long long)arg1 withDisplayTime:(double)arg2;
- (void)startTimer;
- (void)setBackgroundColor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

