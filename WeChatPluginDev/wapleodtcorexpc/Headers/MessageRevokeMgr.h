//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MessageRevokeMgr
{
    NSMutableArray *_arrRevokeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrRevokeInfo; // @synthesize arrRevokeInfo=_arrRevokeInfo;
- (void)onRevokeMsg:(id)arg1;
- (void)onGetSvrIdWithUploadMsg:(id)arg1 SvrId:(unsigned long long)arg2;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)OnMsgSendFail:(id)arg1;
- (void)OnSendMessageFail:(id)arg1;
- (void)OnSendMessageSuccess:(id)arg1;
- (_Bool)revokeMsgIfNeed:(id)arg1;
- (void)replaceRevokedMsg:(id)arg1;
- (void)deleteLocalProcessRevokeMsgWithToast:(id)arg1;
- (_Bool)deleteRevokeInfoWithMessage:(id)arg1;
- (id)getRevokeInfoWithSvrID:(long long)arg1;
- (id)getRevokeInfoWithMessage:(id)arg1;
- (int)getSendingSendStatusWithMsg:(id)arg1;
- (_Bool)isOpenRevokeWhenSending;
- (id)getMessageWrapWithOverwriteMsgID:(long long)arg1 chatName:(id)arg2;
- (void)onRevokeMsgFinish:(id)arg1 response:(id)arg2 msgWrap:(id)arg3;
- (void)onRevokeMsgFinish:(id)arg1 response:(id)arg2 revokeInfo:(id)arg3;
- (void)sendRevorkRequest:(id)arg1 revokeInfo:(id)arg2;
- (_Bool)RevokeMsg:(id)arg1 MsgWrap:(id)arg2 Counter:(unsigned int)arg3 revokeTicket:(id)arg4 viewController:(id)arg5;
- (void)onServiceClearData;
- (void)addOrUpdateOccupyMsgRevokeInfo:(id)arg1 overwriteMsgID:(unsigned long long)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

