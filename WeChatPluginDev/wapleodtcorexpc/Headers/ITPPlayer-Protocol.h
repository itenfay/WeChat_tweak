//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSString, TPDownloadParamData, TPOptionalParam, TPPlayerLogContext, TPVideoInfo, UIImage, UIView;
@protocol ITPBusinessReportManager, ITPExtendReportController, ITPMediaAsset, ITPPlayerDelegate, ITPPlayerDetailInfoDelegate, ITPPlayerProxy, ITPRichMediaSynchronizer, OS_dispatch_queue, TPAssetResourceLoaderDelegate;

@protocol ITPPlayer <NSObject>
@property(nonatomic) __weak id <ITPPlayerDetailInfoDelegate> detailInfoDelegate;
@property(readonly, nonatomic) _Bool pictureInPictureActive;
@property(readonly, nonatomic) _Bool pictureInPicturePossible;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property(retain, nonatomic) TPPlayerLogContext *log;
@property(readonly, nonatomic) id <ITPBusinessReportManager> reportManager;
@property(readonly, nonatomic) id <ITPPlayerProxy> proxy;
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
@property(nonatomic) __weak id <ITPPlayerDelegate> delegate;
- (long long)getPlayerState;
- (id <ITPExtendReportController>)getExtendReportController;
- (void)setRichMediaSynchronizer:(id <ITPRichMediaSynchronizer>)arg1;
- (long long)stopPictureInPicture;
- (long long)startPictureInPicture;
- (NSString *)getPropertyString:(long long)arg1;
- (long long)getPropertyLong:(long long)arg1;
- (void)captureWithMode:(unsigned long long)arg1;
- (void)captureVideoWithFinishBlock:(void (^)(UIImage *))arg1;
- (UIImage *)syncCaptureVideo;
- (void)captureVideo;
- (long long)switchDefinitionWithMediaAsset:(id <ITPMediaAsset>)arg1 definitionId:(long long)arg2 videoInfo:(TPVideoInfo *)arg3;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2 videoInfo:(TPVideoInfo *)arg3 httpHeader:(NSDictionary *)arg4;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2 videoInfo:(TPVideoInfo *)arg3 mode:(long long)arg4 resourceLoaderDelegate:(id <TPAssetResourceLoaderDelegate>)arg5 delegateQueue:(NSObject<OS_dispatch_queue> *)arg6;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2 videoInfo:(TPVideoInfo *)arg3;
- (long long)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)setLoopback:(_Bool)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)seekTo:(long long)arg1;
- (long long)releasePlayer;
- (long long)reset;
- (void)stopAsync;
- (long long)stop;
- (long long)pause;
- (long long)start;
- (long long)prepareAsync;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (NSArray *)getProgramInfo;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (NSArray *)getTrackInfo;
- (long long)addAudioTrackSource:(NSString *)arg1 name:(NSString *)arg2 downloadParamData:(TPDownloadParamData *)arg3;
- (long long)addAudioTrackSource:(NSString *)arg1 name:(NSString *)arg2;
- (long long)addSubtitleSource:(NSString *)arg1 mimeType:(NSString *)arg2 name:(NSString *)arg3 downloadParamData:(TPDownloadParamData *)arg4;
- (long long)addSubtitleSource:(NSString *)arg1 mimeType:(NSString *)arg2 name:(NSString *)arg3;
- (long long)setVideoInfo:(TPVideoInfo *)arg1;
- (long long)setDataSourceWithMediaAsset:(id <ITPMediaAsset>)arg1;
- (long long)setDataSource:(NSString *)arg1 httpHeader:(NSDictionary *)arg2;
- (long long)setDataSource:(NSString *)arg1 resourceLoaderDelegate:(id <TPAssetResourceLoaderDelegate>)arg2 delegateQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (long long)setDataSource:(NSString *)arg1;
- (long long)setPlayerOptionalParam:(TPOptionalParam *)arg1;
- (id)initWithPlayingQueue:(NSObject<OS_dispatch_queue> *)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (id)initWithPlayingQueue:(NSObject<OS_dispatch_queue> *)arg1;
@end

