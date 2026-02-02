//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HoldoutExptParamSet, NSMutableArray;

@interface FinderPreloadGlobalInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) double allowToUseNewSpecMaxPercent; // @dynamic allowToUseNewSpecMaxPercent;
@property(nonatomic) unsigned int bufferingHealthLengthL0; // @dynamic bufferingHealthLengthL0;
@property(nonatomic) unsigned int bufferingHealthLengthL1; // @dynamic bufferingHealthLengthL1;
@property(nonatomic) unsigned int bufferingHealthLengthL2; // @dynamic bufferingHealthLengthL2;
@property(nonatomic) _Bool canPreCreatedPlayer; // @dynamic canPreCreatedPlayer;
@property(nonatomic) int currentBufferLengthPart3; // @dynamic currentBufferLengthPart3;
@property(nonatomic) unsigned int downloadWhenSpecChange; // @dynamic downloadWhenSpecChange;
@property(nonatomic) _Bool enablePreloadTotalFeed; // @dynamic enablePreloadTotalFeed;
@property(nonatomic) int ffmpegTcpRecvSocketBufferSize; // @dynamic ffmpegTcpRecvSocketBufferSize;
@property(nonatomic) _Bool findPageEnableCellularPreload; // @dynamic findPageEnableCellularPreload;
@property(nonatomic) unsigned int findPagePreloadSecond; // @dynamic findPagePreloadSecond;
@property(nonatomic) unsigned int findPageWifiMorePreloadFeed; // @dynamic findPageWifiMorePreloadFeed;
@property(nonatomic) unsigned int findPageWifiMorePreloadSecond; // @dynamic findPageWifiMorePreloadSecond;
@property(nonatomic) int firstPreloadStrategy; // @dynamic firstPreloadStrategy;
@property(nonatomic) _Bool flowViewPreload; // @dynamic flowViewPreload;
@property(retain, nonatomic) HoldoutExptParamSet *holdoutExptParamSet; // @dynamic holdoutExptParamSet;
@property(nonatomic) _Bool isBackendControlFindPagePreload; // @dynamic isBackendControlFindPagePreload;
@property(nonatomic) _Bool isFindPagePreload; // @dynamic isFindPagePreload;
@property(nonatomic) int lastFeedInfoCount; // @dynamic lastFeedInfoCount;
@property(retain, nonatomic) NSMutableArray *loadWithPlaying; // @dynamic loadWithPlaying;
@property(nonatomic) int localserverBufferSize; // @dynamic localserverBufferSize;
@property(nonatomic) int localserverSendSocketBufferSize; // @dynamic localserverSendSocketBufferSize;
@property(nonatomic) unsigned int maxBitRate; // @dynamic maxBitRate;
@property(nonatomic) unsigned int maxBufferLength; // @dynamic maxBufferLength;
@property(nonatomic) unsigned int megavideoMaxBitRate; // @dynamic megavideoMaxBitRate;
@property(nonatomic) unsigned int megavideoNextCount; // @dynamic megavideoNextCount;
@property(nonatomic) unsigned int megavideoPrevCount; // @dynamic megavideoPrevCount;
@property(nonatomic) unsigned int minBufferLength; // @dynamic minBufferLength;
@property(nonatomic) unsigned int minCurrentFeedBufferLength; // @dynamic minCurrentFeedBufferLength;
@property(nonatomic) unsigned int minRefreshInterval; // @dynamic minRefreshInterval;
@property(nonatomic) unsigned int minStartPlayBufferLengthMs; // @dynamic minStartPlayBufferLengthMs;
@property(nonatomic) unsigned int nextCount; // @dynamic nextCount;
@property(nonatomic) int nextFeedInfoCount; // @dynamic nextFeedInfoCount;
@property(nonatomic) unsigned int nextTabPreloadFeedSize; // @dynamic nextTabPreloadFeedSize;
@property(nonatomic) unsigned int phoneLevel; // @dynamic phoneLevel;
@property(nonatomic) unsigned int playConcurrentCount; // @dynamic playConcurrentCount;
@property(nonatomic) int playingBufferControllStrategy; // @dynamic playingBufferControllStrategy;
@property(nonatomic) unsigned int preConcurrentCount; // @dynamic preConcurrentCount;
@property(nonatomic) unsigned int preloadFileMinBytes; // @dynamic preloadFileMinBytes;
@property(nonatomic) float preloadFileSizePercent; // @dynamic preloadFileSizePercent;
@property(nonatomic) int preloadFileTimeMs; // @dynamic preloadFileTimeMs;
@property(nonatomic) unsigned int preloadMaxConcurrentCount; // @dynamic preloadMaxConcurrentCount;
@property(nonatomic) unsigned int prevCount; // @dynamic prevCount;
@property(nonatomic) int startPlayRefreshInterval; // @dynamic startPlayRefreshInterval;
@property(nonatomic) float startPreloadPercent; // @dynamic startPreloadPercent;
@property(nonatomic) unsigned int startPreloadSecs; // @dynamic startPreloadSecs;
@property(nonatomic) int stuckRefreshInterval; // @dynamic stuckRefreshInterval;
@property(nonatomic) int timingRefreshInterval; // @dynamic timingRefreshInterval;
@property(nonatomic) unsigned int wcplayerSchedulerType; // @dynamic wcplayerSchedulerType;

@end

