//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayUnionTransferNotifyCgi;
@protocol WCPayRetrySendTransferMessageLogicDelegate;

@interface WCPayRetrySendTransferMessageControlLogic
{
    id <WCPayRetrySendTransferMessageLogicDelegate> _logicDelegate;
    WCPayUnionTransferNotifyCgi *_unionNotifyCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayUnionTransferNotifyCgi *unionNotifyCgi; // @synthesize unionNotifyCgi=_unionNotifyCgi;
@property(nonatomic) __weak id <WCPayRetrySendTransferMessageLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)delayStopLogic;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)onWCPayUnionTransferNotifyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferNotifyCgiResponseOK:(id)arg1;
- (void)ToRetrySendMsg;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

