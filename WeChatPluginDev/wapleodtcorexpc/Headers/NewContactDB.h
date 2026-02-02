//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSRecursiveLock, WCTDatabase, WCTTable;

@interface NewContactDB : NSObject
{
    WCTDatabase *m_contactDB;
    NSRecursiveLock *m_lock;
    NSDictionary *m_indexRecord;
    WCTTable *_m_tableContact;
    WCTTable *_m_tableOpenIMContact;
    WCTTable *_m_tableMassSendContact;
    WCTTable *_m_tableContactSendMsgTicket;
    WCTTable *_m_tableChatRoomToolWeApp;
    WCTTable *_m_tableIndexRecord;
    WCTTable *_m_tableChatRoomTopMsg;
    WCTTable *_m_tableCacheOptimizeStrategy;
    WCTTable *_m_tableCacheOptimizeStrategyScore;
    WCTTable *_m_tableCacheAccessUserFeatureRecrod;
}

+ (id)contactDBPathWithDocDir:(id)arg1 userName:(id)arg2;
+ (unsigned int)imgStatusToEnum:(id)arg1;
+ (id)imgStatusToString:(unsigned long long)arg1;
+ (unsigned long long)getFTSContactIndexRecordType:(id)arg1;
- (void).cxx_destruct;
@property(retain) WCTTable *m_tableCacheAccessUserFeatureRecrod; // @synthesize m_tableCacheAccessUserFeatureRecrod=_m_tableCacheAccessUserFeatureRecrod;
@property(retain) WCTTable *m_tableCacheOptimizeStrategyScore; // @synthesize m_tableCacheOptimizeStrategyScore=_m_tableCacheOptimizeStrategyScore;
@property(retain) WCTTable *m_tableCacheOptimizeStrategy; // @synthesize m_tableCacheOptimizeStrategy=_m_tableCacheOptimizeStrategy;
@property(retain) WCTTable *m_tableChatRoomTopMsg; // @synthesize m_tableChatRoomTopMsg=_m_tableChatRoomTopMsg;
@property(retain) WCTTable *m_tableIndexRecord; // @synthesize m_tableIndexRecord=_m_tableIndexRecord;
@property(retain) WCTTable *m_tableChatRoomToolWeApp; // @synthesize m_tableChatRoomToolWeApp=_m_tableChatRoomToolWeApp;
@property(retain) WCTTable *m_tableContactSendMsgTicket; // @synthesize m_tableContactSendMsgTicket=_m_tableContactSendMsgTicket;
@property(retain) WCTTable *m_tableMassSendContact; // @synthesize m_tableMassSendContact=_m_tableMassSendContact;
@property(retain) WCTTable *m_tableOpenIMContact; // @synthesize m_tableOpenIMContact=_m_tableOpenIMContact;
@property(retain) WCTTable *m_tableContact; // @synthesize m_tableContact=_m_tableContact;
- (id)getTableNameOpenIMContactName;
- (id)getTableNameContactName;
- (id)getContactSendMsgTicket:(id)arg1;
- (_Bool)insertOrReplaceContactSendMsgTicket:(id)arg1;
- (id)m_database;
- (_Bool)ModifyContactEncryptSecret:(id)arg1 withEncryptSecretInfo:(id)arg2;
- (unsigned int)getContactCount;
- (_Bool)internalUpdateContact:(id)arg1;
- (_Bool)updateContact:(id)arg1;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (_Bool)internalAddContact:(id)arg1 log:(_Bool)arg2;
- (_Bool)addContact:(id)arg1 log:(_Bool)arg2;
- (id)genDBContactFrom:(id)arg1;
- (_Bool)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllUserName:(id)arg1;
- (_Bool)loadContactExtInfo:(id)arg1;
- (id)getContact:(id)arg1;
- (void)getFriendExtTableValue:(id)arg1 fromDBObject:(id)arg2;
- (void)getFriendTableValue:(id)arg1 fromDBObject:(id)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)initDBWithDocDir:(id)arg1 userName:(id)arg2;
- (void)createContactTable;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (id)init;
- (id)getChatRoomStrangerRemarkWithUserName:(id)arg1;
- (unsigned int)getAllChatRoomStrangerCount;
- (unsigned int)getAllChatRoomMemberCount;
- (void)printGetAllChatRoomMemberRemarkErrorSql:(id)arg1;
- (struct Statement)genchatRoomMemberRemarkWithTableName:(id)arg1 arrNeedLoadChatRoomUser:(id)arg2;
- (_Bool)getAllChatRoomMemberRemarkList:(id)arg1 arrNeedLoadChatRoomUser:(id)arg2;
- (unsigned int)getFirstRecordCacheOptimizeInfoTime;
- (_Bool)removeContactCacheAccessUserFeatureRecrodsToTime:(unsigned int)arg1;
- (_Bool)addContactCacheAccessUserFeatureRecrods:(id)arg1;
- (unsigned int)getMatchStrategyFeatureRecordCountFromTime:(double)arg1 strategyFeature:(id)arg2;
- (id)getBestCacheOptimizeStrategyFromTime:(double)arg1;
- (void)createContactCacheOptimizeTable;
- (id)getChatRoomToolWeAppListWithUserName:(id)arg1;
- (_Bool)deleteChatRoomToolWeAppWithUserName:(id)arg1 insertNewWeAppItemList:(id)arg2;
- (_Bool)checkIsHadTopMsgWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (_Bool)insertOrUpdateNewTopMsgListWithUserName:(id)arg1 newTopMsgList:(id)arg2;
- (_Bool)setChatRoomTopMsgExposureTimeWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2 exposureTime:(unsigned int)arg3;
- (_Bool)setChatRoomTopMsgLocalRevokeWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (id)getChatRoomTopMsgInfoListWithUserName:(id)arg1 isAllResult:(_Bool)arg2;
- (_Bool)addChatRoomTopMsgLocalWithUserName:(id)arg1 topMsgInfo:(id)arg2;
- (_Bool)removeChatRoomTopMsgLocalWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (_Bool)removeChatRoomTopMsgLocalWithUserName:(id)arg1 topId:(unsigned int)arg2;
- (_Bool)deleteChatRoomTopMsgWithUserName:(id)arg1 insertNewTopMsgList:(id)arg2;
- (_Bool)markIndexUpdatedOfType:(unsigned long long)arg1 success:(_Bool)arg2;
- (id)getValidContact:(id)arg1;
- (id)getUnIndexContactOfType:(unsigned long long)arg1 limit:(unsigned int)arg2;
- (void)tryPurgeIndexRecord:(id)arg1;
- (_Bool)markNeedUpdateFTSIndexForContact:(id)arg1;
- (id)getIndexRecordOfType:(unsigned long long)arg1;
- (id)getIndexRecordForContact:(id)arg1;
- (unsigned int)getUnIndexRecordCountOfType:(unsigned long long)arg1;
- (id)getIndexRecordOfTypeForFTS:(unsigned long long)arg1;
- (void)clearAllIndexRecord;
- (id)readIndexRecordFromDB;

@end

