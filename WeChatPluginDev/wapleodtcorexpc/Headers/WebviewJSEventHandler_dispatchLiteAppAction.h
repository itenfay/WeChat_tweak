//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString;

@interface WebviewJSEventHandler_dispatchLiteAppAction
{
    int _callbackId;
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

