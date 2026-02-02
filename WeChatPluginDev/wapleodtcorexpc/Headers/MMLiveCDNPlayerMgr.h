//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FLVNetworkInfo, NSMutableArray, NSMutableDictionary, NSString, OrderedDictionary, TRTCDecoderFactory;

@interface MMLiveCDNPlayerMgr
{
    _Bool _canReuseCdnPlayerItemWhenEnterLive;
    _Bool _canPreloadCdnPlayerItemInFeedList;
    _Bool _isInBackground;
    unsigned int _nextReportStreamStatusInterval;
    unsigned int _lastReportStreamStatusTime;
    NSMutableDictionary *_liveCDNPlayerItemDict;
    OrderedDictionary *_livePreloadCDNPlayerItemDict;
    unsigned long long _preloadItemDictMaxCount;
    TRTCDecoderFactory *_mWXVideoDecoder;
    FLVNetworkInfo *_cachedFlvNetworkInfo;
    NSMutableDictionary *_enterLiveUIEventItemTimeMap;
    NSMutableArray *_streamStatusList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastReportStreamStatusTime; // @synthesize lastReportStreamStatusTime=_lastReportStreamStatusTime;
@property(nonatomic) unsigned int nextReportStreamStatusInterval; // @synthesize nextReportStreamStatusInterval=_nextReportStreamStatusInterval;
@property(retain, nonatomic) NSMutableArray *streamStatusList; // @synthesize streamStatusList=_streamStatusList;
@property(retain, nonatomic) NSMutableDictionary *enterLiveUIEventItemTimeMap; // @synthesize enterLiveUIEventItemTimeMap=_enterLiveUIEventItemTimeMap;
@property(retain, nonatomic) FLVNetworkInfo *cachedFlvNetworkInfo; // @synthesize cachedFlvNetworkInfo=_cachedFlvNetworkInfo;
@property(retain, nonatomic) TRTCDecoderFactory *mWXVideoDecoder; // @synthesize mWXVideoDecoder=_mWXVideoDecoder;
@property(nonatomic) unsigned long long preloadItemDictMaxCount; // @synthesize preloadItemDictMaxCount=_preloadItemDictMaxCount;
@property(retain, nonatomic) OrderedDictionary *livePreloadCDNPlayerItemDict; // @synthesize livePreloadCDNPlayerItemDict=_livePreloadCDNPlayerItemDict;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(retain, nonatomic) NSMutableDictionary *liveCDNPlayerItemDict; // @synthesize liveCDNPlayerItemDict=_liveCDNPlayerItemDict;
@property(nonatomic) _Bool canPreloadCdnPlayerItemInFeedList; // @synthesize canPreloadCdnPlayerItemInFeedList=_canPreloadCdnPlayerItemInFeedList;
@property(nonatomic) _Bool canReuseCdnPlayerItemWhenEnterLive; // @synthesize canReuseCdnPlayerItemWhenEnterLive=_canReuseCdnPlayerItemWhenEnterLive;
- (void)doReportStreamStatusIfNeed;
- (void)tryReportStreamStatus:(id)arg1;
- (long long)getLastFlvNetworkQuality;
- (id)getFlvNetworkInfo;
- (_Bool)checkHasUnmutedCdnPlayerPlaying;
- (_Bool)checkHasCdnPlayerPlaying;
- (id)preloadLiveRoomCDNPlayerItemWithId:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 url:(id)arg4 originalUrl:(id)arg5 andDelayStopTime:(double)arg6 liveSdkInfo:(id)arg7 liveVrType:(unsigned int)arg8 anchorNickname:(id)arg9 commentScene:(int)arg10;
- (_Bool)removePreloadCDNPlayerItem:(id)arg1;
- (void)checkPreloadCDNPlayerItemDictCount;
- (void)startPlayForPreloadWithId:(id)arg1 url:(id)arg2 andDelayStopTime:(double)arg3 liveVrType:(unsigned int)arg4;
- (void)pauseOrCleanPlayerItemsWhenEnterBackground;
- (_Bool)removeCDNPlayerItem:(id)arg1;
- (id)getLiveCDNPlayerItemWithId:(id)arg1 delegate:(id)arg2 playScene:(unsigned long long)arg3 liveVrType:(int)arg4;
- (unsigned long long)getEnterLiveUIEventTimestampWithItemId:(id)arg1;
- (void)setEnterLiveUIEventTimestamp:(unsigned long long)arg1 forItemId:(id)arg2;
- (void)setEnableHEVAndAVCDecoder;
- (void)clearLiveCDNPlayerItemDict;
- (void)clearPreloadCDNPlayerItemDict;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
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

