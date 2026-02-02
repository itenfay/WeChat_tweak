//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCSplitOverDetailContextPresentationController;
@protocol WCSplitBaseTransitionDelegate;

@interface WCSplitOverDetailContextTransition
{
    _Bool _isPresent;
    id <WCSplitBaseTransitionDelegate> _baseDelegate;
    WCSplitOverDetailContextPresentationController *_presentController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) WCSplitOverDetailContextPresentationController *presentController; // @synthesize presentController=_presentController;
@property(nonatomic) __weak id <WCSplitBaseTransitionDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
- (void)onOverDetailViewControllerDismissed;
- (_Bool)wantsInteractiveStart;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)dealloc;
- (struct CGRect)finalFrameForPresentedView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

