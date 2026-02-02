//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderDataItem, WCFinderPlayerViewForTing;

@interface TingFinderVideoPlayer
{
    WCFinderPlayerViewForTing *_videoView;
    WCFinderDataItem *_fetchedDataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *fetchedDataItem; // @synthesize fetchedDataItem=_fetchedDataItem;
@property(retain, nonatomic) WCFinderPlayerViewForTing *videoView; // @synthesize videoView=_videoView;
- (void)finderPlayerViewForTing:(id)arg1 onVideoPlayFail:(int)arg2 errorDesc:(id)arg3;
- (void)finderPlayerViewForTing:(id)arg1 onBufferingChanged:(_Bool)arg2;
- (void)finderPlayerViewForTing:(id)arg1 onVideoFrameOut:(id)arg2;
- (void)finderPlayerViewForTing:(id)arg1 onCurrentTimeUpdated:(double)arg2 duration:(double)arg3;
- (void)finderPlayerViewForTingOnVideoEnd:(id)arg1;
- (void)finderPlayerViewForTingOnVideoPlay:(id)arg1;
- (void)finderPlayerViewForTingOnVideoPause:(id)arg1;
- (void)finderPlayerViewForTingOnDisplayViewMTKViewCreated:(id)arg1;
- (double)duration;
- (double)displayTime;
- (double)currentTime;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)play;
- (void)onSuccessWithDataItem:(id)arg1;
- (void)prepareToPlay;
- (int)playerKernelType;
- (void)seekToTime:(double)arg1;
- (void)setPlayRate:(float)arg1;
- (_Bool)canSeek;
- (_Bool)isPlayRateSupported;
- (id)view;
- (id)displayElement;
- (id)playerView;
- (void)setupPlayerView;
- (id)initWithTingItem:(id)arg1 configuartion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

