//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MessagePageSheetPresentationController, NSString;

@interface MessagePageSheetTransition : NSObject
{
    MessagePageSheetPresentationController *_presentationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MessagePageSheetPresentationController *presentationController; // @synthesize presentationController=_presentationController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)callFromViewControllerAppear;
- (void)callFromViewControllerDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

