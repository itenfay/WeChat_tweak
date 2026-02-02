//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVAsset, AVMutableVideoComposition, AVPlayer, AVPlayerItem, AVPlayerLayer, NSObject, NSString, NSURL, WCWidgetPlayer;
@protocol OS_dispatch_queue, SightAssetPreviewViewDelegate;

@interface SightAssetPreviewView : UIView
{
    _Bool _muted;
    _Bool _allowsExternalPlayback;
    _Bool _hideOverlayView;
    _Bool _scaleAspectToFill;
    _Bool _videoReady;
    _Bool _hasStartedPlaying;
    float _playRate;
    float _volume;
    id <SightAssetPreviewViewDelegate> _delegate;
    NSURL *_assetURL;
    AVAsset *_asset;
    AVMutableVideoComposition *_videoComposition;
    UIView *_playScrollView;
    double _playerViewY;
    WCWidgetPlayer *_customWidgetPlayer;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    unsigned long long _previewOrientation;
    struct CGSize _outputSize;
    struct CGRect _playerViewFrame;
    CDStruct_e83c9415 _customPlayTimeRange;
    CDStruct_e83c9415 _fixedPlayTimeRange;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long previewOrientation; // @synthesize previewOrientation=_previewOrientation;
@property(nonatomic) _Bool hasStartedPlaying; // @synthesize hasStartedPlaying=_hasStartedPlaying;
@property(nonatomic, getter=isVideoReady) _Bool videoReady; // @synthesize videoReady=_videoReady;
@property(nonatomic) CDStruct_e83c9415 fixedPlayTimeRange; // @synthesize fixedPlayTimeRange=_fixedPlayTimeRange;
@property(nonatomic) _Bool scaleAspectToFill; // @synthesize scaleAspectToFill=_scaleAspectToFill;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // @synthesize loadingQueue=_loadingQueue;
@property(retain, nonatomic) WCWidgetPlayer *customWidgetPlayer; // @synthesize customWidgetPlayer=_customWidgetPlayer;
@property(nonatomic) CDStruct_e83c9415 customPlayTimeRange; // @synthesize customPlayTimeRange=_customPlayTimeRange;
@property(nonatomic, getter=isHideOverlayView) _Bool hideOverlayView; // @synthesize hideOverlayView=_hideOverlayView;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) struct CGRect playerViewFrame; // @synthesize playerViewFrame=_playerViewFrame;
@property(nonatomic) double playerViewY; // @synthesize playerViewY=_playerViewY;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) UIView *playScrollView; // @synthesize playScrollView=_playScrollView;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) __weak id <SightAssetPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updatePlayerMuted;
- (void)onLongVideoCloseInPicture;
- (void)onLongVideoInPicture;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onMMLiveStartForNotifyOuter;
- (void)_relayoutCustomWidgetPlayer;
- (double)listenTimeIntervalInSection;
- (CDStruct_1b6d18a9)listenTimeInterval;
- (void)onViewDidBeDragToRect:(struct CGRect)arg1;
- (_Bool)shouldBePlaying;
- (_Bool)isPlaying;
- (void)_restartCustomWidgetPlayer;
- (void)_restartVideo;
- (void)restart;
- (void)_seekCustomWidgetPlayerToAbsTime:(CDStruct_1b6d18a9)arg1;
- (void)_seekVideoToAbsTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToRelatedTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_pauseCustomWidgetPlayer;
- (void)_pauseVideo;
- (void)pause;
- (void)_playCustomWidgetPlayer;
- (void)_playVideo;
- (void)play;
- (void)_initCustomWidgetPlayer;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)playerItemDidPlayAtTime:(CDStruct_1b6d18a9)arg1;
- (void)playerItemDidReady;
- (double)_convertAbsTimeToRelatedTimeSec:(CDStruct_1b6d18a9)arg1;
- (_Bool)_hasPlayedToEnd:(CDStruct_1b6d18a9)arg1;
- (void)_fixPlayTimeRangeForAssetDuration:(CDStruct_1b6d18a9)arg1;
- (void)_unSetupObserveWithPlayerItem:(id)arg1;
- (void)_setupObserveWithPlayerItem:(id)arg1;
- (void)reset;
- (void)loadAsset:(id)arg1;
- (struct CGSize)_updateOutputVideoSizeForAVAsset:(id)arg1;
- (struct CGRect)previewFrameWithVideoSize:(struct CGSize)arg1;
- (void)configWithAsset:(id)arg1 scaleAspectToFill:(_Bool)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentRelatedPlaybackTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentPlaybackTime;
- (struct CGRect)getVideoPreviewFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 scaleAspectToFill:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

