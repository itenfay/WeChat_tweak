//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, TPLoopbackParams, TPPlayerDataSource, TPPlayerQueue, UIView;

@interface TPPlaybackParams : NSObject
{
    _Bool _outputMute;
    _Bool _allowsExternalPlayback;
    _Bool _usesExternalPlaybackWhileExternalScreenIsActive;
    _Bool _enableResourceLoader;
    UIView *_playerView;
    double _playSpeedRatio;
    double _audioGainRatio;
    NSString *_audioNormalizeVolumeParams;
    long long _seekPositionMs;
    long long _seekType;
    TPPlayerQueue *_playerQueue;
    long long _playerScene;
    unsigned long long _videoGravity;
    unsigned long long _externalPlaybackVideoGravity;
    TPPlayerDataSource *_dataSource;
    TPLoopbackParams *_loopbackParams;
    NSMutableDictionary *_optionalConfig;
    NSMutableArray *_trackList;
    NSMutableDictionary *_selectedTrackInfo;
    NSMutableDictionary *_selectedTrackOpaque;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *selectedTrackOpaque; // @synthesize selectedTrackOpaque=_selectedTrackOpaque;
@property(retain, nonatomic) NSMutableDictionary *selectedTrackInfo; // @synthesize selectedTrackInfo=_selectedTrackInfo;
@property(retain, nonatomic) NSMutableArray *trackList; // @synthesize trackList=_trackList;
@property(retain, nonatomic) NSMutableDictionary *optionalConfig; // @synthesize optionalConfig=_optionalConfig;
@property(retain, nonatomic) TPLoopbackParams *loopbackParams; // @synthesize loopbackParams=_loopbackParams;
@property(retain, nonatomic) TPPlayerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity; // @synthesize externalPlaybackVideoGravity=_externalPlaybackVideoGravity;
@property(nonatomic) unsigned long long videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) long long playerScene; // @synthesize playerScene=_playerScene;
@property(retain, nonatomic) TPPlayerQueue *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(nonatomic) long long seekType; // @synthesize seekType=_seekType;
@property(nonatomic) long long seekPositionMs; // @synthesize seekPositionMs=_seekPositionMs;
@property(nonatomic) _Bool enableResourceLoader; // @synthesize enableResourceLoader=_enableResourceLoader;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(copy, nonatomic) NSString *audioNormalizeVolumeParams; // @synthesize audioNormalizeVolumeParams=_audioNormalizeVolumeParams;
@property(nonatomic) _Bool outputMute; // @synthesize outputMute=_outputMute;
@property(nonatomic) double audioGainRatio; // @synthesize audioGainRatio=_audioGainRatio;
@property(nonatomic) double playSpeedRatio; // @synthesize playSpeedRatio=_playSpeedRatio;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
- (id)getOptionalParamForKey:(unsigned long long)arg1;
- (id)queueStringOptionalParamValueForKey:(unsigned long long)arg1;
- (id)queueIntOptionalParamValueForKey:(unsigned long long)arg1;
- (id)stringOptionalParamValueForKey:(unsigned long long)arg1;
- (long long)boolOptionalParamValueForKey:(unsigned long long)arg1;
- (long long)longOptionalParamValueForKey:(unsigned long long)arg1;
- (id)allTrackList;
- (id)allOptionParams;
- (_Bool)isSeekPositionValid;
- (_Bool)isDataSourceValid;
- (long long)selectedTrackOpaqueForType:(unsigned long long)arg1;
- (id)selectedTrackInfoForType:(unsigned long long)arg1;
- (void)syncAllTracks:(id)arg1;
- (void)removeSelectedTrackAtIndex:(unsigned long long)arg1;
- (void)saveSelectedTrackInfo:(id)arg1 withOpaque:(long long)arg2;
- (void)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (void)addAudioTrackSource:(id)arg1 name:(id)arg2 httpHeader:(id)arg3;
- (void)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 httpHeader:(id)arg4;
- (void)addOptionalParams:(id)arg1;
- (void)setMediaAsset:(id)arg1;
- (void)setUrlDataSource:(id)arg1;
- (void)resetForStop;
- (void)resetForRetry;
- (void)reset;
- (id)init;

@end

