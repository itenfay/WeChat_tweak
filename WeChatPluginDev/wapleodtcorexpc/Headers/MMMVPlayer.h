//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicDotMVDataSource, MMMusicLiveCGIMgr, MMMusicLiveLyricDisplayView, MMMusicLyricService, MMMusicMVModel, MMMusicMVPlayerBgView, MMMusicPlayerMgr, MMTimer, MVImageLoader, MVPlayerConfiguration, MVPreloadManager, NSMutableArray, NSString;
@protocol MMMVPlayerDelegate;

@interface MMMVPlayer : NSObject
{
    _Bool _muted;
    _Bool _showMinimizeWindowWhileStarPlay;
    _Bool _isVideoPaused;
    _Bool _isMusicSeeking;
    _Bool _hasFetchMoreInfoAfterDurationAvailable;
    _Bool _shouldAlignVideoAfterDurationAvailable;
    _Bool _markedVideoOffsetDirty;
    _Bool _isApplicationActive;
    MMMusicMVPlayerBgView *_mvPlayerView;
    MMMusicLiveLyricDisplayView *_lyricView;
    MMMusicPlayerMgr *_musicPlayer;
    MMMusicMVModel *_mvModel;
    CDUnknownBlockType _mvPlayerViewGenerator;
    CDUnknownBlockType _lyricViewGenerator;
    MVPlayerConfiguration *_configuration;
    id <MMMVPlayerDelegate> _delegate;
    MMTimer *_musicMonitorTimer;
    MMMusicDotMVDataSource *_mvDataSource;
    MVPreloadManager *_preloadManager;
    MVImageLoader *_imageLoader;
    MMMusicLiveCGIMgr *_musicLiveCgiManager;
    NSMutableArray *_pluginArr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isApplicationActive; // @synthesize isApplicationActive=_isApplicationActive;
@property(retain, nonatomic) NSMutableArray *pluginArr; // @synthesize pluginArr=_pluginArr;
@property(retain, nonatomic) MMMusicLiveCGIMgr *musicLiveCgiManager; // @synthesize musicLiveCgiManager=_musicLiveCgiManager;
@property(retain, nonatomic) MVImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) MVPreloadManager *preloadManager; // @synthesize preloadManager=_preloadManager;
@property(nonatomic) _Bool markedVideoOffsetDirty; // @synthesize markedVideoOffsetDirty=_markedVideoOffsetDirty;
@property(nonatomic) _Bool shouldAlignVideoAfterDurationAvailable; // @synthesize shouldAlignVideoAfterDurationAvailable=_shouldAlignVideoAfterDurationAvailable;
@property(nonatomic) _Bool hasFetchMoreInfoAfterDurationAvailable; // @synthesize hasFetchMoreInfoAfterDurationAvailable=_hasFetchMoreInfoAfterDurationAvailable;
@property(nonatomic) _Bool isMusicSeeking; // @synthesize isMusicSeeking=_isMusicSeeking;
@property(nonatomic) _Bool isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(retain, nonatomic) MMMusicDotMVDataSource *mvDataSource; // @synthesize mvDataSource=_mvDataSource;
@property(retain, nonatomic) MMTimer *musicMonitorTimer; // @synthesize musicMonitorTimer=_musicMonitorTimer;
@property(nonatomic) _Bool showMinimizeWindowWhileStarPlay; // @synthesize showMinimizeWindowWhileStarPlay=_showMinimizeWindowWhileStarPlay;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <MMMVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MVPlayerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType lyricViewGenerator; // @synthesize lyricViewGenerator=_lyricViewGenerator;
@property(copy, nonatomic) CDUnknownBlockType mvPlayerViewGenerator; // @synthesize mvPlayerViewGenerator=_mvPlayerViewGenerator;
@property(retain, nonatomic) MMMusicMVModel *mvModel; // @synthesize mvModel=_mvModel;
@property(retain, nonatomic) MMMusicPlayerMgr *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
@property(retain, nonatomic) MMMusicLiveLyricDisplayView *lyricView; // @synthesize lyricView=_lyricView;
@property(retain, nonatomic) MMMusicMVPlayerBgView *mvPlayerView; // @synthesize mvPlayerView=_mvPlayerView;
- (void)setupLocalLyricWithSongInfo:(id)arg1;
- (void)setupLyricWithSongInfo:(id)arg1 lyric:(id)arg2;
- (void)setupMusicLyricServiceWithLyric:(id)arg1;
- (void)checkAndSetupLyricServiceWithSongInfo:(id)arg1;
- (void)checkAndSetupLyricService;
- (void)musicLinkService:(id)arg1 onAudioTypeChangedWithpreviousInfo:(id)arg2 updatedInfo:(id)arg3;
- (id)musicPlayerBgView:(id)arg1 finderDataItemForTrack:(id)arg2;
- (_Bool)mvPlayerBgView:(id)arg1 shouldTransitToEpisodeIndex:(long long)arg2 fromIndex:(long long)arg3;
- (void)reusePlayerSubViews;
- (void)musicMVPlayerOnHideBufferingView;
- (void)musicMVPlayerOnShowBufferingView;
- (_Bool)musicMVPlayerIsGetMvInfoFinish;
- (double)musicMVPlayerTrackPlayOffsetAtIndex:(unsigned long long)arg1;
- (id)musicMVPlayerTrackItemAtIndex:(unsigned long long)arg1;
- (double)currentMusicTimeOffsetInMs;
- (long long)numberOfMusicMVTracks;
- (void)onLyricService:(id)arg1 curentLyricChangeTo:(id)arg2 timeToNext:(double)arg3 currIndex:(unsigned int)arg4;
- (void)onDotMvDataSourceCurrDotIndexChangedFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 playedTimeInMs:(unsigned int)arg3 videoTimeOffset:(double)arg4;
- (void)onDotMvDataSourcePlayedTimeChanged:(unsigned int)arg1;
- (void)onMusicPlayStatusChanged;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (void)prepareForMusicPlay:(id)arg1;
- (_Bool)shouldCheckPermission;
- (_Bool)shouldGetBeatTracks;
- (_Bool)shouldGetSongStatus;
@property(readonly, nonatomic) MMMusicLyricService *lyricService;
@property(readonly, nonatomic) long long currentEpisodeIndex;
- (_Bool)isMusicInfoTheSameAsCurrentOne:(id)arg1;
- (_Bool)isPlayerPlayingCurrentMusicInfo;
- (id)currentSongInfo;
- (id)currentMusicInfo;
- (void)registerPlugin:(id)arg1;
- (void)executePluginForEvent:(unsigned long long)arg1;
- (void)updateMutedStatus:(_Bool)arg1;
- (void)updateShouldShowMinimizeWindow:(_Bool)arg1;
- (void)checkVideoStatus;
- (void)updateStatusWhenIndexChanged:(unsigned int)arg1 videoTimeOffset:(double)arg2 autoPlay:(_Bool)arg3 withTransitionEffect:(_Bool)arg4;
- (_Bool)shouldPlayVideo;
- (void)updateMusicPlayProress;
- (_Bool)isPlaying;
- (void)updateOnlyVideoWithModel:(id)arg1;
- (void)updateOnlyVideoWithModel:(id)arg1 showDefaultImage:(_Bool)arg2 autoPlay:(_Bool)arg3;
- (void)preloadFromModel:(id)arg1;
- (void)updateDefaultImageWithUrl:(id)arg1;
- (void)updateDefaultImageWithModel:(id)arg1;
- (void)reloadDefaultImage;
- (void)reloadWithModel:(id)arg1;
- (void)generateMvDataSource;
- (_Bool)canSeek:(unsigned long long)arg1;
- (void)trySeekMusic:(double)arg1 playAuto:(_Bool)arg2;
- (unsigned long long)currentVideoOffsetWithMusicTimeInSecond:(double)arg1;
- (unsigned int)currentVideoIndexWithMusicTimeInSecond:(double)arg1;
- (void)alignVideoProgressWithMusicWithMusicTimeInSecond:(double)arg1 autoPlay:(_Bool)arg2 withTransitionEffect:(_Bool)arg3;
- (void)alignVideoProgressWithMusicWithAutoPlay:(_Bool)arg1;
- (void)didEndSeeking:(double)arg1 autoPlay:(_Bool)arg2;
- (void)onSeeking:(double)arg1 autoPlay:(_Bool)arg2;
- (void)fastSeek:(double)arg1 autoPlay:(_Bool)arg2;
- (void)startSeeking;
- (void)pauseVideo;
- (void)pause;
- (void)startVideoPlayWithReload:(_Bool)arg1;
- (void)startVideoPlay;
- (void)resumeVideo;
- (void)resume;
- (void)clearInnerData;
- (void)uninstallLyricService;
- (void)stop;
- (void)playMusicWithMusicInfo:(id)arg1;
- (void)playMusicWith:(id)arg1;
- (void)checkPermissionWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMoreMvInfoWithDuration:(double)arg1;
- (_Bool)canLoadRecommendMv;
- (void)fetchLyricWithSongId:(id)arg1;
- (void)reloadTransitionEffect:(id)arg1 arrFlexBasicClipTrack:(id)arg2;
- (void)reloadWithBeatTracks:(id)arg1 arrFlexBasicClipTrack:(id)arg2;
- (void)checkAndFetchBeatTracksWithSongId:(id)arg1 duration:(double)arg2;
- (void)fetchInformationAfterDurationAvailableWithDuration:(double)arg1;
- (void)checkAudioDurationAvailable;
- (void)onAudioDurationAvailable:(double)arg1;
- (_Bool)isCurrentInRangeWithCurrentTime:(double)arg1 range:(id)arg2 toleranceSecondBefore:(double)arg3 toleranSecondAfter:(double)arg4;
- (_Bool)isCurrentInRangeWithCurrentTime:(double)arg1 range:(id)arg2;
- (void)onMusicMonitorTimerFired;
- (void)stopMusicMonitorTimer;
- (void)setupMusicMonitorTimer;
- (void)start;
- (void)dealloc;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)initData;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

