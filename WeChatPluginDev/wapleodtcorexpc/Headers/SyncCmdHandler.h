//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMDB, NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface SyncCmdHandler
{
    NSMutableArray *m_arrMsgList;
    NSMutableDictionary *m_dicWebWxClearUnRead;
    NSMutableArray *m_arrContactList;
    NSMutableDictionary *m_dicChatroomMemberList;
    NSMutableArray *m_arrChatroomContactList;
    NSMutableArray *m_arrMsgDigest;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    _Bool _m_ignoreSession;
    unsigned int _syncMsgNum;
    unsigned long long _addMsgTime;
    unsigned long long _clearUnReadTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long clearUnReadTime; // @synthesize clearUnReadTime=_clearUnReadTime;
@property(nonatomic) unsigned long long addMsgTime; // @synthesize addMsgTime=_addMsgTime;
@property(nonatomic) unsigned int syncMsgNum; // @synthesize syncMsgNum=_syncMsgNum;
@property(nonatomic) _Bool m_ignoreSession; // @synthesize m_ignoreSession=_m_ignoreSession;
- (int)handleAddMessageActionNotifyData:(id)arg1;
- (void)HandleModUsrImg:(id)arg1;
- (void)BatchModChatroomMember;
- (void)BatchModContact;
- (id)HandleMemContactDetail:(id)arg1 isSimplify:(_Bool)arg2;
- (void)HandleModContact:(id)arg1;
- (_Bool)AddHelloMessageToDB:(id)arg1 HelloUser:(id)arg2 MsgWrap:(id)arg3 Des:(unsigned int)arg4 OpCode:(unsigned int)arg5 GetChangeDisplay:(_Bool *)arg6;
- (_Bool)AddHelloMsg:(id)arg1 HelloUser:(id)arg2 ChatName:(id)arg3 Des:(unsigned int)arg4 OpCode:(unsigned int)arg5 DBRet:(_Bool *)arg6 GetChangeDisplay:(_Bool *)arg7;
- (_Bool)HandleHelloMsg:(id)arg1 SpcialSession:(id)arg2 NotAddDBSession:(id)arg3 GetChangeDisplay:(_Bool *)arg4;
- (void)AddSpecialMsg:(id)arg1 ChatName:(id)arg2 MsgWrap:(id)arg3;
- (unsigned int)StatusNotifyParseCreateTime:(id)arg1 chatName:(id)arg2;
- (void)ParseStatusNotify:(id)arg1 map:(id)arg2;
- (id)StatusNotifyParseUsrName:(struct XmlReaderNode_t *)arg1 msgWrap:(id)arg2;
- (_Bool)checkLastAddMsg:(id)arg1 chatName:(id)arg2;
- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2;
- (_Bool)processSpecialMessage:(id)arg1;
- (_Bool)handleBatchMessages:(id)arg1 isFromPushData:(_Bool)arg2 ShowPush:(_Bool)arg3;
- (_Bool)handleBatchMessages:(id)arg1;
- (_Bool)HandleBatch:(_Bool)arg1 ShowPush:(_Bool)arg2;
- (_Bool)handleCmds:(id)arg1 isFromPushData:(_Bool)arg2 showLocalPush:(_Bool)arg3;
- (id)init;

@end

