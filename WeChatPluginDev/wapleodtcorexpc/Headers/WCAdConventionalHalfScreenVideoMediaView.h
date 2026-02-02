//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, WCCanvasAdControlView, WCMediaItem, WCPlayerPlayArgs, WCPlayerView;

@interface WCAdConventionalHalfScreenVideoMediaView
{
    WCMediaItem *_mediaItem;
    WCPlayerPlayArgs *_playInfo;
    WCCanvasAdControlView *_controlView;
    WCPlayerView *_wcPlayerView;
    UIImageView *_thumbImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCPlayerView *wcPlayerView; // @synthesize wcPlayerView=_wcPlayerView;
@property(retain, nonatomic) WCCanvasAdControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playInfo; // @synthesize playInfo=_playInfo;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)onControlViewSingleTap;
- (void)onLoopPlayToEnd;
- (void)reportVideoCommonPlayInfo;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)updateThumbImageWithImage:(id)arg1;
- (void)loadThumbImage;
- (id)getThumbImage;
- (struct CGSize)fetchMediaSize;
- (void)exitWCPlayer;
- (void)pauseWCPlayer;
- (void)startWCPlayer;
- (id)fetchCurrentSnapshot;
- (id)fetchMediaImage;
- (void)onViewDidDisappear;
- (void)onViewWillDisappear;
- (void)onViewDidAppear;
- (void)onHostViewDidExit;
- (void)onHostViewDidEnter;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

