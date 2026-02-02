//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WACacheVersionCheckerContext, WACacheVersionPreChecker, WAInfoData, WAPackageConfig;

@interface WACacheVersionChecker : NSObject
{
    unsigned long long _checkScene;
    _Bool _isCancelled;
    CDUnknownBlockType _completeHandler;
    CDUnknownBlockType _progressHandler;
    NSMutableArray *_arrNeedDownloadInfoDatas;
    NSMutableArray *_arrDownloadInfoData;
    WAPackageConfig *_packageConfig;
    NSString *_relativePath;
    WACacheVersionPreChecker *_preChecker;
    unsigned long long _startDownloadTime;
    _Bool _isDownloadStart;
    _Bool _hasReported;
    unsigned int _debugType;
    NSString *_instanceId;
    unsigned long long _updatePackageStartTime;
    WAInfoData *_appInfoData;
    NSString *_appID;
    WACacheVersionCheckerContext *_checkerContext;
}

+ (void)checkCacheReadyWithAppid:(id)arg1 debugModeType:(unsigned int)arg2 checkerContext:(id)arg3 completeHandler:(CDUnknownBlockType)arg4 progressHandler:(CDUnknownBlockType)arg5;
+ (id)getErrMsgFromErrorCode:(long long)arg1 debugType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WACacheVersionCheckerContext *checkerContext; // @synthesize checkerContext=_checkerContext;
@property(nonatomic) unsigned int debugType; // @synthesize debugType=_debugType;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) WAInfoData *appInfoData; // @synthesize appInfoData=_appInfoData;
@property(nonatomic) unsigned long long updatePackageStartTime; // @synthesize updatePackageStartTime=_updatePackageStartTime;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (void)reportPluginCodesDownloadIDKey:(_Bool)arg1 packageType:(unsigned long long)arg2;
- (void)reportIntallOrUpdateInfo:(_Bool)arg1 errorCode:(unsigned int)arg2;
- (void)reportParallelFailFallBack:(id)arg1;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 withAppInfoData:(id)arg4;
- (void)reportCheckResult:(_Bool)arg1 errorCode:(long long)arg2;
- (void)callCompletionHandlerWithSuccess:(_Bool)arg1 errorCode:(long long)arg2;
- (void)removeDownloadInfoData:(id)arg1;
- (_Bool)hasDownloadInfoData:(id)arg1;
- (unsigned long long)downloadInfoDataCount;
- (void)addDownloadInfoData:(id)arg1;
- (_Bool)startDownloadPkgWithAppInfoData:(id)arg1 CDNURL:(id)arg2 CDNURLWithZstd:(id)arg3 patchURL:(id)arg4;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)updateDebugModeNotifyInfoIfNeeded:(id)arg1;
- (void)handleGetPkgDownloadUrl:(id)arg1;
- (void)reportResponse:(id)arg1;
- (_Bool)isMatchInfoData:(id)arg1 andResponseItem:(id)arg2;
- (_Bool)tryTriggerDownloadFromParallelCacheForInfoData:(id)arg1;
- (void)triggerPkgDownloadWithAppInfoDataList:(id)arg1;
- (void)downloadInfoDatas:(id)arg1;
- (_Bool)copyInsteadDownloadForInfoDataThatAlreadyDownloadedSameCheckSum:(id)arg1;
- (void)cancel;
- (void)triggerParallelDownloadWithCheckerContext:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)checkCacheReadyWithCheckerContext:(id)arg1 completeHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (id)initWithAppID:(id)arg1 debugType:(unsigned int)arg2;

@end

