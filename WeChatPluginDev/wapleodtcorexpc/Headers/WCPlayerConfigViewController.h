//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MsgRecordDataWrap, NSObject, NSString, UIImage, UIView, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView, WXFullScreenGestureRecognizer;
@protocol WCPlayerConfigViewControllerDelegate, WCPlayerMediaExt;

@interface WCPlayerConfigViewController
{
    _Bool m_isPresented;
    _Bool _isNeedChangeContentModeAtExist;
    _Bool _bPreventRotate;
    _Bool _bDismissSelfOnPresentOther;
    _Bool _isClosingFullScreenWindow;
    unsigned long long _playerScene;
    WCPlayerPlayArgs *_playerInfo;
    double _videoStartTime;
    UIImage *_thumbImage;
    NSString *_attachTitle;
    NSObject<WCPlayerMediaExt> *_mediaWrap;
    MsgRecordDataWrap *_dataWrap;
    NSObject<WCPlayerConfigViewControllerDelegate> *_delegate;
    WCPlayerView *_playerView;
    WCPlayerConfigControlView *_controlView;
    WXFullScreenGestureRecognizer *_gestureReconizer;
    ForwardMessageLogicController *_forwardMsgLogic;
    UIView *_fullScreenContent;
    SEL _completeSelector;
    id _context;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isClosingFullScreenWindow; // @synthesize isClosingFullScreenWindow=_isClosingFullScreenWindow;
@property(nonatomic) _Bool bDismissSelfOnPresentOther; // @synthesize bDismissSelfOnPresentOther=_bDismissSelfOnPresentOther;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) SEL completeSelector; // @synthesize completeSelector=_completeSelector;
@property(nonatomic) _Bool bPreventRotate; // @synthesize bPreventRotate=_bPreventRotate;
@property(retain, nonatomic) UIView *fullScreenContent; // @synthesize fullScreenContent=_fullScreenContent;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic; // @synthesize forwardMsgLogic=_forwardMsgLogic;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *gestureReconizer; // @synthesize gestureReconizer=_gestureReconizer;
@property(retain, nonatomic) WCPlayerConfigControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool isNeedChangeContentModeAtExist; // @synthesize isNeedChangeContentModeAtExist=_isNeedChangeContentModeAtExist;
@property(nonatomic) __weak NSObject<WCPlayerConfigViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MsgRecordDataWrap *dataWrap; // @synthesize dataWrap=_dataWrap;
@property(retain, nonatomic) NSObject<WCPlayerMediaExt> *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) NSString *attachTitle; // @synthesize attachTitle=_attachTitle;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) double videoStartTime; // @synthesize videoStartTime=_videoStartTime;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (void)onTimeLineVcWillPop;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onToolViewAutoClose;
- (void)onPlayToEnd;
- (void)onTapAttachButton:(id)arg1;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)resumeMusic;
- (void)onFullScreenClose;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (void)pause;
- (void)startPlay;
- (_Bool)isVideoPlaying;
- (_Bool)isChatPlayerMode;
- (void)fetchAllVideoDataWithCompleteSelector:(SEL)arg1 context:(id)arg2;
- (void)saveVideoOnGetAllData;
- (void)saveVideo;
- (void)favoriteVideoOnGetAllData;
- (void)favoriteVideo;
- (void)forwardVideoOnGetAllData:(id)arg1;
- (void)forwardVideoToFriend:(id)arg1;
- (void)clearSubviews;
- (void)stopAndCloseFullScreenWindow;
- (void)showVCAnimation;
- (id)generateConfig;
- (void)viewDidLayoutSubviews;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)changePresentedState:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

