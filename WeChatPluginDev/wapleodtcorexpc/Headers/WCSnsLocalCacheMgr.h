//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface WCSnsLocalCacheMgr
{
    _Bool m_hadLoadedCache;
    NSMutableDictionary *m_dicLocalCache;
}

- (void).cxx_destruct;
- (void)saveDicLocalCache;
- (void)tryLoadDicLocalCache;
- (id)pathForDicLocalCache;
- (void)callServiceMemoryWarning;
- (void)callServiceTerminate;
- (void)callServiceEnterBackground;
- (void)callServiceInit;
- (void)saveSnsLocalCache;
- (void)mergeSnsOperationsWithFeedId:(id)arg1 feedCreateTime:(unsigned int)arg2 snsOperationsData:(id)arg3;
- (void)updateOperationsWithFeedId:(id)arg1 createTime:(unsigned int)arg2 snsOperations:(id)arg3;
- (id)getSnsOperationWrapWithFeedId:(id)arg1;
- (id)getSnsOperationsWithFeedId:(id)arg1;
- (void)setShowTime:(unsigned int)arg1 WithFeedId:(id)arg2;
- (void)setDelayShowInfoNeedDelay:(id)arg1;
- (void)clearDelayShowInfoCache;

@end

