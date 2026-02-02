//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMDB, MassSendInfo, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MassSendMgr
{
    MassSendInfo *m_info;
    unsigned int m_uiEventID;
    unsigned int m_uiMaxSupport;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    NSMutableDictionary *m_dicContacts;
    _Bool m_bDataNeedReload;
    _Bool m_bCancel;
    _Bool m_bFreqLimit;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MassSendInfo *m_info; // @synthesize m_info;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)GetAllMassSendContact;
- (unsigned int)InsertMassSendContact:(id)arg1;
- (_Bool)HandleMassSendTopMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (id)genMainFrameSessionInfo:(id)arg1;
- (_Bool)isNeedBeTop:(id)arg1;
- (_Bool)GetStartAndEndDateFromXmlContent:(id)arg1 arrStart:(id)arg2 arrEnd:(id)arg3;
- (id)generateVideoRequestDataWithTaskInfo:(id)arg1;
- (id)generateVoiceRequestDataWithTaskInfo:(id)arg1;
- (void)updateImageMsgWrap:(id)arg1 taskInfo:(id)arg2;
- (void)updateVideoMsgWrap:(id)arg1 taskInfo:(id)arg2;
- (void)updateVoiceMsgWrap:(id)arg1 taskInfo:(id)arg2;
- (void)onUploadCdnSucc:(id)arg1;
- (void)uploadDataWithMars;
- (void)tryUploadDataWithMars;
- (void)CancelMassSend;
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelFreqLimit;
- (void)addSystemMsgWithMassMsgSvrID:(unsigned long long)arg1 msgIdForNewXmlList:(id)arg2;
- (void)hanldeMassSendUploadOK:(id)arg1;
- (void)MassSend:(id)arg1;
- (void)CreateMassSendEvent;
- (void)addLocalMessage:(id)arg1;
- (_Bool)SaveMesThumb:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)WriteAudioFile:(id)arg1 LocalID:(unsigned int)arg2 Offset:(unsigned int)arg3 Len:(unsigned int)arg4 Data:(id)arg5;
- (void)safeCallFailExtension:(unsigned int)arg1 WithErrorMsg:(id)arg2;
- (void)safeCallFailExtension:(unsigned int)arg1;
- (id)getToList:(id)arg1;
- (id)getToListMD5:(id)arg1;
- (id)getRealChatUsrByMD5:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initDB:(id)arg1 withLock:(id)arg2;
- (void)addContact:(id)arg1;
- (_Bool)addContactInDB:(id)arg1;
- (id)getContactByName:(id)arg1;
- (_Bool)autoReload;
- (void)getAllContactsFromDB;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

