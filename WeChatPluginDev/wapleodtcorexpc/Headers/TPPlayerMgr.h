//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerMgr : NSObject
{
    _Bool _initialized;
}

+ (id)sharedManager;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void)logWithLevel:(long long)arg1 tag:(id)arg2 content:(id)arg3;
- (void)makeSureLocalServiceActiveWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProxyVodCachedEnableWithServiceType:(int)arg1 vodCachedEnable:(_Bool)arg2;
- (void)setProxyMaxStorageSizeMBWithServiceType:(int)arg1 maxStorageSizeMB:(long long)arg2;
- (void)setProxyConfigWithServiceType:(int)arg1 cacheDir:(id)arg2 dataDir:(id)arg3;
- (id)getPropertyString:(unsigned long long)arg1;
- (void)setPropertyString:(unsigned long long)arg1 propertyValue:(id)arg2;
- (_Bool)getPropertyBool:(unsigned long long)arg1;
- (void)setPropertyBool:(unsigned long long)arg1 propertyValue:(_Bool)arg2;
- (long long)getCellularDataCost;
- (long long)getSuggestedBitrate;
- (long long)getOfflineRecordDurationMs:(id)arg1 format:(id)arg2;
- (id)getOfflineRecordVinfo:(id)arg1 format:(id)arg2;
- (id)playerCoreVersion;
- (id)thumbPlayerVersion;
- (id)downloadProxyVersion;
- (void)setOutNetIP:(id)arg1;
- (void)setAppInfoWithAppVersion:(id)arg1 buildVerson:(id)arg2;
- (void)setUpcInfoWithUpc:(id)arg1 upcState:(long long)arg2;
- (void)setUserInfoWithUin:(id)arg1 isVip:(_Bool)arg2;
- (void)setProxyConfigWithEnableCheckLocalServer:(_Bool)arg1 enableCheckLocalServerOnCreate:(_Bool)arg2 timeoutMs:(int)arg3 serverCheckTimeInterval:(int)arg4;
- (void)setProxyConfigWithPlatform:(long long)arg1 cacheDir:(id)arg2 dataDir:(id)arg3 configStr:(id)arg4;
- (void)setProxyMaxStorageSizeMB:(long long)arg1;
- (void)setProxyEnable:(_Bool)arg1;
- (void)setProxyServiceType:(long long)arg1;
- (void)setLogDelegate:(id)arg1;
- (void)initSDKWithGuid:(id)arg1 platform:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

