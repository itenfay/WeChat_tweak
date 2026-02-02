//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBaseSessionStorage, NSMutableDictionary, NSString, WCTDatabase;

@interface TemplateSessionMgr
{
    _Bool _showTemplateSessionList;
    _Bool _scanOver;
    unsigned int _scanCreateTime;
    unsigned int _scanLocalID;
    NSString *_currentShowSessionId;
    WCTDatabase *_sessionMsgDB;
    unsigned long long _curScanType;
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_cellDataCache;
    NSMutableDictionary *_sessionUpdateDic;
    NSMutableDictionary *_indexUpdateDic;
}

+ (id)getContactByMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *indexUpdateDic; // @synthesize indexUpdateDic=_indexUpdateDic;
@property(retain, nonatomic) NSMutableDictionary *sessionUpdateDic; // @synthesize sessionUpdateDic=_sessionUpdateDic;
@property(nonatomic) unsigned int scanLocalID; // @synthesize scanLocalID=_scanLocalID;
@property(nonatomic) unsigned int scanCreateTime; // @synthesize scanCreateTime=_scanCreateTime;
@property(nonatomic) _Bool scanOver; // @synthesize scanOver=_scanOver;
@property(retain, nonatomic) NSMutableDictionary *cellDataCache; // @synthesize cellDataCache=_cellDataCache;
@property(retain, nonatomic) MMBaseSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(nonatomic) unsigned long long curScanType; // @synthesize curScanType=_curScanType;
@property(retain, nonatomic) WCTDatabase *sessionMsgDB; // @synthesize sessionMsgDB=_sessionMsgDB;
@property(retain, nonatomic) NSString *currentShowSessionId; // @synthesize currentShowSessionId=_currentShowSessionId;
@property(nonatomic) _Bool showTemplateSessionList; // @synthesize showTemplateSessionList=_showTemplateSessionList;
- (void)onExptItemListChange;
- (id)getMsgIndexTableByUsr:(id)arg1;
- (id)sessionInfoByName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionCellDataByName:(id)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (unsigned int)sessionCount;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)onImportMessageSuccess;
- (void)onRebuildSessionStorage;
- (void)onSessionUpgrade;
- (void)onDeleteSessionOfUser:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isContactNeedProcess:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (id)allTemplateContact;
- (void)updateTemplateContact;
- (void)reportTemplateAction:(id)arg1;
- (void)updateSesssionContact:(id)arg1;
- (void)updateSessionCellData:(id)arg1;
- (id)getContactByUsr:(id)arg1 messageWrap:(id)arg2;
- (id)getContactByUsr:(id)arg1;
- (void)deleteAllMessageIndex;
- (void)onScanHistoryMessageOver;
- (void)waitNextScan;
- (void)scanHistoryMessage;
- (_Bool)tryStartScanHistoryMessage;
- (void)makeSessionDB;
- (void)handleAllNewMessageOver;
- (void)updateAllSessionMessageCount;
- (void)updateOneSessionMessageCount:(id)arg1;
- (void)updateSessionByLastMessage:(id)arg1;
- (void)updateMsgIndexByMessage:(id)arg1;
- (void)handleNewMessage:(id)arg1;
- (const void *)orderOfAscCreateTimeAndMsgLocalId;
- (const void *)orderOfDescCreateTimeAndMsgLocalId;
- (id)getMinScanedIndex;
- (void)setMinScanedIndex:(id)arg1;
- (id)getMinScanedIndexTableName;
- (_Bool)haveRealUsrInMessage:(id)arg1;
- (id)tableNameFromUsrName:(id)arg1;
- (_Bool)isTemplateUserName:(id)arg1;
- (id)getSessionMsgDBPath;
- (void)checkSwitch;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

