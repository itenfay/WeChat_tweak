//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface EnterpriseChatMgr
{
    NSMutableSet *m_markingMsgRead;
    NSMutableSet *m_pendingMarkMsgRead;
}

- (void).cxx_destruct;
- (void)requestInviteShareInfo:(id)arg1;
- (void)onBizTransferResult:(int)arg1 errorMsg:(id)arg2 cmd:(unsigned int)arg3 bodyData:(id)arg4 mainBrandUserName:(id)arg5;
- (void)handleBizTransfer:(id)arg1;
- (void)bizTransferReq:(unsigned int)arg1 bizBody:(id)arg2 mainBrandUserName:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)clearUnReadForRemoteDevice:(id)arg1;
- (void)onRemoteDeviceMarkChatRead:(id)arg1;
- (void)onRemoteDeviceQuitChat:(id)arg1;
- (void)onRemoteDeviceEnterChat:(id)arg1;
- (void)statusNotifyMarkRead:(id)arg1;
- (void)statusNotifyQuitSession:(id)arg1;
- (void)statusNotifyEnterSession:(id)arg1;
- (void)handleStatusNotifyResp:(id)arg1;
- (void)statusNotify:(id)arg1 code:(int)arg2 arg:(id)arg3;
- (unsigned int)genRandomClienMsgId;
- (void)handleQyMsgStateNotifyResp:(id)arg1;
- (void)qyStatusNotify:(id)arg1 bizChatId:(id)arg2;
- (void)markChatRead:(id)arg1;
- (void)quitChat:(id)arg1;
- (void)enterChat:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

