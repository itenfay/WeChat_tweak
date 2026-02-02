//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSContactDB, FTSContactIndexMgr, NSMutableDictionary, NSString;

@interface FTSContactMgr : NSObject
{
    NSMutableDictionary *m_dicContactSearchTask;
    FTSContactDB *m_ftsContactDB;
    _Bool _needMonitorReport;
    FTSContactIndexMgr *_indexMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSContactIndexMgr *indexMgr; // @synthesize indexMgr=_indexMgr;
@property(nonatomic) _Bool needMonitorReport; // @synthesize needMonitorReport=_needMonitorReport;
- (id)syncSearchTextForSingleContact:(id)arg1;
- (void)monitorReport;
- (void)onContactSearchTaskFinish:(id)arg1;
- (void)setTopHitMgr:(id)arg1 taskKey:(id)arg2;
- (_Bool)isMultiKeyMatchWithTaskKey:(id)arg1;
- (_Bool)hasMatchWechatIDWithTaskKey:(id)arg1;
- (_Bool)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (id)getMatchTipForUserName:(id)arg1 taskKey:(id)arg2;
- (id)getAllSearchMatchTipWithTaskKey:(id)arg1;
- (unsigned int)getBrandContactsCountWithTaskKey:(id)arg1;
- (id)getBrandContactsWithTaskKey:(id)arg1;
- (unsigned int)getGroupContactsCountWithTaskKey:(id)arg1;
- (id)getGroupContactsWithTaskKey:(id)arg1;
- (unsigned int)getSingleContactsCountWithTaskKey:(id)arg1;
- (id)getSingleContactsWithTaskKey:(id)arg1;
- (id)getAllContactsWithTaskKey:(id)arg1;
- (unsigned int)getTotalCountWithTaskKey:(id)arg1;
- (void)selectContact:(id)arg1 taskKey:(id)arg2;
- (void)cancelSearchWithTaskKey:(id)arg1;
- (void)asyncSearch:(id)arg1 type:(int)arg2 topHitMgr:(id)arg3 extendSearchContact:(id)arg4 taskKey:(id)arg5;
- (void)asyncSearch:(id)arg1 type:(int)arg2 topHitMgr:(id)arg3 taskKey:(id)arg4;
- (void)asyncSearch:(id)arg1 type:(int)arg2 taskKey:(id)arg3;
- (id)getLastQueryText:(id)arg1;
- (id)getNewestQuery:(id)arg1;
- (void)setNewestQuery:(id)arg1 taskKey:(id)arg2;
- (id)getTaskForKey:(id)arg1 queryText:(id)arg2;
- (void)removeTaskForKey:(id)arg1;
- (void)makeTaskIfNil:(id)arg1;
- (id)getTaskForKey:(id)arg1;
- (void)doInitWorker;
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

