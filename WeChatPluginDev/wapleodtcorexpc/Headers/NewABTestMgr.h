//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface NewABTestMgr
{
    _Bool _bABTestCacheLoaded;
    unsigned int _uiNextUpdateTime;
    NSMutableArray *_aryABTestList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bABTestCacheLoaded; // @synthesize bABTestCacheLoaded=_bABTestCacheLoaded;
@property(nonatomic) unsigned int uiNextUpdateTime; // @synthesize uiNextUpdateTime=_uiNextUpdateTime;
@property(retain, nonatomic) NSMutableArray *aryABTestList; // @synthesize aryABTestList=_aryABTestList;
- (id)getExpItemsArray;
- (void)onGetABTestItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(_Bool)arg3;
- (void)getABTestItemsForRequest:(id)arg1;
- (void)onServiceInit;
- (void)handleNewABTestList:(id)arg1;
- (void)mergeNewABTestItemFromSvr:(id)arg1;
- (_Bool)saveNewABTestCache;
- (void)filterExpireExp;
- (_Bool)tryLoadNewABTestCache;
- (id)pathForNewABTestCache;
- (void)reportABTestLog:(id)arg1 expId:(id)arg2 logId:(unsigned int)arg3 logExt:(id)arg4;
- (void)reportABTestRunning:(id)arg1;
- (id)getABTestListWithBizId:(id)arg1;
- (id)getValueForKey:(id)arg1 withLayerId:(id)arg2;
- (id)getABTestItemWithLayerId:(id)arg1;
- (id)getABTestAry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

