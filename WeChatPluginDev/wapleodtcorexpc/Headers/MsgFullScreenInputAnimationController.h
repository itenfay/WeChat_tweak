//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MsgFullScreenInputDismissAnimator, MsgFullScreenInputPresentAnimator, NSString;

@interface MsgFullScreenInputAnimationController : NSObject
{
    MsgFullScreenInputPresentAnimator *_presentAnimator;
    MsgFullScreenInputDismissAnimator *_dismissAnimator;
    struct CGRect _growTextViewOriginFrame;
    struct CGRect _textViewOriginFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MsgFullScreenInputDismissAnimator *dismissAnimator; // @synthesize dismissAnimator=_dismissAnimator;
@property(retain, nonatomic) MsgFullScreenInputPresentAnimator *presentAnimator; // @synthesize presentAnimator=_presentAnimator;
@property(nonatomic) struct CGRect textViewOriginFrame; // @synthesize textViewOriginFrame=_textViewOriginFrame;
@property(nonatomic) struct CGRect growTextViewOriginFrame; // @synthesize growTextViewOriginFrame=_growTextViewOriginFrame;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

