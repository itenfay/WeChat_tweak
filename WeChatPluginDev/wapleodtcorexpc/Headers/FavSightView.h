//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavSightFullScreenViewController, FavSightInfo, NSString, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView;
@protocol FavSightViewDelegate;

@interface FavSightView
{
    WCPlayerView *m_sightView;
    WCPlayerConfigControlView *m_controlView;
    WCPlayerPlayArgs *m_playerInfo;
    FavSightFullScreenViewController *m_viewController;
    FavSightInfo *m_sightInfo;
    _Bool m_fileReady;
    _Bool m_bFullScreen;
    _Bool m_downloading;
    _Bool _autoPlay;
    _Bool _hideIcon;
    _Bool _receiveUploadVideoFail;
    id <FavSightViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool receiveUploadVideoFail; // @synthesize receiveUploadVideoFail=_receiveUploadVideoFail;
@property(nonatomic) __weak id <FavSightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hideIcon; // @synthesize hideIcon=_hideIcon;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
- (struct CGRect)getOriginImageViewRectWithSimpleImgInfo:(id)arg1;
- (void)onUploadGroupNoticeData:(id)arg1 success:(_Bool)arg2;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onExitFullScreen;
- (void)onJumpToUrl:(id)arg1;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(_Bool)arg2;
- (void)onGroupNoticeDownloadData:(id)arg1 retCode:(int)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnCdnDownload:(id)arg1;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(unsigned long long)arg2 FinishLength:(unsigned long long)arg3;
- (_Bool)tryFixUnplayableVideo;
- (_Bool)isFileExistAndComplete:(id)arg1;
- (void)checkData;
- (void)setDisPlayViewHidden:(_Bool)arg1;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)didFullScreenAnimationCompleted;
- (void)onDidAnimateShow;
- (void)onWilAnimateClose;
- (void)onWillAnimateShow;
- (void)setAnimateFrame:(struct CGRect)arg1;
- (_Bool)isNeedDownload;
- (void)setDownloadState;
- (void)setLoadingState:(_Bool)arg1;
- (void)showDownloadIcon;
- (void)setIconViewHidden:(_Bool)arg1;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)setVideoPath:(id)arg1;
- (double)getSightHeight;
- (void)refreshThumb;
- (void)stopPlayer;
- (void)pauseVideo;
- (void)playVideo;
- (_Bool)isVideoPlaying;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSightDelegate:(id)arg1;
- (void)onSingleTap;
- (void)dealloc;
- (void)onClickSight;
- (id)initWithWidth:(double)arg1 favSightInfo:(id)arg2 fullScreen:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

