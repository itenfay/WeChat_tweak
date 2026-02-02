//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, ColorGradientView, MMAssetICloudLoadingView, MMAssetInfo, MMAssetPickerBrowserStateInfo, NSString, NSURL, SightAssetPreviewView, SightDraft, UIButton, UIImageView, UIView, WXFullScreenGestureRecognizer;
@protocol MMAssetPickerBrowserViewDelegate, MMImagePickerControlCenter, WCDragToCloseDelegate;

@interface MMVideoPreviewBrowserView
{
    NSURL *m_originUrl;
    AVAsset *m_avAsset;
    NSURL *_videoOutputURL;
    SightDraft *_sightDraft;
    _Bool _isPlaying;
    _Bool _isSending;
    UIView *_maskView;
    SightAssetPreviewView *_playerView;
    UIButton *_playBigButton;
    UIImageView *m_thumbImageView;
    WXFullScreenGestureRecognizer *_gestureView;
    _Bool _isNeedResumeWXMusic;
    _Bool _isNeedResumeFinderMinimize;
    _Bool _isAssetMuted;
    NSString *_audioModuleIdentifier;
    _Bool requestUneditedAsset;
    _Bool shouldPlayWithEditAttr;
    _Bool _enablePlayButton;
    id <MMImagePickerControlCenter> controlCenter;
    MMAssetInfo *assetInfo;
    id <MMAssetPickerBrowserViewDelegate> browserDelegate;
    MMAssetPickerBrowserStateInfo *m_stateInfo;
    id <WCDragToCloseDelegate> _touchDelegate;
    ColorGradientView *_iCloudBgView;
    MMAssetICloudLoadingView *_iCloudLoadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAssetICloudLoadingView *iCloudLoadingView; // @synthesize iCloudLoadingView=_iCloudLoadingView;
@property(retain, nonatomic) ColorGradientView *iCloudBgView; // @synthesize iCloudBgView=_iCloudBgView;
@property(nonatomic) _Bool enablePlayButton; // @synthesize enablePlayButton=_enablePlayButton;
@property(nonatomic) __weak id <WCDragToCloseDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=m_stateInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate;
@property(nonatomic) _Bool shouldPlayWithEditAttr; // @synthesize shouldPlayWithEditAttr;
@property(nonatomic) _Bool requestUneditedAsset; // @synthesize requestUneditedAsset;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void)_tryToUpdatePlayerToMute:(_Bool)arg1;
- (id)_getAudioModuleIdentifier;
- (void)_deactiveAudioModule;
- (void)_activeAudioModule;
- (void)_updateAudioSession;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
@property(nonatomic) _Bool enableDragToClose;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)systemResigned:(id)arg1;
- (void)_onPlayerEnd;
- (void)sightAssetPreviewView:(id)arg1 didFailWithError:(id)arg2;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)arg1;
- (void)OnPlay:(id)arg1;
- (void)changePlayStatus:(_Bool)arg1 needNotify:(_Bool)arg2;
- (void)checkVideo;
- (void)_onAssetInfo:(id)arg1 getVideoAssetFinishedWithAsset:(id)arg2 url:(id)arg3 duration:(double)arg4;
- (void)onBeginToChangePage;
- (void)loadAsset;
- (void)showThumbImageViewWithThumb:(id)arg1;
- (void)initMaskView;
- (void)initPlayButton;
- (void)initPlayerView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
@property(readonly, nonatomic) SightAssetPreviewView *playerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

