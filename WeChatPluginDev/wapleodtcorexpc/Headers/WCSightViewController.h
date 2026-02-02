//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMUIButton, MMUIViewController, NSString, SightView, UIImageView, UIView, WCDataItem, WCMediaItem, WXFullScreenGestureRecognizer;

@interface WCSightViewController
{
    unsigned int _startTime;
    MMUIViewController *_fullScreenWindow;
    UIView *_nodeView;
    UIView *_fullScreenContent;
    SightView *_sightView;
    double _videoTime;
    _Bool _fullScreenPlaying;
    WCMediaItem *_mediaItem;
    UIImageView *_thumbImageView;
    struct CGRect _thumbRect;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    WCDataItem *_dataItem;
    _Bool _bTimelineScene;
    unsigned int m_uOperateMode;
    _Bool m_bPreventRotate;
    CDStruct_1b6d18a9 m_currentPlayTime;
    NSString *_nsFromVCName;
    ForwardMessageLogicController *m_forwardMsgLogic;
    MMUIButton *_gameButton;
    _Bool _silencePlay;
    _Bool _bIgnoreLongPress;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIgnoreLongPress; // @synthesize bIgnoreLongPress=_bIgnoreLongPress;
@property(nonatomic) _Bool silencePlay; // @synthesize silencePlay=_silencePlay;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (void)tryToSaveVideoToAlbum;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)trySendSightToFriend;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)tryToAddFavorite;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowSightAction;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)startLoadFullDownloadView;
- (_Bool)checkDownloadForOperateMode:(unsigned int)arg1;
- (void)onVideoStreamDownloadFail:(_Bool)arg1;
- (void)onVideoTotalTimeUpdate:(double)arg1 msgClientId:(id)arg2;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)reStartStateMachine;
- (void)onStartToPlayVideo;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenClose;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (void)clearSubviews;
- (double)calTransformFromRect:(struct CGRect)arg1;
- (void)stopAndCloseFullScreenWindow;
- (void)internalStopAndCloseFullScreenWindow;
- (void)setThumbImage:(id)arg1;
- (_Bool)isFullScreenPlaying;
- (void)showVCAnimation;
- (void)onGameButtonClick:(id)arg1;
- (void)addGameTailButton;
- (void)initGestures;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

