//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPlayerView;

@interface WCFinderMinimizePlayerContentView
{
    WCPlayerView *_playerView;
    CDUnknownBlockType _playerGenerator;
    struct CGSize _originSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize originSize; // @synthesize originSize=_originSize;
@property(copy, nonatomic) CDUnknownBlockType playerGenerator; // @synthesize playerGenerator=_playerGenerator;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onReceiveAllVideoData;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onCreateThumbImage:(id)arg1;
- (void)_handleVideoFinishPlay;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoFristFrameRendered;
- (void)onPlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)configDirectlyWithPlayer:(id)arg1 contentVM:(id)arg2;
- (double)playPosition;
- (id)getCurrendThumb;
- (id)animatingSnapView;
- (void)keepHandlePlayer;
- (void)ensurePlayer;
- (void)resumePlay;
- (void)pausePlay;
- (_Bool)canGenPIP;
- (_Bool)getPIPSwitch;
- (void)replaceCurContentVM:(id)arg1;
- (void)notifyPipAudioModuleActiveStateChanged:(_Bool)arg1;
- (void)changePlayerViewPIPOpen:(_Bool)arg1;
- (void)hidePlayerViewIfNeeded:(_Bool)arg1;
- (void)beforeRestore;
- (void)cleanUp;
- (void)dealloc;
- (void)onMinimizeFloatingViewDidDisplay;
- (void)didMoveToSuperview;
- (_Bool)beTakeOverAudioModel;
- (struct CGSize)calMediaSize;
- (struct CGSize)contentSize;
- (void)updateContentVM:(id)arg1;
- (_Bool)needFullCover;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

