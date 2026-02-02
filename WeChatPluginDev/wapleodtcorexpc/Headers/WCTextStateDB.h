//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString, WCTDatabase, WCTTable;

@interface WCTextStateDB
{
    WCTDatabase *_database;
    WCTTable *_doLikeInfoTable;
    WCTTable *_doLikeInfoCacheTable;
    WCTTable *_commentInfoTable;
    WCTTable *_referenceInfoTable;
    WCTTable *_referenceInfoCacheTable;
    WCTTable *_readInfoTable;
    WCTTable *_textStateTable;
    MemoryMappedKV *_mmkv;
}

+ (id)checkTextStateForAddOrModify:(id)arg1;
+ (struct Expression)existLikeInfoCondition:(id)arg1;
+ (SyntaxList_943f464f)commentCreateTimeDescendOrders;
+ (SyntaxList_943f464f)referenceInfoCreateTimeDescendOrders;
+ (SyntaxList_943f464f)doLikeInfoCreateTimeDescendOrders;
+ (struct Expression)notifyCommentInfoCondition;
+ (struct Expression)notifyReferenceInfoCondition;
+ (struct Expression)notifyDoLikeInfoCondition;
+ (struct Expression)unreadCommentInfoCondition;
+ (struct Expression)unreadReferenceInfoCondition;
+ (struct Expression)unreadDoLikeInfoCondition;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) WCTTable *textStateTable; // @synthesize textStateTable=_textStateTable;
@property(retain, nonatomic) WCTTable *readInfoTable; // @synthesize readInfoTable=_readInfoTable;
@property(retain, nonatomic) WCTTable *referenceInfoCacheTable; // @synthesize referenceInfoCacheTable=_referenceInfoCacheTable;
@property(retain, nonatomic) WCTTable *referenceInfoTable; // @synthesize referenceInfoTable=_referenceInfoTable;
@property(retain, nonatomic) WCTTable *commentInfoTable; // @synthesize commentInfoTable=_commentInfoTable;
@property(retain, nonatomic) WCTTable *doLikeInfoCacheTable; // @synthesize doLikeInfoCacheTable=_doLikeInfoCacheTable;
@property(retain, nonatomic) WCTTable *doLikeInfoTable; // @synthesize doLikeInfoTable=_doLikeInfoTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)getSelfStateInteractData:(id)arg1;
- (id)getStatusInfoListCache;
- (id)selectTSModelWithStateId:(id)arg1;
- (void)constructStatusInfoCache;
@property(nonatomic) _Bool showNewMessageReddot;
- (void)removeAllCachedNotifyUserNames;
- (void)cacheNotifyUserName:(id)arg1;
- (id)cachedNotifyUserNames;
- (id)privateTextStateForId:(id)arg1;
- (void)batchClearExpireTextStates;
- (id)batchTextStateListWithOffset:(unsigned int)arg1 maxCount:(unsigned int)arg2;
- (id)textStateListForUsername:(id)arg1 maxCount:(unsigned int)arg2;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (id)highestSequenceTextStateForUsername:(id)arg1;
- (_Bool)batchForceDeleteTextStateForUsername:(id)arg1;
- (_Bool)addDeletedTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2 createTime:(unsigned int)arg3;
- (_Bool)deleteTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2;
- (_Bool)deleteTextStateForId:(id)arg1 sequence:(unsigned int)arg2;
- (_Bool)deleteTextStateForId:(id)arg1;
- (_Bool)batchAddOrModifyTextStateList:(id)arg1;
- (_Bool)addOrModifyTextState:(id)arg1 deleteExist:(_Bool)arg2 checkSequence:(_Bool)arg3;
- (id)getAllUnreadReferenceInfo;
- (void)markAllReferenceRead;
- (id)getReferenceInfoWithTextStateId:(id)arg1 maxCount:(unsigned int)arg2;
- (void)removeAllTextStateReferenceInfos;
- (void)removeTextStateReferenceInto:(id)arg1;
- (_Bool)addTextStateReferenceInfo:(id)arg1;
- (void)clearAllMessage;
- (void)clearExpiredReadInfo;
- (_Bool)setReadForTextStateId:(id)arg1 topicId:(id)arg2 expiredTime:(unsigned int)arg3 username:(id)arg4;
- (_Bool)isTextStateRead:(id)arg1;
- (id)getCommentInfoWithTextStateId:(id)arg1 withLimit:(unsigned int)arg2;
- (id)getLikeInfoWithTextStateId:(id)arg1 withLimit:(unsigned int)arg2;
- (id)getAllUnreadCommentInfos;
- (id)getAllUnreadCommentInfoWithLimit:(unsigned int)arg1;
- (id)getAllCommentsWithLimit:(unsigned int)arg1 maxCreateTime:(unsigned int)arg2;
- (void)markAllCommentInfoRead;
- (void)markAllLikeInfoRead;
- (id)getAllLikeInfoWithTime:(unsigned int)arg1 withLimit:(unsigned int)arg2;
- (id)getAllLikeInfoLimit:(unsigned int)arg1 maxCreateTime:(unsigned int)arg2;
- (id)getUnreadLikeInfoWithCount:(unsigned long long)arg1;
- (id)getAllUnreadLikeInfo;
- (void)removeAllComments;
- (void)removeComemnt:(id)arg1 byMarkCommentDeleted:(_Bool)arg2;
- (_Bool)addComment:(id)arg1;
- (void)removeAllTextStateLikeInfos;
- (void)removeTextStateLikeInto:(id)arg1;
- (_Bool)addTextStateLikeInfo:(id)arg1;
- (void)updateCachedCommentCount:(id)arg1;
- (void)updateCachedCommentCount:(unsigned long long)arg1 textStateId:(id)arg2;
- (void)updateNotifyCacheItem:(id)arg1;
- (id)notifyCacheItemWithTextStateId:(id)arg1 forceCreate:(_Bool)arg2;
- (id)notifyCacheItemWithTextStateId:(id)arg1;
- (id)genNotifyCacheItemFromDBWith:(id)arg1;
- (unsigned int)commentCountWithTextStateId:(id)arg1;
- (unsigned int)interactionCountWithTextStateId:(id)arg1;
- (void)onReceiveInfoWithTextStateId:(id)arg1;
- (id)getAllUnreadLatestNotifyInfos;
- (id)getLatestNotifyInfosWithLoadCount:(unsigned int)arg1 isUnread:(_Bool)arg2 maxCreateTime:(unsigned int)arg3;
- (void)markAllNewMessageRead;
- (void)markAllNotifyRead;
- (unsigned int)getUnreadSystemNotifyCount;
- (unsigned int)getTotalMessageCount;
- (unsigned int)getUnreadCommentCount;
- (unsigned int)getUnreadLikeCount;
- (unsigned int)getTotalUnreadMessageCount;
- (_Bool)deleteExistReferenceInfoWithInfo:(id)arg1 table:(id)arg2;
- (_Bool)deleteExistLikeInfosWithInfo:(id)arg1 table:(id)arg2;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void)initKV;
- (void)closeDB;
- (void)createTextStateTable;
- (void)createReferenceInfoCacheTable;
- (void)createReferenceInfoTable;
- (void)createReadInfoTable;
- (_Bool)createDoLikeInfoCacheTable;
- (_Bool)createCommentInfoTable;
- (_Bool)createDoLikeInfoTable;
- (void)createTables;
- (_Bool)reloadDataBase;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

