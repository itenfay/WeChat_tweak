//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAInfoData;

@interface WASyncGetCodeCmd
{
    _Bool _isEncrypt;
    _Bool _isRetry;
    _Bool _needRouteNewGetCdnUrlCgi;
    _Bool _enableDownloadResumption;
    unsigned int _maxRetryCount;
    unsigned int _retryInterval;
    unsigned int _appVersion;
    unsigned int _currentRetryCount;
    unsigned int _lastGetCodeTime;
    unsigned int _packageType;
    unsigned int _scene;
    unsigned long long _networkType;
    NSString *_md5;
    NSString *_packageKey;
    NSString *_needBackupDomain;
    WAInfoData *_infoData;
}

+ (void)initialize;
+ (void)PBArrayAdd_preDownloadRequestkey;
+ (void)PBArrayAdd_needRouteNewGetCdnUrlCgi;
+ (void)PBArrayAdd_packageType;
+ (void)PBArrayAdd_packageKey;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_lastGetCodeTime;
+ (void)PBArrayAdd_currentRetryCount;
+ (void)PBArrayAdd_isRetry;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_isEncrypt;
+ (void)PBArrayAdd_retryInterval;
+ (void)PBArrayAdd_maxRetryCount;
+ (void)PBArrayAdd_networkType;
+ (void)PBArrayAdd_squence;
+ (void)PBArrayAdd_cmdType;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) WAInfoData *infoData; // @synthesize infoData=_infoData;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool enableDownloadResumption; // @synthesize enableDownloadResumption=_enableDownloadResumption;
@property(copy, nonatomic) NSString *needBackupDomain; // @synthesize needBackupDomain=_needBackupDomain;
@property(nonatomic) _Bool needRouteNewGetCdnUrlCgi; // @synthesize needRouteNewGetCdnUrlCgi=_needRouteNewGetCdnUrlCgi;
@property(nonatomic) unsigned int packageType; // @synthesize packageType=_packageType;
@property(copy, nonatomic) NSString *packageKey; // @synthesize packageKey=_packageKey;
@property(nonatomic) unsigned int lastGetCodeTime; // @synthesize lastGetCodeTime=_lastGetCodeTime;
@property(nonatomic) unsigned int currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(nonatomic) unsigned int retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) unsigned int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) unsigned long long networkType; // @synthesize networkType=_networkType;
@property(readonly, copy) NSString *description;
- (id)getDescribableNetworkType;
- (_Bool)canRetryNow;
- (id)packageUniqueIdentifier;
- (_Bool)isAppInfoDataFromThisGetCodeCmd:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

