//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TPDownloadProxy : NSObject
{
    int _serviceType;
    NSMutableDictionary *_storageMap;
}

+ (void)makeSureLocalServiceActiveWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *storageMap; // @synthesize storageMap=_storageMap;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (void)updateTaskInfo:(int)arg1 key:(id)arg2 value:(id)arg3;
- (void)setPlayer:(int)arg1 ResourceloaderProxyCallback:(void *)arg2;
- (void)setPlayState:(int)arg1 state:(int)arg2;
- (void)setMaxStorageSizeMB:(long long)arg1;
- (void)updateStoragePath:(id)arg1;
- (int)clearCache:(id)arg1 resourceID:(id)arg2 mode:(unsigned long long)arg3;
- (int)removeStorageCache:(id)arg1;
- (int)stopOfflineDownload:(int)arg1;
- (void)startTask:(int)arg1;
- (int)startClipOfflineDownload:(id)arg1 clipCount:(int)arg2 delegate:(id)arg3;
- (int)startOfflineDownload:(id)arg1 downloadParam:(id)arg2 delegate:(id)arg3;
- (void)pushEvent:(long long)arg1;
- (void)setUserData:(id)arg1 value:(id)arg2;
- (void)stopPreload:(int)arg1;
- (int)startClipPreload:(id)arg1 clipNo:(int)arg2 delegate:(id)arg3;
- (int)startPreload:(id)arg1 downloadParam:(id)arg2 delegate:(id)arg3;
- (int)resumeDownload:(int)arg1;
- (int)pauseDownload:(int)arg1;
- (void)stopPlay:(int)arg1;
- (long long)getResourceSize:(id)arg1 resourceID:(id)arg2;
- (int)checkResourceStatus:(id)arg1 resourceID:(id)arg2 fileFormat:(int)arg3;
- (id)getPlayErrorCodeStr:(int)arg1;
- (id)getClipPlayUrl:(int)arg1 clipNo:(int)arg2;
- (id)getPlayUrl:(int)arg1 urlType:(int)arg2;
- (_Bool)setClipInfo:(int)arg1 clipNo:(int)arg2 clipFileId:(id)arg3 downloadParam:(id)arg4;
- (int)startClipPlay:(id)arg1 clipNo:(int)arg2 delegate:(id)arg3;
- (int)startPlay:(id)arg1 downloadParam:(id)arg2 delegate:(id)arg3;
- (void)setProxyDelegate:(id)arg1;
- (void)setLogDelegate:(id)arg1;
- (int)deinit;
- (int)initDownloadProxy:(id)arg1;
- (id)initWithServiceType:(int)arg1;

@end

