//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FLVQualitySample : NSObject
{
    unsigned int _width;
    unsigned int _height;
    unsigned int _videoFps;
    unsigned int _videoGop;
    unsigned int _videoBitrate;
    unsigned int _audioBitrate;
    unsigned int _netSpeed;
    unsigned int _videoCache;
    unsigned int _audioCache;
    unsigned int _videoDecCacheSize;
    unsigned int _videoSumCacheSize;
    unsigned int _audioVideoPlayInterval;
    unsigned int _audioVideoRecvInterval;
    unsigned int _audioCacheThreshold;
    unsigned int _netJitter;
    float _cpuUsageProcess;
    float _cpuUsageDevice;
    unsigned int _videoQualityLevel;
    unsigned int _blockCnt;
    unsigned int _updateTime;
    unsigned long long _liveId;
}

@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int blockCnt; // @synthesize blockCnt=_blockCnt;
@property(nonatomic) unsigned int videoQualityLevel; // @synthesize videoQualityLevel=_videoQualityLevel;
@property(nonatomic) float cpuUsageDevice; // @synthesize cpuUsageDevice=_cpuUsageDevice;
@property(nonatomic) float cpuUsageProcess; // @synthesize cpuUsageProcess=_cpuUsageProcess;
@property(nonatomic) unsigned int netJitter; // @synthesize netJitter=_netJitter;
@property(nonatomic) unsigned int audioCacheThreshold; // @synthesize audioCacheThreshold=_audioCacheThreshold;
@property(nonatomic) unsigned int audioVideoRecvInterval; // @synthesize audioVideoRecvInterval=_audioVideoRecvInterval;
@property(nonatomic) unsigned int audioVideoPlayInterval; // @synthesize audioVideoPlayInterval=_audioVideoPlayInterval;
@property(nonatomic) unsigned int videoSumCacheSize; // @synthesize videoSumCacheSize=_videoSumCacheSize;
@property(nonatomic) unsigned int videoDecCacheSize; // @synthesize videoDecCacheSize=_videoDecCacheSize;
@property(nonatomic) unsigned int audioCache; // @synthesize audioCache=_audioCache;
@property(nonatomic) unsigned int videoCache; // @synthesize videoCache=_videoCache;
@property(nonatomic) unsigned int netSpeed; // @synthesize netSpeed=_netSpeed;
@property(nonatomic) unsigned int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) unsigned int videoGop; // @synthesize videoGop=_videoGop;
@property(nonatomic) unsigned int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

@end

