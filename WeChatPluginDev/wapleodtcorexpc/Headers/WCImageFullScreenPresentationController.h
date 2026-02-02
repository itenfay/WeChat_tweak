//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPresentationController.h>

@class UIViewController;

@interface WCImageFullScreenPresentationController : UIPresentationController
{
    UIViewController *_sourceViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end

