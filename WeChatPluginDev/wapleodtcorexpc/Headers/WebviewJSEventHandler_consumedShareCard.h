//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCNewShareCardConsumedView;

@interface WebviewJSEventHandler_consumedShareCard
{
    NSString *_consumedCardId;
    NSString *_consumedCode;
    WCNewShareCardConsumedView *_newconsumedView;
}

- (void).cxx_destruct;
- (void)onShareCardConsumedViewCloseBtnClick;
- (void)onShareCardAfterConsumed:(_Bool)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

