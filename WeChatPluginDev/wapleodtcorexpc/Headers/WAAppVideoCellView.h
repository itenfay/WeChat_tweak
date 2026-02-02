//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, SightIconView, UIImage, WAAppVideoViewModel, WAPlayerHttpMediaWrap, YYAsyncImageView;

@interface WAAppVideoCellView
{
    YYAsyncImageView *m_thumbImageView;
    SightIconView *m_sightIconView;
    MMUILabel *_titleLabel;
    WAPlayerHttpMediaWrap *_videoMediaWrap;
    double _videoDownloadProgress;
    UIImage *_appThumb;
    NSString *_appThumbUrl;
}

- (void).cxx_destruct;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onAppear;
- (void)onTouchUpInside;
- (void)onWAForward:(id)arg1;
- (void)onSliencePlay:(id)arg1;
- (id)reportWithOperate:(unsigned long long)arg1;
- (void)startPlay:(_Bool)arg1;
- (id)operationMenuItems;
- (void)updateSightIconView;
- (void)initSightIconView;
- (void)initTitleView;
- (void)initThumbImageView;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)stopDownloadImage:(id)arg1;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)stopDownloadVideo;
- (void)dealloc;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WAAppVideoViewModel *viewModel; // @dynamic viewModel;

@end

