//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCCardAddHelper;

@interface WebviewJSEventHandler_batchAddCard
{
    JSEvent *_jsEvent;
    WCCardAddHelper *_addHelper;
}

- (void).cxx_destruct;
- (void)onAddCancel;
- (void)onAddFail:(id)arg1;
- (void)onAddSuccess:(id)arg1;
- (id)getViewController;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

