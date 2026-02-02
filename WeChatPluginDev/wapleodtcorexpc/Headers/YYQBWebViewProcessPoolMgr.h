//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WKProcessPool;

@interface YYQBWebViewProcessPoolMgr
{
    WKProcessPool *m_processPool;
}

- (void).cxx_destruct;
- (void)onCacheMgrCleanCacheWarning;
- (void)removeProcessPool;
- (id)processPool;
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

