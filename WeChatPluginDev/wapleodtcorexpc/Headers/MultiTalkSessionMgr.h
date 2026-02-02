//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MultiTalkSessionMgr
{
    WCTDatabase *_dataBase;
    WCTTable *_contactTable;
    WCTTable *_messageTable;
    WCTTable *_sessionTable;
    WCTTable *_bannerTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *bannerTable; // @synthesize bannerTable=_bannerTable;
@property(retain, nonatomic) WCTTable *sessionTable; // @synthesize sessionTable=_sessionTable;
@property(retain, nonatomic) WCTTable *messageTable; // @synthesize messageTable=_messageTable;
@property(retain, nonatomic) WCTTable *contactTable; // @synthesize contactTable=_contactTable;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
- (id)getSubMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)getHeaderMessageContentWithSessionState:(unsigned int)arg1 inviteUserNickName:(id)arg2;
- (id)genMsgJsonContentWithDisplayContentHeader:(id)arg1 subContent:(id)arg2 sessionItem:(id)arg3 msgLocalID:(unsigned int)arg4;
- (_Bool)addNewMultiTalkChatroomMessageWithGroupData:(id)arg1 sessionItem:(id)arg2 msgLocalID:(unsigned int)arg3 isSelfCaller:(_Bool)arg4 sessionState:(unsigned int)arg5 inviteUsername:(id)arg6;
- (_Bool)isGroupDataValid:(id)arg1;
- (void)ChangeSessionUnReadCount:(id)arg1 to:(unsigned int)arg2;
- (unsigned int)getSessionLastMessageIDWithGroupData:(id)arg1;
- (_Bool)insertOrUpdateRowInBannerTable:(id)arg1;
- (_Bool)insertNewRowInBannerTable:(id)arg1;
- (_Bool)insertOrUpdateRowInSessionTable:(id)arg1;
- (_Bool)insertNewRowInSessionTable:(id)arg1;
- (_Bool)insertOrUpdateRowInMessageTable:(id)arg1;
- (_Bool)insertNewRowInMessageTable:(id)arg1;
- (_Bool)insertOrUpdateRowInContactTable:(id)arg1;
- (_Bool)insertNewRowInContactTable:(id)arg1;
- (void)fillBannerItemUpdatePropertiesForBannerObject:(void *)arg1;
- (void)fillSessionItemUpdatePropertiesForSessionObject:(void *)arg1;
- (void)fillMessageItemUpdatePropertiesForMessageObject:(void *)arg1;
- (void)fillContactItemUpdatePropertiesForContactObject:(void *)arg1;
- (id)genSessionItemWithGroupData:(id)arg1;
- (id)genMessageItemWithGroupData:(id)arg1;
- (id)genContactItemWithGroupData:(id)arg1;
- (_Bool)insertOrUpdateSessionWithMultiTalkGroupData:(id)arg1;
- (_Bool)updateMessageWithMessageID:(unsigned int)arg1 multiTalkGroup:(id)arg2 duration:(unsigned int)arg3;
- (id)getAllMultiTalkBannerInfos;
- (_Bool)updateHasGenMessageWithMessageID:(unsigned int)arg1;
- (_Bool)deleteMultiTalkBannerItem:(id)arg1;
- (_Bool)createNewMultiTalkBannerWithGroupData:(id)arg1;
- (_Bool)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(_Bool)arg3 sessionState:(unsigned int)arg4 inviteUsername:(id)arg5;
- (_Bool)createNewMultiTalkMessageWithGroupData:(id)arg1 messageID:(unsigned int)arg2 isSelfCaller:(_Bool)arg3 sessionState:(unsigned int)arg4;
- (unsigned int)createNewMultiTalkMessageDataWithGroupData:(id)arg1;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)createTables;
- (void)clearTables;
- (void)closeDBBeforeInit;
- (void)closeDB;
- (void)initDatabase;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

