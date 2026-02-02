//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, CMessageWrap, ImageBrowseButton, MMProgressView, MMScrollView, NSString, NSURL, UIImageView, UILabel, UIView, WCActionSheet, WCPlayerConfigControlView, WCPlayerView, WXFullScreenGestureRecognizer;

@interface MMMoviePlayerController
{
    NSURL *m_url;
    NSString *m_videoPath;
    unsigned int m_uiVideoTime;
    _Bool m_bLoadFinished;
    _Bool m_bIsPlaying;
    _Bool m_bRestart;
    UIView *m_loadingView;
    UIImageView *imageView;
    MMProgressView *m_progressView;
    UILabel *m_percentageLabel;
    CMessageWrap *m_msgWrap;
    MMScrollView *m_scrollView;
    struct CGSize m_size;
    _Bool m_isFromFav;
    long long curOrientation;
    double curScreenWith;
    double curScreenHeight;
    _Bool m_bIsStatusBarHidden;
    _Bool m_bSaveMode;
    _Bool m_bDownloadExpired;
    WCActionSheet *m_actionSheet;
    _Bool m_autoRepeat;
    WXFullScreenGestureRecognizer *m_gesture;
    WCPlayerConfigControlView *m_playerControlView;
    ImageBrowseButton *_sessionSourceBtn;
    _Bool m_disableSave;
    _Bool _m_fromAppMsg;
    _Bool _m_fromFavAppMsg;
    _Bool _m_bSupportLocateToMsg;
    int _scene;
    WCPlayerView *m_moviePlayer;
    UIImageView *_thumbImageView;
    CDUnknownBlockType _m_customBottomLeftBtnAction;
    CDUnknownBlockType _m_customBottomLeftBtnTitle;
    NSString *_assetID;
    AVAsset *_asset;
    NSURL *_assetUrl;
    long long _messageSvrID;
    NSString *_chatName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) long long messageSvrID; // @synthesize messageSvrID=_messageSvrID;
@property(retain, nonatomic) NSURL *assetUrl; // @synthesize assetUrl=_assetUrl;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(copy, nonatomic) CDUnknownBlockType m_customBottomLeftBtnTitle; // @synthesize m_customBottomLeftBtnTitle=_m_customBottomLeftBtnTitle;
@property(copy, nonatomic) CDUnknownBlockType m_customBottomLeftBtnAction; // @synthesize m_customBottomLeftBtnAction=_m_customBottomLeftBtnAction;
@property(nonatomic) _Bool m_bSupportLocateToMsg; // @synthesize m_bSupportLocateToMsg=_m_bSupportLocateToMsg;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool m_fromFavAppMsg; // @synthesize m_fromFavAppMsg=_m_fromFavAppMsg;
@property(nonatomic) _Bool m_fromAppMsg; // @synthesize m_fromAppMsg=_m_fromAppMsg;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) _Bool m_disableSave; // @synthesize m_disableSave;
@property(nonatomic) _Bool autoRepeated; // @synthesize autoRepeated=m_autoRepeat;
@property(nonatomic) _Bool m_bSaveMode; // @synthesize m_bSaveMode;
@property(nonatomic) _Bool m_isFromFav; // @synthesize m_isFromFav;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath;
@property(retain, nonatomic) WCPlayerView *m_moviePlayer; // @synthesize m_moviePlayer;
@property(copy, nonatomic) NSURL *m_url; // @synthesize m_url;
- (void)onClickToolView;
- (void)onTapSightIconView;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)startPlay;
- (void)pause;
- (_Bool)isVideoPlaying;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)stopPlaying;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)createPlayerViewWithPlayInfo:(id)arg1;
- (id)generatePlayArgsWithAsset:(id)arg1;
- (id)generatePlayArgsWithUrl:(id)arg1;
- (void)viewWillBeInteractivePoped;
- (void)updateSubViewsRect;
- (void)willAppear;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAssetID:(id)arg1 avAsset:(id)arg2 assetUrl:(id)arg3 messageSvrID:(long long)arg4 chatName:(id)arg5;
- (id)initWithMsgWrap:(id)arg1 VideoPath:(id)arg2;
- (id)initWithCaptureVideoInfo:(id)arg1;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)InternalUpdateVideo:(id)arg1;
- (void)changePlayerStatus;
- (void)autoPlay;
- (void)viewDidLayoutSubviews;
- (void)didAppear;
- (void)viewDidLoad;
- (void)initView;
- (void)initVideoPlayerView;
- (void)openPlayer;
- (void)onOperate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)onSave:(id)arg1;
- (void)onReturn:(id)arg1;
- (void)initData;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)onSessionSourceBtnClick;
- (void)onMsgLocate;
- (void)initSessionResourceButton;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)initLoadingView;
- (void)handleDownloadFail;
- (void)updateProgress:(unsigned int)arg1;
- (void)startPlayingWithURL:(id)arg1 at:(id)arg2;
- (void)startPlayingWithAsset:(id)arg1 at:(id)arg2;
- (void)clearPlaying;
- (void)setFullScreen;
- (void)setStandardScreen;
- (void)updateTitle;
- (struct CGPoint)getScrollViewOffsetWhenNavBarShowing;
- (void)hideToolBar:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGRect)getFullscreenRect;
- (struct CGRect)getStandardRect;
- (struct CGRect)getLabelRect;
- (struct CGRect)getImageViewRect;
- (struct CGRect)getMaskViewFrameFullAndHideBar;
- (struct CGRect)getMaskViewFrameFullAndShowBar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

