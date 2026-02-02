//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MAVVideoComposition, MAVVideoCompositionPlayer, NSString;
@protocol EditVideoCompositionBrowserViewDelegate;

@interface EditVideoCompositionBrowserView
{
    _Bool _isPlayingBeforeEnterBackground;
    id <EditVideoCompositionBrowserViewDelegate> _delegate;
    MAVVideoCompositionPlayer *_videoPlayer;
    MAVVideoComposition *_composition;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlayingBeforeEnterBackground; // @synthesize isPlayingBeforeEnterBackground=_isPlayingBeforeEnterBackground;
@property(retain, nonatomic) MAVVideoComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) MAVVideoCompositionPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) __weak id <EditVideoCompositionBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)videoCompositionPlayerPlayCompleted:(id)arg1;
- (void)videoCompositionPlayerProgressUpdated:(id)arg1 currentTime:(CDStruct_1b6d18a9)arg2;
- (double)listenTimeIntervalInSection;
- (void)updateComposition:(id)arg1;
- (struct CGRect)getVideoPreviewFrame;
- (void)dealloc;
- (void)refreshSurface;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)setMute:(_Bool)arg1;
- (void)pause;
- (void)replay;
- (void)play;
- (_Bool)isPlaying;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

