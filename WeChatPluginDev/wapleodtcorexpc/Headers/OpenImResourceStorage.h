//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OpenImResourceStorageCacheInfo;

@interface OpenImResourceStorage
{
    OpenImResourceStorageCacheInfo *_defaultResCacheInfo;
    OpenImResourceStorageCacheInfo *_kefuResCacheInfo;
}

+ (id)resourcePathAppid:(id)arg1 subType:(unsigned int)arg2;
+ (id)resourceRootPath;
- (void).cxx_destruct;
@property(retain, nonatomic) OpenImResourceStorageCacheInfo *kefuResCacheInfo; // @synthesize kefuResCacheInfo=_kefuResCacheInfo;
@property(retain, nonatomic) OpenImResourceStorageCacheInfo *defaultResCacheInfo; // @synthesize defaultResCacheInfo=_defaultResCacheInfo;
- (void)saveOpenImResourceToCacheAndFile:(id)arg1 appid:(id)arg2 subType:(unsigned int)arg3;
- (id)tryLoadOpenImResource:(id)arg1 subType:(unsigned int)arg2;
- (void)saveResourceToCache:(id)arg1 appId:(id)arg2 subType:(unsigned int)arg3;
- (id)cacheResourceWithAppId:(id)arg1 subType:(unsigned int)arg2;
- (id)cacheLastUpdateDateWithAppId:(id)arg1 subType:(unsigned int)arg2;
- (void)saveLastUpdateDateToCache:(id)arg1 appId:(id)arg2 subType:(unsigned int)arg3;
- (id)cacheInfoForSubType:(unsigned int)arg1;
- (id)init;

@end

