//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMDB, NSDate, NSMutableArray, NSRecursiveLock, NSString;

@interface SendMessageMgr
{
    NSRecursiveLock *m_oLock;
    _Bool m_isSending;
    unsigned int m_uiSyncSendCount;
    NSDate *m_dtLastSyncSend;
    NSString *m_path;
    NSMutableArray *m_messageQueue;
    CMMDB *m_oMMDB;
}

+ (_Bool)isMessageWrapSendUseSendMessageMgr:(id)arg1;
+ (unsigned long long)SendMessageCountLimit;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SendMsg;
- (void)CheckResend;
- (_Bool)IsSendingMsg;
- (void)onNewSyncOplogOK;
- (id)getPBPath;
- (unsigned long long)GetCountOfSendMessage;
- (id)getSendMessages;
- (unsigned int)deleteSendMsgInArray:(id)arg1 withChatName:(id)arg2 localId:(unsigned int)arg3;
- (void)DeleteSendMessageByChatName:(id)arg1 localId:(unsigned int)arg2;
- (void)AddMsgToSendTable:(id)arg1 MsgWrap:(id)arg2;
- (void)saveMessages:(id)arg1;
- (id)loadMessages;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

