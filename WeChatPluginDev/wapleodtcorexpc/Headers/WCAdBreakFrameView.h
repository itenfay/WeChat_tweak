//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UIView, WCAdAlphaVideoView, WCAdBreakFrameInfo, WCAdBreakFramePlayBaseLogic, WCDataItem;
@protocol WCAdBreakFrameViewDelegate;

@interface WCAdBreakFrameView
{
    _Bool _bTimelineScene;
    UIView *_playerControlViewContainer;
    id <WCAdBreakFrameViewDelegate> _delegate;
    WCAdBreakFrameInfo *_adBreakFrameInfo;
    WCDataItem *_dataItem;
    WCAdAlphaVideoView *_alphaVideoView;
    MMUIButton *_clickView;
    WCAdBreakFramePlayBaseLogic *_playLogic;
    struct CGRect _referenceFrame;
    struct CGRect _mediaFrame;
    struct CGRect _clickViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdBreakFramePlayBaseLogic *playLogic; // @synthesize playLogic=_playLogic;
@property(retain, nonatomic) MMUIButton *clickView; // @synthesize clickView=_clickView;
@property(nonatomic) struct CGRect clickViewFrame; // @synthesize clickViewFrame=_clickViewFrame;
@property(retain, nonatomic) WCAdAlphaVideoView *alphaVideoView; // @synthesize alphaVideoView=_alphaVideoView;
@property(nonatomic) struct CGRect mediaFrame; // @synthesize mediaFrame=_mediaFrame;
@property(nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(nonatomic) _Bool bTimelineScene; // @synthesize bTimelineScene=_bTimelineScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdBreakFrameInfo *adBreakFrameInfo; // @synthesize adBreakFrameInfo=_adBreakFrameInfo;
@property(nonatomic) __weak id <WCAdBreakFrameViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *playerControlViewContainer; // @synthesize playerControlViewContainer=_playerControlViewContainer;
- (void)onDataItem:(id)arg1 likeFlagChanged:(_Bool)arg2;
- (void)onCommentSend:(id)arg1 comment:(id)arg2;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)reportVideoCompositeType;
- (void)onClickAreaClick:(id)arg1 forEvent:(id)arg2;
- (_Bool)checkAreaCanClick:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)calcClickViewFrame;
- (void)calcMediaFrame;
- (void)initClickView;
- (void)initPlayerControlViewContainer;
- (id)createAlphaVideoView;
- (void)initMediaView;
- (id)fetchVideoMediaId;
- (void)downloadVideo;
- (_Bool)isVideoDataAvailable;
- (void)resetVideoPlayer;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)arg1 isPlaying:(_Bool)arg2;
- (void)onReferenceVideoStop;
- (void)onReferenceVideoPlay;
- (void)setFrame:(struct CGRect)arg1 referenceFrame:(struct CGRect)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 adBreakFrameInfo:(id)arg2 dataItem:(id)arg3 bTimelineScene:(_Bool)arg4 referenceFrame:(struct CGRect)arg5;

@end

