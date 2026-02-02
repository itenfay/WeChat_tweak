//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MJAIAssetCacheManager
{
    NSMutableDictionary *_uploadResultCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *uploadResultCache; // @synthesize uploadResultCache=_uploadResultCache;
- (id)getCachedUploadResultForFileKey:(id)arg1;
- (void)cacheUploadResult:(id)arg1 forFileKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

