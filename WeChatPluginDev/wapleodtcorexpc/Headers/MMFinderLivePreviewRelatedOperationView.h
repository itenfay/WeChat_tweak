//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicAllUserInfoView, MMFinderLiveMinifyRoomControlBanner, MMFinderLivePreviewRelatedHeaderView, MMUIButton, NSString;

@interface MMFinderLivePreviewRelatedOperationView
{
    MMFinderLiveConnectMicAllUserInfoView *_connectMicAllUserInfoView;
    MMFinderLivePreviewRelatedHeaderView *_previewRelatedHeaderView;
    MMFinderLiveMinifyRoomControlBanner *_minifyRoomBanner;
    MMUIButton *_backgroundButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) MMFinderLiveMinifyRoomControlBanner *minifyRoomBanner; // @synthesize minifyRoomBanner=_minifyRoomBanner;
@property(retain, nonatomic) MMFinderLivePreviewRelatedHeaderView *previewRelatedHeaderView; // @synthesize previewRelatedHeaderView=_previewRelatedHeaderView;
@property(retain, nonatomic) MMFinderLiveConnectMicAllUserInfoView *connectMicAllUserInfoView; // @synthesize connectMicAllUserInfoView=_connectMicAllUserInfoView;
- (struct CGRect)onMMFinderLiveConnectMicAllUserInfoViewNormalizedFrameAspectRatioConversionRequested:(struct CGRect)arg1;
- (void)updateAfterZoomOut;
- (void)updateBeforeZoomOut;
- (void)doZoomOutAnimator;
- (void)updateAfterZoomIn;
- (void)updateBeforeZoomIn;
- (void)doZoomInAnimator;
- (double)getZoomOffset;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3 ret:(unsigned int)arg4;
- (void)showBannerView:(id)arg1;
- (void)removeCurrentBanner;
- (_Bool)existSameBannerWithInfo:(id)arg1;
- (_Bool)existBannerView;
- (void)visibilityChanged:(_Bool)arg1 invokeType:(unsigned long long)arg2;
- (void)visibilityChanged:(_Bool)arg1;
- (void)extraOperationInfoUpdated;
- (void)updateContentsHiddenStatus;
- (void)tapPreviewView;
- (void)layoutBackgroundButton;
- (double)getMinifyRoomBannerTop;
- (void)resetConnectMicVideoOperationViewFrameWithState:(unsigned long long)arg1;
- (void)resetConnectMicVideoOperationViewFrame;
- (void)layoutConnectMicVideoOperationView;
- (id)getFinderLiveTask;
- (id)genMinifyRoomBanner;
- (void)checkInitMinifyRoomBanner;
- (void)layoutMinifyRoomBannerForce:(_Bool)arg1;
- (void)layoutMinifyRoomBanner;
- (void)layoutPreviewRelatedHeaderViewForce:(_Bool)arg1;
- (void)layoutPreviewRelatedHeaderView;
- (void)updateSelfDisplayProperties;
- (void)layoutUI;
- (void)onEnterLive;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(_Bool)arg2;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

