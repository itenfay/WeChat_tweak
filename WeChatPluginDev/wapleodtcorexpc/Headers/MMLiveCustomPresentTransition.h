//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveCustomPresentTransition
{
}

- (void)innerExtendForMaximizeToAllOfScreen:(id)arg1 fromView:(id)arg2 toView:(id)arg3 finalRect:(struct CGRect)arg4;
- (void)innerExtendForMaximizeToPartOfScreen:(id)arg1 fromView:(id)arg2 toView:(id)arg3 maximizeRect:(struct CGRect)arg4 finalRect:(struct CGRect)arg5;
- (struct CGRect)getToViewFinalRect;
- (void)animateTransition:(id)arg1;
- (void)defaultAnimateTransitionPresentDownToTop:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

