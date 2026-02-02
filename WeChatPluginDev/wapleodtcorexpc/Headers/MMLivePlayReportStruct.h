//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLivePlayReportStruct : NSObject
{
    unsigned int _width;
    unsigned int _height;
    unsigned int _videoFps;
    unsigned int _VideoGop;
    unsigned int _videoBitrate;
    unsigned int _audioBitrate;
    unsigned int _netSpeed;
    unsigned int _videoCache;
    unsigned int _audioCache;
    unsigned int _videoSumCacheSize;
    unsigned int _audioVideoPlayInterval;
    unsigned int _audioVideoRecvInterval;
    unsigned int _audioCacheThreshold;
    unsigned int _netJitter;
    unsigned int _qualityLevel;
    unsigned int _totalPlayTimeMs;
    unsigned int _totalWaitTimeMs;
    unsigned int _liveStartPlayTimeSec;
    unsigned int _firstFrameTimeMs;
    unsigned int _connectMs;
    unsigned int _rttMs;
    unsigned int _networkId;
    unsigned int _cdnSvrPort;
    float _cpuUsageProcess;
    float _cpuUsageDevice;
    unsigned int _bufferCount;
    unsigned int _regainAvgTime;
    unsigned int _peakVideoBitrate;
    unsigned int _valleyVideoBitrate;
    unsigned int _peakAudioBitrate;
    unsigned int _valleyAudioBitrate;
    unsigned int _exitWithoutPlay;
    unsigned int _reportType;
    unsigned int _reportInterval;
    unsigned int _liveProtocol;
    unsigned int _videoFormat;
    unsigned int _netType;
    unsigned int _role;
    unsigned long long _liveId;
    NSString *_waitDetails;
    NSString *_cdnSvrIp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int role; // @synthesize role=_role;
@property(nonatomic) unsigned int netType; // @synthesize netType=_netType;
@property(nonatomic) unsigned int videoFormat; // @synthesize videoFormat=_videoFormat;
@property(nonatomic) unsigned int liveProtocol; // @synthesize liveProtocol=_liveProtocol;
@property(nonatomic) unsigned int reportInterval; // @synthesize reportInterval=_reportInterval;
@property(nonatomic) unsigned int reportType; // @synthesize reportType=_reportType;
@property(nonatomic) unsigned int exitWithoutPlay; // @synthesize exitWithoutPlay=_exitWithoutPlay;
@property(nonatomic) unsigned int valleyAudioBitrate; // @synthesize valleyAudioBitrate=_valleyAudioBitrate;
@property(nonatomic) unsigned int peakAudioBitrate; // @synthesize peakAudioBitrate=_peakAudioBitrate;
@property(nonatomic) unsigned int valleyVideoBitrate; // @synthesize valleyVideoBitrate=_valleyVideoBitrate;
@property(nonatomic) unsigned int peakVideoBitrate; // @synthesize peakVideoBitrate=_peakVideoBitrate;
@property(nonatomic) unsigned int regainAvgTime; // @synthesize regainAvgTime=_regainAvgTime;
@property(nonatomic) unsigned int bufferCount; // @synthesize bufferCount=_bufferCount;
@property(nonatomic) float cpuUsageDevice; // @synthesize cpuUsageDevice=_cpuUsageDevice;
@property(nonatomic) float cpuUsageProcess; // @synthesize cpuUsageProcess=_cpuUsageProcess;
@property(nonatomic) unsigned int cdnSvrPort; // @synthesize cdnSvrPort=_cdnSvrPort;
@property(retain, nonatomic) NSString *cdnSvrIp; // @synthesize cdnSvrIp=_cdnSvrIp;
@property(nonatomic) unsigned int networkId; // @synthesize networkId=_networkId;
@property(nonatomic) unsigned int rttMs; // @synthesize rttMs=_rttMs;
@property(nonatomic) unsigned int connectMs; // @synthesize connectMs=_connectMs;
@property(nonatomic) unsigned int firstFrameTimeMs; // @synthesize firstFrameTimeMs=_firstFrameTimeMs;
@property(nonatomic) unsigned int liveStartPlayTimeSec; // @synthesize liveStartPlayTimeSec=_liveStartPlayTimeSec;
@property(retain, nonatomic) NSString *waitDetails; // @synthesize waitDetails=_waitDetails;
@property(nonatomic) unsigned int totalWaitTimeMs; // @synthesize totalWaitTimeMs=_totalWaitTimeMs;
@property(nonatomic) unsigned int totalPlayTimeMs; // @synthesize totalPlayTimeMs=_totalPlayTimeMs;
@property(nonatomic) unsigned int qualityLevel; // @synthesize qualityLevel=_qualityLevel;
@property(nonatomic) unsigned int netJitter; // @synthesize netJitter=_netJitter;
@property(nonatomic) unsigned int audioCacheThreshold; // @synthesize audioCacheThreshold=_audioCacheThreshold;
@property(nonatomic) unsigned int audioVideoRecvInterval; // @synthesize audioVideoRecvInterval=_audioVideoRecvInterval;
@property(nonatomic) unsigned int audioVideoPlayInterval; // @synthesize audioVideoPlayInterval=_audioVideoPlayInterval;
@property(nonatomic) unsigned int videoSumCacheSize; // @synthesize videoSumCacheSize=_videoSumCacheSize;
@property(nonatomic) unsigned int audioCache; // @synthesize audioCache=_audioCache;
@property(nonatomic) unsigned int videoCache; // @synthesize videoCache=_videoCache;
@property(nonatomic) unsigned int netSpeed; // @synthesize netSpeed=_netSpeed;
@property(nonatomic) unsigned int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) unsigned int VideoGop; // @synthesize VideoGop=_VideoGop;
@property(nonatomic) unsigned int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

@end

