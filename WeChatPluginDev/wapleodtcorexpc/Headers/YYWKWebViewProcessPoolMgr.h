//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WKProcessPool;

@interface YYWKWebViewProcessPoolMgr
{
    WKProcessPool *m_processPool;
}

- (void).cxx_destruct;
- (void)onCacheMgrCleanCacheWarning;
- (id)processPool;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

