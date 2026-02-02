//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol UIViewControllerTransitioningDelegate;

@interface FullScreenViewController
{
    _Bool m_allowAutorotate;
    _Bool _shouldCheckInterfaceOrientations;
    id <UIViewControllerTransitioningDelegate> _m_TransitioningDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCheckInterfaceOrientations; // @synthesize shouldCheckInterfaceOrientations=_shouldCheckInterfaceOrientations;
@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> m_TransitioningDelegate; // @synthesize m_TransitioningDelegate=_m_TransitioningDelegate;
- (void)presentedInViewController:(id)arg1 forceFullScreen:(_Bool)arg2 animated:(_Bool)arg3 pushAvaliable:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)forwardVideoToFriend:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showTransitioningAnimationCompleted;
- (_Bool)hidesStatusBar;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;

@end

