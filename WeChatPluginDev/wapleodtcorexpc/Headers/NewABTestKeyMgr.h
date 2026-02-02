//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface NewABTestKeyMgr
{
    NSMutableDictionary *cachedABTestItems;
    _Bool _bABTestCacheLoaded;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bABTestCacheLoaded; // @synthesize bABTestCacheLoaded=_bABTestCacheLoaded;
@property(retain, nonatomic) NSMutableDictionary *cachedABTestItems; // @synthesize cachedABTestItems;
- (void)onGetABTestExpKeyItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(_Bool)arg3;
- (void)getABTestItemsForRequest:(id)arg1;
- (void)mergeNewABTestItemFromSvr:(id)arg1;
- (void)handleNewABTestList:(id)arg1;
- (_Bool)saveNewABTestCache;
- (id)pathForNewABTestCache;
- (_Bool)tryLoadNewABTestCache;
- (void)reportABTestRunning:(id)arg1;
- (id)getExpItemsArray;
- (void)filterExpsUsingBlock:(CDUnknownBlockType)arg1;
- (id)getTestValueWithKey:(id)arg1 reportABTestRunning:(_Bool)arg2;
- (id)getTestValueWithAutoReportForKey:(id)arg1;
- (id)getTestValueWithoutReportForKey:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

