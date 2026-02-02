//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMDragManager, NSString, SightIconView, UIButton, UIDragInteraction, UIImageView, UILabel, UIView, VideoMessageViewModel, YYAsyncImageView;

@interface VideoMessageCellView
{
    YYAsyncImageView *m_thumbImageView;
    SightIconView *m_sightIconView;
    UIView *m_videoInfoBgView;
    CAGradientLayer *m_videoInfoMaskLayer;
    UILabel *m_videoTimeLabel;
    UILabel *m_videoSizeLabel;
    UILabel *m_pauseTipsLabel;
    int m_uiStatus;
    MMDragManager *dragManager;
    UIImageView *tmp_liftingImgView;
    UIDragInteraction *dragInteraction;
    UIButton *_iconClickBgButton;
    SightIconView *_rawProgressIcon;
    UIImageView *_rawSuccTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rawSuccTipsView; // @synthesize rawSuccTipsView=_rawSuccTipsView;
@property(retain, nonatomic) SightIconView *rawProgressIcon; // @synthesize rawProgressIcon=_rawProgressIcon;
@property(retain, nonatomic) UIButton *iconClickBgButton; // @synthesize iconClickBgButton=_iconClickBgButton;
- (void)animateShowComponentWithDuration:(double)arg1;
- (void)showComponent;
- (void)hideComponent;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)onClick:(_Bool)arg1 soundable:(_Bool)arg2;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartUploadVideo:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onAppear;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)onAssetCheckFinish:(_Bool)arg1;
- (void)asyncCheckAsset;
- (void)restartSendingTask;
- (void)tryRestartSendingTask;
- (void)onClickSightIcon:(id)arg1;
- (void)onTouchUpInside;
- (void)onVideoForwardToFinder:(id)arg1;
- (void)doForward;
- (void)onSliencePlay:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)initVideoInfoView;
- (void)initRawProgressIcon;
- (void)initSightIconView;
- (void)initThumbImageView;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)showVideo;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)updateDownloadStatus;
- (void)updateUploadStatus;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

