//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface TPDownloadProxyNative : NSObject
{
    _Bool _enableCheckLocalServer;
    _Bool _enableCheckLocalServerOnCreate;
    _Bool _isNativeInit;
    _Bool _isReinitFinish;
    int _timeoutMs;
    int _localServerCheckTimeInterval;
    NSObject<OS_dispatch_queue> *_checkActiveQueue;
    NSString *_currentStoragePath;
    NSMutableDictionary *_serviceTypeParams;
    unsigned long long _bgTask;
    NSRecursiveLock *_serviceLock;
    unsigned long long _lastCheckTimeMs;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastCheckTimeMs; // @synthesize lastCheckTimeMs=_lastCheckTimeMs;
@property(retain, nonatomic) NSRecursiveLock *serviceLock; // @synthesize serviceLock=_serviceLock;
@property(nonatomic) _Bool isReinitFinish; // @synthesize isReinitFinish=_isReinitFinish;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(retain, nonatomic) NSMutableDictionary *serviceTypeParams; // @synthesize serviceTypeParams=_serviceTypeParams;
@property(nonatomic) _Bool isNativeInit; // @synthesize isNativeInit=_isNativeInit;
@property(copy, nonatomic) NSString *currentStoragePath; // @synthesize currentStoragePath=_currentStoragePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkActiveQueue; // @synthesize checkActiveQueue=_checkActiveQueue;
@property(nonatomic) _Bool enableCheckLocalServerOnCreate; // @synthesize enableCheckLocalServerOnCreate=_enableCheckLocalServerOnCreate;
@property(nonatomic) _Bool enableCheckLocalServer; // @synthesize enableCheckLocalServer=_enableCheckLocalServer;
@property(nonatomic) int localServerCheckTimeInterval; // @synthesize localServerCheckTimeInterval=_localServerCheckTimeInterval;
@property(nonatomic) int timeoutMs; // @synthesize timeoutMs=_timeoutMs;
- (void)backgroundTaskHandler;
- (void)receiveMemoryWarning:(id)arg1;
- (void)appwillTerminate:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)makeSureLocalServiceActiveWithCompletion:(CDUnknownBlockType)arg1;
- (void)enterBackground:(id)arg1;
- (void)activeService;
- (_Bool)initNative;
- (void)setTask:(int)arg1 ResourceloaderProxyCallback:(void *)arg2;
- (void)updatePlayerPlayMsgWithTaskId:(int)arg1 playPositionSecond:(int)arg2 playerRemainTimeSecond:(int)arg3 advRemainTimeSecond:(int)arg4;
- (void)updateTaskInfo:(int)arg1 key:(id)arg2 value:(id)arg3;
- (void)setPlayerState:(int)arg1 state:(int)arg2;
- (long long)verifyOfflineCacheSync:(id)arg1 fileFormat:(int)arg2 resourceId:(id)arg3 keyId:(id)arg4;
- (int)clearCache:(id)arg1 resourceId:(id)arg2 mode:(unsigned long long)arg3;
- (int)deleteCacheWithResourceId:(id)arg1;
- (int)resumeDownload:(int)arg1;
- (int)pauseDownload:(int)arg1;
- (int)stopDownload:(int)arg1;
- (int)startDownload:(int)arg1;
- (id)getClipPlayUrl:(int)arg1 clipNo:(int)arg2 urlType:(int)arg3;
- (int)setClipInfo:(int)arg1 clipNo:(int)arg2 clipKeyId:(id)arg3 dlType:(int)arg4 urls:(id)arg5 savePath:(id)arg6 extraInfo:(id)arg7;
- (int)createDownloadTask:(int)arg1 fileId:(id)arg2 dlType:(int)arg3 clipCount:(int)arg4;
- (void)pushEvent:(long long)arg1;
- (void)setServiceConfig:(int)arg1 value:(id)arg2;
- (void)setUserData:(id)arg1 value:(id)arg2;
- (id)getHLSOfflineExttagWithVid:(id)arg1 linkVid:(id)arg2 formatId:(int)arg3 randomNum:(long long)arg4;
- (long long)getResourceSize:(id)arg1 resourceID:(id)arg2;
- (int)checkResourceStatus:(id)arg1 resourceID:(id)arg2 fileFormat:(int)arg3;
- (id)getNativeInfo:(int)arg1;
- (id)getErrorCodeStr:(int)arg1;
- (id)getVersion;
- (int)setMaxStorageSizeMBWithServiceType:(int)arg1 maxStorageSizeMB:(long long)arg2;
- (int)updateStoragePathWithServiceType:(int)arg1 path:(id)arg2;
- (void)checkLocalServerActive:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkLocalServerActive:(long long)arg1;
- (void)reinitServiceWithReason:(long long)arg1;
- (unsigned long long)genCurrentTimeInMs;
- (int)deinitService:(int)arg1;
- (int)initService:(int)arg1 param:(id)arg2;
- (id)init;

@end

