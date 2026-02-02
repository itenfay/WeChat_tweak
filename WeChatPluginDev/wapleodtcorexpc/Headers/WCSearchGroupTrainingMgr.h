//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, WCSearchGroupScoreCache, WCSearchGroupTrainModel, WCTDatabase, WCTTable;

@interface WCSearchGroupTrainingMgr : NSObject
{
    _Bool _isPreloadScoreFinish;
    _Bool _hasDoContactReload;
    _Bool _hasReportFirstPreload;
    unsigned int _dbCreateTime;
    unsigned int _scoreSeq;
    NSMutableDictionary *_dicCache;
    WCTDatabase *_wctDB;
    WCTTable *_cTable;
    NSRecursiveLock *_lock;
    WCSearchGroupTrainModel *_trainModel;
    NSRecursiveLock *_scoreLock;
    WCSearchGroupScoreCache *_scoreCache;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasReportFirstPreload; // @synthesize hasReportFirstPreload=_hasReportFirstPreload;
@property(nonatomic) _Bool hasDoContactReload; // @synthesize hasDoContactReload=_hasDoContactReload;
@property(nonatomic) _Bool isPreloadScoreFinish; // @synthesize isPreloadScoreFinish=_isPreloadScoreFinish;
@property(retain, nonatomic) WCSearchGroupScoreCache *scoreCache; // @synthesize scoreCache=_scoreCache;
@property(nonatomic) unsigned int scoreSeq; // @synthesize scoreSeq=_scoreSeq;
@property(retain, nonatomic) NSRecursiveLock *scoreLock; // @synthesize scoreLock=_scoreLock;
@property(retain, nonatomic) WCSearchGroupTrainModel *trainModel; // @synthesize trainModel=_trainModel;
@property(nonatomic) unsigned int dbCreateTime; // @synthesize dbCreateTime=_dbCreateTime;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) WCTTable *cTable; // @synthesize cTable=_cTable;
@property(retain, nonatomic) WCTDatabase *wctDB; // @synthesize wctDB=_wctDB;
@property(retain, nonatomic) NSMutableDictionary *dicCache; // @synthesize dicCache=_dicCache;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onContactReload;
- (id)getMaxSearchGroupFeature;
- (double)runModelForOutLeafNodes:(id)arg1 features:(id)arg2;
- (double)safeGetScoreByFeature:(id)arg1 gId:(id)arg2 updateCache:(_Bool)arg3;
- (id)safeGetFeatures;
- (id)safeGetLeafCached;
- (id)safeGetScoreCached;
- (void)preloadGroupTrainFeatures;
- (_Bool)canPreload;
- (_Bool)isPreloadGroupTrainFinish;
- (void)removeDownloadModel;
- (void)loadModelIfNeeded;
- (_Bool)recoverDB;
- (void)trimInvalid:(unsigned int)arg1;
- (unsigned int)getLastSearchTimeForGroup:(id)arg1;
- (unsigned int)getGroupClickDays:(id)arg1 ForRecentDays:(unsigned int)arg2;
- (unsigned int)getGroupClickCount:(id)arg1 ForRecentDays:(unsigned int)arg2;
- (void)addSearchCountForGroup:(id)arg1;
- (id)getInfoForGroup:(id)arg1;
- (unsigned int)getRefTimeStamp;
- (int)calDayOffset;
- (_Bool)updateInfo:(id)arg1;
- (_Bool)createCTable;
- (void)cleanData;
- (_Bool)initDB;
- (id)getCTableDir;
- (void)dealloc;
- (id)init;

@end

