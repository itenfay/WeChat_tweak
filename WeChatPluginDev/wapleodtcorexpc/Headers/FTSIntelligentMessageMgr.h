//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSIntelligentMessageDB, FTSIntelligentMsgIndexMgr, FTSIntelligentMsgSearchMgr, NSMutableArray, NSMutableDictionary, NSString;

@interface FTSIntelligentMessageMgr : NSObject
{
    FTSIntelligentMessageDB *_ftsMessageDB;
    NSMutableDictionary *_dicMsgSearchTask;
    unsigned int m_intelligentSearchType;
    FTSIntelligentMsgSearchMgr *_searchMgr;
    NSMutableArray *_arrSessionUser;
    NSMutableDictionary *_dicLatestSession;
    FTSIntelligentMsgIndexMgr *_indexMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSIntelligentMsgIndexMgr *indexMgr; // @synthesize indexMgr=_indexMgr;
@property(retain, nonatomic) NSMutableDictionary *dicLatestSession; // @synthesize dicLatestSession=_dicLatestSession;
@property(retain, nonatomic) NSMutableArray *arrSessionUser; // @synthesize arrSessionUser=_arrSessionUser;
@property(retain, nonatomic) FTSIntelligentMsgSearchMgr *searchMgr; // @synthesize searchMgr=_searchMgr;
@property(retain, nonatomic) FTSIntelligentMessageDB *ftsMessageDB; // @synthesize ftsMessageDB=_ftsMessageDB;
- (void)getIndexProgressForSession:(id)arg1 preCursor:(unsigned long long *)arg2 nextCursor:(unsigned long long *)arg3;
- (_Bool)forceRepairIntelligent:(id)arg1;
- (void)asyncCheckAndRepairIntelligent:(id)arg1;
- (unsigned int)asyncGetFTSIntelligentMsgDBInfoWhenComplete:(CDUnknownBlockType)arg1;
- (void)removeTaskForContext:(id)arg1;
- (id)getTaskForkey:(id)arg1 queryText:(id)arg2;
- (id)getTaskForkey:(id)arg1;
- (void)onIntelligentMsgSearchTaskResultChanged:(_Bool)arg1 taskObj:(id)arg2;
- (_Bool)checkAllImageMessageHadBuildIndex:(id)arg1;
- (_Bool)checkPriorityImageMessageHadBuildIndex:(id)arg1;
- (_Bool)checkPriorityHadFinishOperate:(id)arg1;
- (void)cancelPriorityBuildIndexMsgWithUserName:(id)arg1;
- (void)priorityBuildIndexMsgWithUserName:(id)arg1;
- (id)querySimilarWordsSearch:(id)arg1 limitUserName:(id)arg2;
- (_Bool)checkQueryIsSecureRank:(id)arg1;
- (void)insertSecureRank:(id)arg1;
- (_Bool)completionUpdateL2NormFaceClusterWithFaceClusterLabelId:(unsigned int)arg1 arrL2NormFaceFeature:(id)arg2;
- (_Bool)repairFaceClusterLabelId:(unsigned int)arg1 arrRepeatFaceClusterLabelId:(id)arg2;
- (id)getIntelligentFaceClusterWithFaceLabelId:(long long)arg1;
- (id)queryIntelligentFaceClusterMsgLocalIdListWithLimitUsrname:(id)arg1 faceLabelId:(unsigned int)arg2;
- (long long)getLastIntelligentFaceClusterFaceLabelId;
- (id)getAllFaceClusterList;
- (_Bool)updateFaceClusterItemFaceFeatureWithId:(unsigned int)arg1 arrFaceFeature:(id)arg2;
- (id)getHadMessageClassificationListWithLimitUserName:(id)arg1;
- (_Bool)checkIntelligentSynonymClassificationHadImageMessage:(id)arg1 limitUserName:(id)arg2;
- (id)searchIntelligentClassification:(id)arg1 limitUserName:(id)arg2 forceUpdate:(_Bool)arg3;
- (unsigned int)syncSearchCount:(id)arg1 limitUsrname:(id)arg2 searchType:(unsigned int)arg3;
- (_Bool)checkCanDoIntelligentInRAM;
- (_Bool)checkCanDoIntelligent;
- (id)getReportIntelligentMsgEveryDay;
- (id)getAllNeedBuildIndexSessionUserNameAr;
- (id)queryIntelligentMsg:(id)arg1 msgLocalId:(unsigned int)arg2;
- (_Bool)checkValidIntelligentIndexItemByUserName:(id)arg1;
- (id)getNewestQuery:(id)arg1;
- (id)getLastQueryText:(id)arg1;
- (_Bool)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (_Bool)hasSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (void)cancelSearch:(id)arg1;
- (void)asyncSearch:(id)arg1 searchType:(unsigned int)arg2 taskKey:(id)arg3;
- (void)prepareRestrictSearch:(id)arg1 taskKey:(id)arg2;
- (id)getArrLastQuerywords:(id)arg1;
- (void)setNewestQuery:(id)arg1 searchType:(unsigned int)arg2 taskKey:(id)arg3;
- (_Bool)hasMemoryMessageResultFor:(id)arg1 taskKey:(id)arg2;
- (_Bool)hasIndexMessageResultFor:(id)arg1 taskKey:(id)arg2;
- (_Bool)isDBSearchFinishFor:(id)arg1 taskKey:(id)arg2;
- (void)makePageTaskIfNil:(id)arg1;
- (id)safeCopyUnIndexMsgCache;
- (void)initIndexMgr:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

