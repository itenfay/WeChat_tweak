//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCEliminatedSlotMMKV, WCTDatabase, WCTTable;

@interface WWKFContactMgr
{
    NSMutableDictionary *_userName2ContactMap;
    NSMutableDictionary *_appId2ContactsMap;
    WCEliminatedSlotMMKV *_slotKv;
    WCTDatabase *_db;
    WCTTable *_tableContact;
}

+ (id)wwkfKeyUrlForKfUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *tableContact; // @synthesize tableContact=_tableContact;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
@property(retain, nonatomic) WCEliminatedSlotMMKV *slotKv; // @synthesize slotKv=_slotKv;
@property(retain, nonatomic) NSMutableDictionary *appId2ContactsMap; // @synthesize appId2ContactsMap=_appId2ContactsMap;
@property(retain, nonatomic) NSMutableDictionary *userName2ContactMap; // @synthesize userName2ContactMap=_userName2ContactMap;
- (unsigned int)deleteInvalidContactDefautltInterval;
- (void)updateLastDeleteInvalidContactTimeStamp;
- (unsigned int)lastDeleteInvalidContactTimeStamp;
- (_Bool)setCacheContactUserName:(id)arg1 foKFUrl:(id)arg2;
- (id)cacheContactUserNameForKFUrl:(id)arg1;
- (void)openSlotKV;
- (void)mainThread_callModifyContactHeadURLWithContact:(id)arg1;
- (void)mainThread_deleteContactCacheAndCallModifyContactWithContact:(id)arg1;
- (void)mainThread_updateContactCacheAndCallModifyContact:(id)arg1;
- (void)mainThread_updateContactCacheAndCallModifyContactWithContact:(id)arg1;
- (void)tryDeleteInvalidWWKFContacts;
- (unsigned int)addOplogType:(unsigned int)arg1 Buffer:(id)arg2;
- (unsigned int)addOplogWithWWKFContact:(id)arg1 mute:(_Bool)arg2;
- (_Bool)setWWKFContact:(id)arg1 typeBit:(unsigned int)arg2 set:(_Bool)arg3 localSet:(_Bool)arg4;
- (_Bool)deleteContactFromDBAndCache:(id)arg1;
- (_Bool)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (_Bool)updateContactToDBAndCache:(id)arg1;
- (void)setContactToLocal:(id)arg1;
- (id)__getContactsFromCachetWithAppId:(id)arg1;
- (id)__getContactFromCacheWithUserName:(id)arg1;
- (id)getAllWWKFContacts;
- (id)getContactsWithAppId:(id)arg1;
- (id)getContactWithUserName:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)getAllCContactOfWWKF;
- (id)getCContactWithWWKFUserName:(id)arg1;
- (id)pathOfWeWorkKFDB;
- (id)dbContactWithWWKFContact:(id)arg1;
- (id)wwkfContactWithDBContact:(id)arg1;
- (_Bool)db_modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (_Bool)db_deleteContactWithUserName:(id)arg1;
- (_Bool)db_insertOrUpdateContact:(id)arg1;
- (id)db_getContactWithAppId:(id)arg1;
- (id)db_getContactWithUserName:(id)arg1;
- (id)db_getAllContacts;
- (id)wwkfContactDBWillRecoverNotificationName;
- (void)unregisterRecoverNotification;
- (void)registerRecoverNotification;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)closeDB;
- (void)setupTable;
- (void)openDB;
- (void)callDeallocInCatagoryDataBase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

