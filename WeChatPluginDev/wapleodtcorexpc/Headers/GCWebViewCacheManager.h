//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface GCWebViewCacheManager
{
    NSMutableDictionary *_cacheDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
- (void)removeCacheWebView:(id)arg1;
- (id)showHalfScreenWebViewWithConfig:(id)arg1;
- (long long)mmUIUserInterfaceStyleForVc:(id)arg1;
- (void)handleHalfScreenWebView:(id)arg1 parentVC:(id)arg2 visibleChange:(_Bool)arg3;
- (void)preloadHalfScreenWebViewWithConfig:(id)arg1;
- (id)getCacheItemForUrl:(id)arg1 reuseIdentifier:(id)arg2 isPreload:(_Bool)arg3 preinjectData:(id)arg4;
- (void)reCreateWithCacheItem:(id)arg1;
- (void)preloadTransparentWebView:(id)arg1 reuseIdentifier:(id)arg2 reCreateAfterUsed:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

