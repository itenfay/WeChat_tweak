//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WASubscriptionMessageLogic;

@interface WAJSEventHandler_requestSubscribeMessage
{
    WASubscriptionMessageLogic *_logic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WASubscriptionMessageLogic *logic; // @synthesize logic=_logic;
- (id)viewControllerToShowPageSheet;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogic:(id)arg1 finishedWithResult:(id)arg2 success:(_Bool)arg3 cancel:(_Bool)arg4 errorMessage:(id)arg5 errorCode:(long long)arg6;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

