//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdLookbookCardReportItem, WCAdLookbookSightView, WCAdURLImageView, WCDataItem, WCMediaItem, WCSNSADPlayerControlView;
@protocol WCTimeLineAdLookbookCardMediaViewDelegate;

@interface WCTimeLineAdLookbookCardMediaView
{
    _Bool _bTimelineScene;
    id <WCTimeLineAdLookbookCardMediaViewDelegate> _delegate;
    WCAdURLImageView *_imageView;
    WCAdLookbookSightView *_sightView;
    WCSNSADPlayerControlView *_pauseIconView;
    WCDataItem *_dataItem;
    WCMediaItem *_mediaData;
    WCAdLookbookCardReportItem *_reportItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdLookbookCardReportItem *reportItem; // @synthesize reportItem=_reportItem;
@property(nonatomic) _Bool bTimelineScene; // @synthesize bTimelineScene=_bTimelineScene;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCSNSADPlayerControlView *pauseIconView; // @synthesize pauseIconView=_pauseIconView;
@property(retain, nonatomic) WCAdLookbookSightView *sightView; // @synthesize sightView=_sightView;
@property(retain, nonatomic) WCAdURLImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <WCTimeLineAdLookbookCardMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)onSightViewShouldForbidShowingPauseIcon;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onPlayEnd:(_Bool)arg1;
- (id)generateSightViewWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(_Bool)arg4;
- (void)getSightViewReady;
- (void)setVideoToStandby:(_Bool)arg1;
- (void)setVideoControlViewHidden:(_Bool)arg1;
- (void)updateVideoPauseIconState:(_Bool)arg1;
- (void)setVideoWithPlayState:(_Bool)arg1;
- (void)layoutSubviews;
- (void)generateInitialSubviews;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 mediaData:(id)arg3 bTimelineScene:(_Bool)arg4 reportItem:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

