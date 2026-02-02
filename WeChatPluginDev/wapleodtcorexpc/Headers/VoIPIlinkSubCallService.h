//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, VoIPIlinkSubCallCache;

@interface VoIPIlinkSubCallService
{
    _Bool _isWaitingForAccept;
    VoIPIlinkSubCallCache *_cache;
    unsigned long long _endingRoomID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long endingRoomID; // @synthesize endingRoomID=_endingRoomID;
@property(nonatomic) _Bool isWaitingForAccept; // @synthesize isWaitingForAccept=_isWaitingForAccept;
@property(retain, nonatomic) VoIPIlinkSubCallCache *cache; // @synthesize cache=_cache;
- (void)voIPInvitationServiceDidRejectWithInfo:(id)arg1;
- (void)voIPInvitationServiceWillAcceptWithInfo:(id)arg1;
- (void)voIPConfSDKServiceWillInterrputVoIPByCall:(_Bool)arg1;
- (void)voIPConfSDKServiceOnReceiveMainCallEndEvent;
- (void)voIPConfSDKServiceOnReceiveEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 ret:(id)arg4;
- (_Bool)onMonoServiceMsgHoldWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgHandleWithMsg:(id)arg1;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (void)onServiceClearData;
- (id)init;
- (_Bool)acceptWithRoomID:(unsigned long long)arg1;
- (void)tryToAccept;
- (void)cancel;
- (void)reject;
- (void)receiveInviteData:(id)arg1;
- (_Bool)receiveCancelInviteMsg:(id)arg1 fromUsername:(id)arg2 withMsgWrap:(id)arg3;
- (_Bool)receiveInviteMsg:(id)arg1 fromUsername:(id)arg2 withMsgWrap:(id)arg3;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

