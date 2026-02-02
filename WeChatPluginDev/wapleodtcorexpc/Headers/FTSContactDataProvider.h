//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface FTSContactDataProvider
{
    NSMutableDictionary *_dicContact;
    NSMutableArray *_arrSessionContact;
    NSMutableDictionary *_dicNewestCreateTimeForSession;
    NSMutableDictionary *_dicTagNames;
    NSMutableDictionary *_dicZoneNames;
    NSMutableDictionary *_dicZoneCode;
    NSMutableArray *_arrSingleContact;
    NSMutableArray *_arrSingleFriendContact;
    NSMutableArray *_arrGroupContact;
    NSMutableArray *_arrOpenImContact;
    NSMutableArray *_arrBrandContact;
    _Bool _hasLoadedSessionContact;
    _Bool _hasLoadedChatRoomData;
    NSMutableSet *_ftsContactVerifySet;
    unsigned int _lastVerifyTime;
    NSMutableSet *_setChatRoomWithoutMemList;
    NSRecursiveLock *m_loadAllContactsUseLock;
    ContactsDataLogic *m_contactsDataLogic;
}

+ (_Bool)isFtsValidContact:(id)arg1 needGroupMember:(_Bool)arg2 checkListType:(_Bool)arg3;
+ (_Bool)isFtsValidContact:(id)arg1;
- (void).cxx_destruct;
- (void)makeupFtsContactSource:(id)arg1;
- (void)internalReportSourceVerifyStatusWithSession:(id)arg1 andListContact:(id)arg2;
- (void)internalReportChatRoomStatus;
- (void)internalVerifySourceConsistency;
- (void)verifyChatRoomStatus:(id)arg1;
- (void)tryDoVerifyReport;
- (void)onRegionCodeReload;
- (void)onContactTagNameUpdate:(id)arg1;
- (void)onAllTagNameUpdate;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onModifyContact:(id)arg1;
- (_Bool)hasInitSessionContact;
- (_Bool)hasLoadedChatRoomData;
- (_Bool)hasLoadedSessionContact;
- (_Bool)hasAllContactLoaded;
- (id)getDicZoneNames;
- (id)getDicTagNames;
- (id)getDicSessionCreateTime;
- (id)getDicContacts;
- (id)getOpenImContact;
- (id)getGroupContact;
- (id)getBrandContact;
- (id)getMMSingleFriendContact;
- (id)getMMSingleContact;
- (id)getMMSingleContactsWithGroup;
- (id)getMMSingleContactsWithOpenIM;
- (id)getAllContacts:(_Bool)arg1;
- (void)updateChatRoomData:(id)arg1;
- (void)asyncParseChatRoomData:(id)arg1;
- (void)tryInitSessionContactTime;
- (void)deleteContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)updateZone:(id)arg1;
- (void)reloadZone:(id)arg1;
- (void)tryLoadContacts:(id)arg1;
- (void)tryLoadContacts;
- (id)loadSessionUserName:(id)arg1;
- (void)loadAllSessionContact;
- (void)notifyReload;
- (void)doInit;
- (void)clearSessionCreateTime;
- (void)clearData;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

