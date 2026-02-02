//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLRUCache, MMTimer, NSMutableArray, WCFinderDaWangCardInfo, WCFinderPlayAPMMonitor;

@interface WCFinderLastestPlayVideoInfoMgr : NSObject
{
    double _lastestDownloadSpeed;
    NSMutableArray *_infoArray;
    NSMutableArray *_statsInfoArray;
    NSMutableArray *_finderDownloadSpeedArray;
    NSMutableArray *_wechatDownloadSpeedArray;
    MMTimer *_detectionSpeedTimer;
    WCFinderPlayAPMMonitor *_apmMonitor;
    WCFinderDaWangCardInfo *_daWangCardInfo;
    NSMutableArray *_preloadInfoArray;
    unsigned long long _detectionEmptyCount;
    MMLRUCache *_lastestDownloadVideoFormatCache;
    unsigned long long _detectionCount;
    double _lastestFinderVideoDownloadSpeed;
    double _speedReliableScale;
    unsigned long long _lastFinderDetectionEndTick;
    unsigned long long _lastWechatDetectionEndTick;
    unsigned long long _lastDetectionActionTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastDetectionActionTimestamp; // @synthesize lastDetectionActionTimestamp=_lastDetectionActionTimestamp;
@property(nonatomic) unsigned long long lastWechatDetectionEndTick; // @synthesize lastWechatDetectionEndTick=_lastWechatDetectionEndTick;
@property(nonatomic) unsigned long long lastFinderDetectionEndTick; // @synthesize lastFinderDetectionEndTick=_lastFinderDetectionEndTick;
@property(nonatomic) double speedReliableScale; // @synthesize speedReliableScale=_speedReliableScale;
@property(nonatomic) double lastestFinderVideoDownloadSpeed; // @synthesize lastestFinderVideoDownloadSpeed=_lastestFinderVideoDownloadSpeed;
@property(nonatomic) unsigned long long detectionCount; // @synthesize detectionCount=_detectionCount;
@property(retain, nonatomic) MMLRUCache *lastestDownloadVideoFormatCache; // @synthesize lastestDownloadVideoFormatCache=_lastestDownloadVideoFormatCache;
@property(nonatomic) unsigned long long detectionEmptyCount; // @synthesize detectionEmptyCount=_detectionEmptyCount;
@property(retain, nonatomic) NSMutableArray *preloadInfoArray; // @synthesize preloadInfoArray=_preloadInfoArray;
@property(retain, nonatomic) WCFinderDaWangCardInfo *daWangCardInfo; // @synthesize daWangCardInfo=_daWangCardInfo;
@property(retain, nonatomic) WCFinderPlayAPMMonitor *apmMonitor; // @synthesize apmMonitor=_apmMonitor;
@property(retain, nonatomic) MMTimer *detectionSpeedTimer; // @synthesize detectionSpeedTimer=_detectionSpeedTimer;
@property(retain, nonatomic) NSMutableArray *wechatDownloadSpeedArray; // @synthesize wechatDownloadSpeedArray=_wechatDownloadSpeedArray;
@property(retain, nonatomic) NSMutableArray *finderDownloadSpeedArray; // @synthesize finderDownloadSpeedArray=_finderDownloadSpeedArray;
@property(retain, nonatomic) NSMutableArray *statsInfoArray; // @synthesize statsInfoArray=_statsInfoArray;
@property(retain, nonatomic) NSMutableArray *infoArray; // @synthesize infoArray=_infoArray;
@property(nonatomic) double lastestDownloadSpeed; // @synthesize lastestDownloadSpeed=_lastestDownloadSpeed;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)updateFreeFlowStatus;
- (id)getFeedDownloadSvrFormatFlagWithTid:(id)arg1;
- (void)updateFeedTid:(id)arg1 downloadSvrFormatFlag:(id)arg2;
- (void)detectionSpeedAction;
- (_Bool)currentSpeedChangeToLarge:(double)arg1 otherSpeed:(double)arg2;
- (void)checkShouldRefreshPreloadInfo:(double)arg1;
- (void)cleanFinderStatsDownloadWithArray:(id)arg1;
- (id)getFinderStatsDownloadStatus;
- (void)mergeCDNAndCGIConnectInfo:(id)arg1;
- (id)getFinderClientStatus;
- (_Bool)isRequestNetworkFreeFlow;
- (_Bool)isNetworkFreeFlow;
- (id)getFinderReportAPMInfo;
- (_Bool)isBatteryChargeAndLevel:(float *)arg1;
- (float)getSysCpuUsage;
- (unsigned int)getCurrentThermalState;
- (id)getLastestPlayInfoArray;
- (id)downloadSeedFromMarsResult:(struct C2CDownloadResult)arg1;
- (void)addPlayInfoReport:(id)arg1 meidaWrap:(id)arg2 contentID:(id)arg3 mediaIndex:(unsigned long long)arg4;
- (void)addPreloadInfo:(id)arg1 mediaWrap:(id)arg2;
- (void)addInfo:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)addObserverForForegroundNotification;
- (void)dealloc;
- (void)startTimer;
- (void)_initiativeDetectionNetworkSpeed;
- (id)init;

@end

