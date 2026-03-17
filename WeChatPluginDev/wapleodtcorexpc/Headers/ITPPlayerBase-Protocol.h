//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "ITPLog-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, TPDynamicStatisticParams, TPGeneralPlayFlowParams, TPOptionalParam, TPPlayerQueue, UIImage, UIView;
@protocol ITPMediaAsset, ITPPlayerBaseDelegate;

@protocol ITPPlayerBase <NSObject, ITPLog>
@property(readonly, nonatomic) _Bool pictureInPictureSupported;
@property(readonly, nonatomic) _Bool pictureInPictureActive;
@property(readonly, nonatomic) _Bool pictureInPicturePossible;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property(readonly, nonatomic) TPDynamicStatisticParams *dynamicStatisticParams;
@property(readonly, nonatomic) TPGeneralPlayFlowParams *generalPlayFlowParams;
@property(readonly, nonatomic) long long demuxerOffsetInFile;
@property(readonly, nonatomic) long long playerId;
@property(retain, nonatomic) TPPlayerQueue *playerQueue;
@property(readonly, nonatomic) long long currentClipIndex;
@property(nonatomic) _Bool enableSnapshot;
@property(nonatomic) _Bool enableResourceLoader;
@property(nonatomic) unsigned long long videoGravity;
@property(readonly, nonatomic) unsigned long long videoHeight;
@property(readonly, nonatomic) unsigned long long videoWidth;
@property(readonly, nonatomic) long long playableDurationMs;
@property(readonly, nonatomic) double bufferPercent;
@property(readonly, nonatomic) unsigned long long currentState;
@property(readonly, nonatomic) long long currentPositionMs;
@property(readonly, nonatomic) long long durationMs;
@property(readonly, nonatomic) double maxPlaySpeedRatio;
@property(nonatomic) double playSpeedRatio;
@property(copy, nonatomic) NSString *audioNormalizeVolumeParams;
@property(nonatomic) double audioGainRatio;
@property(nonatomic) _Bool outputMute;
@property(retain, nonatomic) UIView *playerView;
@property(nonatomic) __weak id <ITPPlayerBaseDelegate> delegate;
- (long long)stopPictureInPicture;
- (long long)startPictureInPicture;
- (UIImage *)videoPlusSubtitleSnapshot;
- (UIImage *)subtitleSnapshot;
- (UIImage *)snapshot;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)seekTo:(long long)arg1;
- (long long)releasePlayer;
- (long long)reset;
- (long long)stop;
- (long long)pause;
- (long long)start;
- (long long)prepareAsync;
- (long long)prepare;
- (TPDynamicStatisticParams *)getDynamicStatisticParamsAndReset;
- (id)getPlayer;
- (NSString *)getPropertyString:(long long)arg1;
- (long long)getPropertyLong:(long long)arg1;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (NSArray *)getProgramInfo;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (NSArray *)getTrackInfo;
- (long long)switchDefinitionWithMediaAsset:(id <ITPMediaAsset>)arg1 definitionId:(long long)arg2;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2 httpHeader:(NSDictionary *)arg3 mode:(long long)arg4;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2 httpHeader:(NSDictionary *)arg3;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2 mode:(long long)arg3;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2;
- (long long)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)setLoopback:(_Bool)arg1;
- (long long)addAudioTrackSource:(NSString *)arg1 name:(NSString *)arg2 httpHeader:(NSDictionary *)arg3;
- (long long)addAudioTrackSource:(NSString *)arg1 name:(NSString *)arg2;
- (long long)addSubtitleSource:(NSString *)arg1 mimeType:(NSString *)arg2 name:(NSString *)arg3 httpHeader:(NSDictionary *)arg4;
- (long long)addSubtitleSource:(NSString *)arg1 mimeType:(NSString *)arg2 name:(NSString *)arg3;
- (long long)setPlayerOptionalParam:(TPOptionalParam *)arg1;
- (long long)setDataSourceWithMediaAsset:(id <ITPMediaAsset>)arg1;
- (long long)setDataSource:(NSString *)arg1 httpHeader:(NSDictionary *)arg2;
- (long long)setDataSource:(NSString *)arg1;
@end

