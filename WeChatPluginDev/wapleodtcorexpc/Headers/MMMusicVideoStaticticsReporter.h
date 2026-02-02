//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicVideoStaticticsReporter : NSObject
{
    _Bool _hitPreload;
    _Bool _isVariableBitrate;
    _Bool _isLocalVideo;
    unsigned int _reportId;
    int _videoEpisodeIndex;
    int _videoQualityFormat;
    NSString *_url;
    long long _videoFileSizeInBytes;
    double _videoDurationInMs;
    double _videoAverageBitrateInKbps;
    long long _averageNetworkSpeedInKBs;
    long long _bufferCount;
    long long _bufferDurationInMs;
    long long _playDurationInMs;
    double _startPlayTime;
    double _actualPlayTime;
    double _startFetchTrackItemTime;
    double _didFetchTrackItemTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLocalVideo; // @synthesize isLocalVideo=_isLocalVideo;
@property(nonatomic) _Bool isVariableBitrate; // @synthesize isVariableBitrate=_isVariableBitrate;
@property(nonatomic) int videoQualityFormat; // @synthesize videoQualityFormat=_videoQualityFormat;
@property(nonatomic) double didFetchTrackItemTime; // @synthesize didFetchTrackItemTime=_didFetchTrackItemTime;
@property(nonatomic) double startFetchTrackItemTime; // @synthesize startFetchTrackItemTime=_startFetchTrackItemTime;
@property(nonatomic) int videoEpisodeIndex; // @synthesize videoEpisodeIndex=_videoEpisodeIndex;
@property(nonatomic) double actualPlayTime; // @synthesize actualPlayTime=_actualPlayTime;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) _Bool hitPreload; // @synthesize hitPreload=_hitPreload;
@property(nonatomic) long long playDurationInMs; // @synthesize playDurationInMs=_playDurationInMs;
@property(nonatomic) long long bufferDurationInMs; // @synthesize bufferDurationInMs=_bufferDurationInMs;
@property(nonatomic) long long bufferCount; // @synthesize bufferCount=_bufferCount;
@property(nonatomic) long long averageNetworkSpeedInKBs; // @synthesize averageNetworkSpeedInKBs=_averageNetworkSpeedInKBs;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) double videoAverageBitrateInKbps; // @synthesize videoAverageBitrateInKbps=_videoAverageBitrateInKbps;
@property(nonatomic) double videoDurationInMs; // @synthesize videoDurationInMs=_videoDurationInMs;
@property(nonatomic) long long videoFileSizeInBytes; // @synthesize videoFileSizeInBytes=_videoFileSizeInBytes;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool isOptimizedVideoPreloadPolicy;
- (id)description;
- (int)playStartCost;
- (void)reportWithString:(id)arg1;
- (void)reportStaticticsWhileStopPlay;
- (id)init;
- (void)fillImformationFromWcplayerReporter:(id)arg1;
- (void)fillImformationFromFinderMediaInfo:(id)arg1;
- (void)fillImformationFromPlayBackInfo:(id)arg1;

@end

