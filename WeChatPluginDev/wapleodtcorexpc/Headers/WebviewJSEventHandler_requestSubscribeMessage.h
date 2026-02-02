//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandTemplateMsgAuthLogic, JSEvent, NSString;

@interface WebviewJSEventHandler_requestSubscribeMessage
{
    JSEvent *_event;
    BrandTemplateMsgAuthLogic *_logic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandTemplateMsgAuthLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
- (id)pageSheetLifecyclePlugin;
- (id)viewControllerToShowPageSheet;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogic:(id)arg1 finishedWithResult:(id)arg2 extInfo:(id)arg3 success:(_Bool)arg4 errorCode:(long long)arg5 errorMessage:(id)arg6;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

