//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCDataItem, WCMediaItem, WCSightFullPlayView;
@protocol WCSightFullPlayViewControllerDelegate;

@interface WCSightFullPlayViewController
{
    WCMediaItem *m_mediaData;
    WCDataItem *m_dataItem;
    UIButton *m_bgButton;
    WCSightFullPlayView *m_sightFullPlayView;
    id <WCSightFullPlayViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(retain, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(nonatomic) __weak id <WCSightFullPlayViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)tryRotateOrientation;
- (void)tryResetAdAttachVideoEndPlayTime;
- (void)tryAddAdAttachVideoPlayCount;
- (void)tryLogAdAttachVideoStartPlayTime;
- (void)onFullSightDownloadFinished:(id)arg1 downloadType:(long long)arg2;
- (_Bool)shouldShowDetailButton;
- (id)getDetailButtonTitle;
- (void)onFullSightPlayEnd:(_Bool)arg1;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onLongPressedFullSightView:(id)arg1;
- (void)onClickFullSightView:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onLongPressFullPlayView;
- (void)onClickFullPlayView;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (void)layoutAllSubviews:(_Bool)arg1;
- (void)stopPlayWithAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMediaData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

