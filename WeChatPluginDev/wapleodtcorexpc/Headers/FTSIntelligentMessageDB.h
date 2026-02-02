//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSDB;

@interface FTSIntelligentMessageDB : NSObject
{
    FTSDB *_database;
    _Bool _isHandlingUsernameFailIdRetry;
    _Bool _isHandlingAutoReparing;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHandlingAutoReparing; // @synthesize isHandlingAutoReparing=_isHandlingAutoReparing;
@property(nonatomic) _Bool isHandlingUsernameFailIdRetry; // @synthesize isHandlingUsernameFailIdRetry=_isHandlingUsernameFailIdRetry;
@property(retain, nonatomic) FTSDB *database; // @synthesize database=_database;
- (void)retrySetUserNameInvalid;
- (void)addUserNameInvalidFail:(id)arg1;
- (_Bool)checkValidIntelligentIndexItemByUserName:(id)arg1;
- (id)queryIntelligentClassificationWithLimitUsrname:(id)arg1 arrClassificationLabelId:(id)arg2;
- (void)getIndexProgressForSession:(id)arg1 preCursor:(unsigned long long *)arg2 nextCursor:(unsigned long long *)arg3;
- (unsigned int)getIndexCountForUsr:(id)arg1;
- (void)getAllSessions:(unsigned int *)arg1 andAllIndexMsg:(unsigned int *)arg2;
- (_Bool)updateToDeleteIntelligentLocalIds:(id)arg1 usr:(id)arg2;
- (_Bool)deleteInvalidIntelligentRowsInChatTable:(unsigned int)arg1 outUsr:(id *)arg2 outRemains:(unsigned int *)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (_Bool)hasInvalidIntelligentRowsInChatTable;
- (_Bool)checkQueryIsSecureRank:(id)arg1;
- (void)insertSecureRank:(id)arg1;
- (id)getReportIntelligentMsgEveryDay;
- (id)queryIntelligentMsg:(id)arg1 msgLocalId:(unsigned int)arg2;
- (id)queryIntelligentMsgWithSimilarWord:(id)arg1 arrClassificationLabelId:(id)arg2;
- (id)queryIntelligentFaceClusterWithLimitUsrname:(id)arg1 arrMsgItem:(id)arg2 searchQuery:(id)arg3;
- (_Bool)updateFaceClusterItemFaceFeatureWithId:(unsigned int)arg1 arrFaceFeature:(id)arg2;
- (long long)getLastIntelligentFaceClusterFaceLabelId;
- (id)getAllFaceClusterList;
- (unsigned int)getPreCursorMesId:(id)arg1;
- (unsigned int)getNextCursorMesId:(id)arg1;
- (void)updateDirkMsgIfNeededForChatTable:(id)arg1 leftIds:(id)arg2 cmpMsgList:(id)arg3;
- (unsigned int)queryCountText:(id)arg1 limitUsrname:(id)arg2 searchType:(unsigned int)arg3;
- (id)queryText:(id)arg1 limitUsrname:(id)arg2 searchType:(unsigned int)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (_Bool)completionUpdateL2NormFaceClusterWithFaceClusterLabelId:(unsigned int)arg1 arrL2NormFaceFeature:(id)arg2;
- (_Bool)repairFaceClusterLabelId:(unsigned int)arg1 arrRepeatFaceClusterLabelId:(id)arg2;
- (id)getIntelligentFaceClusterWithFaceLabelId:(long long)arg1;
- (id)queryIntelligentFaceClusterMsgLocalIdListWithLimitUsrname:(id)arg1 faceLabelId:(unsigned int)arg2;
- (_Bool)updateFts5IntelligentMsgContentHasDownLoadFlagWithUserName:(id)arg1 msgLocalId:(unsigned int)arg2;
- (_Bool)updateIntelligentUserNameInvalid:(id)arg1;
- (id)GetFirstIntelligentMsgIndexItem:(id)arg1;
- (unsigned int)getHadBuildIntelligentMsgCount:(id)arg1;
- (unsigned int)getInsertIntelligentHadDownloadInValidMsgCount:(id)arg1;
- (id)getInsertIntelligentHadDownloadInValidMsgToFTSTableWithLimitUsrname:(id)arg1 limit:(int)arg2;
- (_Bool)batchInsertIntelligentHadDownloadInValidMsgToFTSTable:(id)arg1 rowidIndexResult:(id)arg2;
- (_Bool)batchInsertIntelligentHadDownloadInValidMsgToFTSTableWithlimitUsrname:(id)arg1 limit:(int)arg2 rowidIndexResult:(id)arg3;
- (_Bool)batchInsertMsgToFTSTable:(id)arg1;
- (_Bool)insertNewRowInIntelligentUserNameIDTable:(id)arg1 lastLocalId:(unsigned int)arg2;
- (void)preloadCacheUser;
- (_Bool)clearAllTable;
- (_Bool)createAllTable;
- (_Bool)initDB:(id)arg1;
- (void)dealloc;
- (_Bool)forceRepairIntelligent:(id)arg1;
- (void)logFTSIntelligentIndexStatus:(id)arg1;
- (_Bool)asyncCheckAndRepairIntelligent:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

