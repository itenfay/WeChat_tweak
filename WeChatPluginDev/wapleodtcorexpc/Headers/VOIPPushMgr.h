//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VOIPPushMgr
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipInviteRemindResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipAckResp:(id)arg1 Event:(unsigned int)arg2;
- (void)SendAckRequestByRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2 andContact:(id)arg3 andAckStatus:(int)arg4 needPreconnect:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

