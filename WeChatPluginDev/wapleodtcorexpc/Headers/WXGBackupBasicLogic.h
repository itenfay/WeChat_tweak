//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WXGChatLogProtoHandler, WXGLocalAreaCommunicationClient;
@protocol OS_dispatch_queue, WXGBackupBasicLogicDelegate;

@interface WXGBackupBasicLogic : NSObject
{
    _Bool _retransfer;
    _Bool _bStartLogic;
    _Bool _bConfirmLogic;
    _Bool _bInTransfer;
    id <WXGBackupBasicLogicDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_processLogicQueue;
    WXGLocalAreaCommunicationClient *_networkHandler;
    WXGChatLogProtoHandler *_protoHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bInTransfer; // @synthesize bInTransfer=_bInTransfer;
@property(nonatomic) _Bool bConfirmLogic; // @synthesize bConfirmLogic=_bConfirmLogic;
@property(nonatomic) _Bool bStartLogic; // @synthesize bStartLogic=_bStartLogic;
@property(retain, nonatomic) WXGChatLogProtoHandler *protoHandler; // @synthesize protoHandler=_protoHandler;
@property(retain, nonatomic) WXGLocalAreaCommunicationClient *networkHandler; // @synthesize networkHandler=_networkHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processLogicQueue; // @synthesize processLogicQueue=_processLogicQueue;
@property(nonatomic) _Bool retransfer; // @synthesize retransfer=_retransfer;
@property(nonatomic) __weak id <WXGBackupBasicLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)processOnMainThreadAlert:(unsigned long long)arg1;
- (void)processProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)processOnMainThreadProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)processOnMainThreadNotifyCode:(unsigned long long)arg1;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)processFilterResponseData:(id)arg1;
- (void)processFilterRequestData:(id)arg1;
- (void)processFinishRequestData:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processBackupDataTagData:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processDataPushData:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processRequestSessionData:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)processStartResponseData:(id)arg1;
- (void)restartLogic;
- (void)confirmLogic;
- (void)resendService;
- (void)stopService;
- (void)startService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

