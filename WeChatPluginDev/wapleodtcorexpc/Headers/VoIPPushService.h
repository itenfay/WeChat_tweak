//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, PKPushRegistry;

@interface VoIPPushService
{
    NSData *m_token;
    PKPushRegistry *m_tokenRetriver;
}

- (void).cxx_destruct;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
@property(readonly, nonatomic) NSData *voipToken;
- (void)registerVoIP;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

