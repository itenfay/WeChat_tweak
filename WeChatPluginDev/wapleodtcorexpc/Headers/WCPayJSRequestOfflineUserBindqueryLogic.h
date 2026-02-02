//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaJSEvent, NSString;
@protocol WCPayJSRequestOfflineUserBindqueryLogicDelegate;

@interface WCPayJSRequestOfflineUserBindqueryLogic
{
    id <WCPayJSRequestOfflineUserBindqueryLogicDelegate> _delegate;
    KindaJSEvent *_jsEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KindaJSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
@property(nonatomic) __weak id <WCPayJSRequestOfflineUserBindqueryLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)checkIsKindaOfflinePay;
- (void)onOfflineLogicHandleRequestUserBindqueryJSAPIRet:(_Bool)arg1;
- (void)authFail;
- (void)authOk;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

