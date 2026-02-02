//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderGetDetailCacheMgr
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void)markTidGetDetailOnceWithTid:(id)arg1 result:(_Bool)arg2 invalideMsg:(id)arg3;
- (void)markTidGetDetailOnceWithTid:(id)arg1 result:(_Bool)arg2;
- (id)getCachedDataWithTid:(id)arg1;
- (id)getCachedInvalideMsgWithTid:(id)arg1;
- (_Bool)getCachedResultWithTid:(id)arg1;
- (double)getCachedTimeWithTid:(id)arg1;
- (_Bool)cachedDataIsExpireWithTid:(id)arg1;
- (_Bool)hasCachedDataWithTid:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

