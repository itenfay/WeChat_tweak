//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSMessageDB, FTSMsgIndexMgr, FTSMsgSearchMgr, NSCache, NSMutableArray, NSMutableDictionary, NSString;

@interface FTSMessageMgr : NSObject
{
    FTSMessageDB *_ftsMessageDB;
    _Bool _needMonitorReport;
    NSMutableDictionary *_dicMsgSearchTask;
    NSCache *_tableIdCache;
    FTSMsgSearchMgr *_searchMgr;
    NSMutableArray *_arrSessionUser;
    NSMutableDictionary *_dicLatestSession;
    FTSMsgIndexMgr *_indexMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSMsgIndexMgr *indexMgr; // @synthesize indexMgr=_indexMgr;
@property(retain, nonatomic) NSMutableDictionary *dicLatestSession; // @synthesize dicLatestSession=_dicLatestSession;
@property(retain, nonatomic) NSMutableArray *arrSessionUser; // @synthesize arrSessionUser=_arrSessionUser;
@property(retain, nonatomic) FTSMsgSearchMgr *searchMgr; // @synthesize searchMgr=_searchMgr;
@property(retain, nonatomic) FTSMessageDB *ftsMessageDB; // @synthesize ftsMessageDB=_ftsMessageDB;
@property(nonatomic) _Bool needMonitorReport; // @synthesize needMonitorReport=_needMonitorReport;
- (void)asyncMonitorReport;
- (unsigned int)getIndexNotReadyCount:(id)arg1;
- (_Bool)hasCreateAllIndex:(id)arg1;
- (void)getIndexProgressForSession:(id)arg1 preCursor:(unsigned long long *)arg2 nextCursor:(unsigned long long *)arg3 fts5Migrated:(_Bool *)arg4;
- (unsigned int)getTableIdForMessage:(id)arg1 content:(id *)arg2 UseCache:(_Bool)arg3;
- (unsigned int)asyncGetFTSMsgDBInfoWhenComplete:(CDUnknownBlockType)arg1;
- (void)removeTaskForContext:(id)arg1;
- (id)getTaskForkey:(id)arg1 queryText:(id)arg2;
- (id)getTaskForkey:(id)arg1;
- (void)onMsgSearchTaskResultChanged:(_Bool)arg1 taskObj:(id)arg2;
- (_Bool)isLikelyTalkerSearch:(id)arg1 taskKey:(id)arg2;
- (_Bool)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (_Bool)hasSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (void)cancelSearch:(id)arg1;
- (void)asyncSearch:(id)arg1 taskKey:(id)arg2;
- (void)prepareRestrictSearch:(id)arg1 restrictSessionUsr:(id)arg2 restrictTalkerUsr:(id)arg3 restrictTalkerMatchTip:(id)arg4 restrictTalkerQuery:(id)arg5 sessionFirst:(_Bool)arg6 taskKey:(id)arg7;
- (id)getLastQueryText:(id)arg1;
- (id)getArrLastQuerywords:(id)arg1;
- (id)getSessionUsernameForQuery:(id)arg1 atIndex:(unsigned long long)arg2 taskKey:(id)arg3;
- (id)getSessionMsgItemsForQuery:(id)arg1 atIndex:(unsigned long long)arg2 taskKey:(id)arg3;
- (unsigned long long)getTotalMsgItemsCountForQuery:(id)arg1 taskKey:(id)arg2;
- (unsigned long long)getTotalSessionUserCountForQuery:(id)arg1 taskKey:(id)arg2;
- (unsigned long long)getMsgItemsCountForQuery:(id)arg1 taskKey:(id)arg2;
- (unsigned long long)getSessionUserCountForQuery:(id)arg1 taskKey:(id)arg2;
- (id)getRealQueryPartFromQuery:(id)arg1 taskKey:(id)arg2;
- (id)getTalkerPartFromQuery:(id)arg1 taskKey:(id)arg2;
- (id)getNewestQuery:(id)arg1;
- (void)setAgainSearch:(_Bool)arg1 taskKey:(id)arg2;
- (void)setNewestQuery:(id)arg1 taskKey:(id)arg2;
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

