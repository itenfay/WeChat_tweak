//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FavoritePlayerControlView, FavoritesRecordDataField, NSString, UIImageView, WCDownloadArgsWrap, WCPlayerPlayArgs, WCPlayerView;
@protocol FavSightViewDelegate;

@interface FavoritePlayerView : UIView
{
    _Bool autoPlay;
    _Bool hideIcon;
    _Bool _isRawVideo;
    _Bool _isAnimateShowing;
    _Bool _bShouldResumeInterrupt;
    _Bool _isRawVideoMode;
    _Bool _bFirstPlay;
    _Bool _bPlayToEnd;
    _Bool _isShowRawPlaySucc;
    id <FavSightViewDelegate> delegate;
    NSString *_aggreateName;
    double _initialTime;
    FavoritesRecordDataField *_dataField;
    FavoritePlayerControlView *_controlView;
    WCPlayerView *_playerView;
    WCPlayerPlayArgs *_playerInfo;
    WCDownloadArgsWrap *_downloadArgsWrap;
    WCPlayerView *_rawPlayerView;
    WCPlayerPlayArgs *_rawPlayerInfo;
    WCDownloadArgsWrap *_rawDownloadArgsWrap;
    UIImageView *_thumbImageView;
    unsigned long long _rawBtnClickTime;
    unsigned long long _rawPlayStartTime;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rawPlayStartTime; // @synthesize rawPlayStartTime=_rawPlayStartTime;
@property(nonatomic) unsigned long long rawBtnClickTime; // @synthesize rawBtnClickTime=_rawBtnClickTime;
@property(nonatomic) _Bool isShowRawPlaySucc; // @synthesize isShowRawPlaySucc=_isShowRawPlaySucc;
@property(nonatomic) _Bool bPlayToEnd; // @synthesize bPlayToEnd=_bPlayToEnd;
@property(nonatomic) _Bool bFirstPlay; // @synthesize bFirstPlay=_bFirstPlay;
@property(nonatomic) _Bool isRawVideoMode; // @synthesize isRawVideoMode=_isRawVideoMode;
@property(nonatomic) _Bool bShouldResumeInterrupt; // @synthesize bShouldResumeInterrupt=_bShouldResumeInterrupt;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCDownloadArgsWrap *rawDownloadArgsWrap; // @synthesize rawDownloadArgsWrap=_rawDownloadArgsWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *rawPlayerInfo; // @synthesize rawPlayerInfo=_rawPlayerInfo;
@property(retain, nonatomic) WCPlayerView *rawPlayerView; // @synthesize rawPlayerView=_rawPlayerView;
@property(retain, nonatomic) WCDownloadArgsWrap *downloadArgsWrap; // @synthesize downloadArgsWrap=_downloadArgsWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) FavoritePlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) FavoritesRecordDataField *dataField; // @synthesize dataField=_dataField;
@property(nonatomic) _Bool isAnimateShowing; // @synthesize isAnimateShowing=_isAnimateShowing;
@property(nonatomic) _Bool isRawVideo; // @synthesize isRawVideo=_isRawVideo;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(retain, nonatomic) NSString *aggreateName; // @synthesize aggreateName=_aggreateName;
@property(nonatomic) _Bool hideIcon; // @synthesize hideIcon;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay;
@property(nonatomic) __weak id <FavSightViewDelegate> delegate; // @synthesize delegate;
- (void)onSingleTap;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)setIconViewHidden:(_Bool)arg1;
- (void)setViewsHiddenOnScroll:(_Bool)arg1;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)onRawVideoDownloadSuccess;
- (void)onClickToCancelPlayRawVideo;
- (void)onClickToPlayRawVideo;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onProgressBarEndSeek:(double)arg1;
- (void)onSightProgressBarHidden;
- (void)onCloseVideoPlay;
- (void)onStartPlayIconClick;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (double)getBottomRightMargin;
- (void)updatePlayerFrame;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)exitVideoPlay;
- (void)handleDownloadExpired;
- (void)handleDownloadFail;
- (void)setStatusViewsHidden:(_Bool)arg1;
- (void)setViewsAlphaOnMultiPageScroll:(double)arg1;
- (void)onWilAnimateClose;
- (void)didFullScreenAnimationCompleted;
- (void)onDidAnimateShow;
- (void)setAnimateFrame:(struct CGRect)arg1;
- (void)onWillAnimateShow;
- (void)setLoadingState:(_Bool)arg1;
- (_Bool)isNeedDownload;
- (_Bool)isPreventHiddenTool;
- (_Bool)isVideoReadyToPlay;
- (_Bool)isVideoPlaying;
- (void)resetViewPosition;
- (id)getRawPlayStatusBtn;
- (id)getAnimateView;
- (double)getTotalPlaybackTimeInSec;
- (double)getCurrPlayedTimeInSec;
- (unsigned long long)totalTime;
- (void)pauseVideo;
- (void)resumeVideoFromInterrupt;
- (void)interruptVideo;
- (void)stopPlayerDownload;
- (void)stopPlayer;
- (void)seekTo:(double)arg1;
- (void)playVideo;
- (id)generateCompressPlayerInfo;
- (id)generateRawPlayerInfo;
- (id)generateRawPlayerView;
- (id)generatePlayerView;
- (id)generateDownloadArgsWrapWithMiddleData;
- (id)generateDownloadArgsWrap;
- (void)layoutSubviews;
- (void)configPlayerView;
- (void)initView;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataField:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

