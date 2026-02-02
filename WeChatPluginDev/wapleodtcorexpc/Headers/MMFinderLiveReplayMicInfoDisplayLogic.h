//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveRoomImg, MMFinderLiveConnectMicAllUserInfoView, MMFinderLiveGestureAnimationContainerView, MMFinderLiveReplayCompactMicUserInfoView, MMFinderLiveReplayConnectMicLogic, MMFinderLiveReplayMicInfoAnchorCoverDisplayLogic, MMFinderLiveReplayMicInfoBackgroundDisplayLogic, MMFinderLiveWcPlayerView, MMLiveAudioModeAnimatedBackgroundPlayerViewModel, MMLiveResourceFetcherRootFlowAction, MMLiveTaskId, MMWebImageView, NSString, UILabel, UIView;
@protocol MMFinderLiveConnectMicAllUserInfoViewGiftNotificationDelegate, MMFinderLiveReplayMicInfoDisplayLogicDelegate;

@interface MMFinderLiveReplayMicInfoDisplayLogic : NSObject
{
    _Bool _useCompactView;
    _Bool _inAudioMode;
    _Bool _screenSharing;
    id <MMFinderLiveReplayMicInfoDisplayLogicDelegate> _delegate;
    MMFinderLiveReplayConnectMicLogic *_micLogic;
    MMFinderLiveGestureAnimationContainerView *_gestureAnimationContainerView;
    UIView *_micUserContainerViewBelow;
    UIView *_micUserContainerViewAbove;
    UIView *_audioModeCoverView;
    MMLiveAudioModeAnimatedBackgroundPlayerViewModel *_audioModeBackgroundVideoViewModel;
    MMWebImageView *_audioModeCoverImageView;
    MMFinderLiveReplayMicInfoAnchorCoverDisplayLogic *_micAnchorCoverDisplayLogic;
    MMFinderLiveReplayMicInfoBackgroundDisplayLogic *_micUserBackgroundDisplayLogic;
    MMFinderLiveConnectMicAllUserInfoView *_connectMicAllUserInfoView;
    MMFinderLiveReplayCompactMicUserInfoView *_compactAllUserInfoView;
    UIView *_audioModeCoverShadingView;
    UILabel *_audioModeCoverImageSpamTextLabel;
    NSString *_audioModeBackgroundVideoUri;
    MMFinderLiveWcPlayerView *_audioModeBackgroundVideoView;
    UIView *_micUserBackgroundViewBelow;
    UIView *_micUserBackgroundViewAbove;
    UIView *_micAnchorUserContainerView;
    UIView *_connectMicAllUserInfoContainerView;
    MMLiveTaskId *_taskId;
    MMLiveResourceFetcherRootFlowAction *_downloadMgr;
    LiveRoomImg *_currentAnchorLiveRoomImages;
    LiveRoomImg *_opposingAnchorLiveRoomImages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiveRoomImg *opposingAnchorLiveRoomImages; // @synthesize opposingAnchorLiveRoomImages=_opposingAnchorLiveRoomImages;
@property(retain, nonatomic) LiveRoomImg *currentAnchorLiveRoomImages; // @synthesize currentAnchorLiveRoomImages=_currentAnchorLiveRoomImages;
@property(retain, nonatomic) MMLiveResourceFetcherRootFlowAction *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool screenSharing; // @synthesize screenSharing=_screenSharing;
@property(retain, nonatomic) UIView *connectMicAllUserInfoContainerView; // @synthesize connectMicAllUserInfoContainerView=_connectMicAllUserInfoContainerView;
@property(retain, nonatomic) UIView *micAnchorUserContainerView; // @synthesize micAnchorUserContainerView=_micAnchorUserContainerView;
@property(retain, nonatomic) UIView *micUserBackgroundViewAbove; // @synthesize micUserBackgroundViewAbove=_micUserBackgroundViewAbove;
@property(retain, nonatomic) UIView *micUserBackgroundViewBelow; // @synthesize micUserBackgroundViewBelow=_micUserBackgroundViewBelow;
@property(retain, nonatomic) MMFinderLiveWcPlayerView *audioModeBackgroundVideoView; // @synthesize audioModeBackgroundVideoView=_audioModeBackgroundVideoView;
@property(retain, nonatomic) NSString *audioModeBackgroundVideoUri; // @synthesize audioModeBackgroundVideoUri=_audioModeBackgroundVideoUri;
@property(retain, nonatomic) UILabel *audioModeCoverImageSpamTextLabel; // @synthesize audioModeCoverImageSpamTextLabel=_audioModeCoverImageSpamTextLabel;
@property(retain, nonatomic) UIView *audioModeCoverShadingView; // @synthesize audioModeCoverShadingView=_audioModeCoverShadingView;
@property(retain, nonatomic) MMFinderLiveReplayCompactMicUserInfoView *compactAllUserInfoView; // @synthesize compactAllUserInfoView=_compactAllUserInfoView;
@property(retain, nonatomic) MMFinderLiveConnectMicAllUserInfoView *connectMicAllUserInfoView; // @synthesize connectMicAllUserInfoView=_connectMicAllUserInfoView;
@property(retain, nonatomic) MMFinderLiveReplayMicInfoBackgroundDisplayLogic *micUserBackgroundDisplayLogic; // @synthesize micUserBackgroundDisplayLogic=_micUserBackgroundDisplayLogic;
@property(retain, nonatomic) MMFinderLiveReplayMicInfoAnchorCoverDisplayLogic *micAnchorCoverDisplayLogic; // @synthesize micAnchorCoverDisplayLogic=_micAnchorCoverDisplayLogic;
@property(retain, nonatomic) MMWebImageView *audioModeCoverImageView; // @synthesize audioModeCoverImageView=_audioModeCoverImageView;
@property(retain, nonatomic) MMLiveAudioModeAnimatedBackgroundPlayerViewModel *audioModeBackgroundVideoViewModel; // @synthesize audioModeBackgroundVideoViewModel=_audioModeBackgroundVideoViewModel;
@property(retain, nonatomic) UIView *audioModeCoverView; // @synthesize audioModeCoverView=_audioModeCoverView;
@property(retain, nonatomic) UIView *micUserContainerViewAbove; // @synthesize micUserContainerViewAbove=_micUserContainerViewAbove;
@property(retain, nonatomic) UIView *micUserContainerViewBelow; // @synthesize micUserContainerViewBelow=_micUserContainerViewBelow;
@property(retain, nonatomic) MMFinderLiveGestureAnimationContainerView *gestureAnimationContainerView; // @synthesize gestureAnimationContainerView=_gestureAnimationContainerView;
@property(nonatomic) _Bool inAudioMode; // @synthesize inAudioMode=_inAudioMode;
@property(nonatomic) _Bool useCompactView; // @synthesize useCompactView=_useCompactView;
@property(retain, nonatomic) MMFinderLiveReplayConnectMicLogic *micLogic; // @synthesize micLogic=_micLogic;
@property(nonatomic) __weak id <MMFinderLiveReplayMicInfoDisplayLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)insertCompactAllUserInfoViewToPIPRenderLayer;
- (_Bool)insertCurrentAnchorAudioModeBackgroundVideoViewToPIPRenderLayer;
- (_Bool)insertSoloAudioModeCoverImageViewToPIPRenderLayer;
- (void)configLiveBusinessIdForWidgets;
- (void)updateGestureAnimationContainerViewVisibility;
- (void)updateLiveRoomAudioModeBackgroundVideoUri:(id)arg1;
- (void)startAudioModeBackgroundPlayerWithPath:(id)arg1;
- (void)configureAudioModeBackgroundForCurrentAnchor;
- (void)bringAnchorComponentsToFrontInPip;
- (void)bringMicUserComponentsToFrontInPipWithMicViewInfo:(id)arg1;
- (void)reorderMicUserViewsInPipWithOrderedMicUsers:(id)arg1 anchorZOrder:(unsigned long long)arg2;
- (void)layoutMaskLayerToCoverView:(id)arg1;
- (void)configureMicFocusMasksWithAllMicUsersInfo:(id)arg1 anchorInAudioMode:(_Bool)arg2;
- (struct CGRect)normalizedFrame:(struct CGRect)arg1 convertedToDisplayAspectRatioOfView:(id)arg2;
- (void)updateSoloAudioModeCoverAppearance:(_Bool)arg1;
- (void)updateConnectMicOtherAnchorCoverViewAppearance:(id)arg1;
- (struct CGRect)onMMFinderLiveConnectMicAllUserInfoViewNormalizedFrameAspectRatioConversionRequested:(struct CGRect)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onFinderLiveCDNPlayerMicLogicMicUsersListUpdated;
- (_Bool)addGestureAnimationPagForUserWithId:(id)arg1 withGestureId:(id)arg2 instanceId:(id)arg3 referenceAspectRatio:(double)arg4 translationX:(double)arg5 translationY:(double)arg6 rotation:(double)arg7 scale:(double)arg8 giftSenderNickname:(id)arg9;
- (void)layoutComponents;
- (void)updateConnectMicAllUserInfoViewUnableDisplay:(_Bool)arg1;
- (void)notifyPIPHandleLogicConfig;
- (void)clearMicLogicState;
- (void)updateSeiMessage:(id)arg1;
- (void)updateMicInfo:(id)arg1;
- (void)updateLiveRoomImages:(id)arg1;
@property(readonly, nonatomic) _Bool isAudioDisplayMode;
- (id)replayTask;
@property(readonly, nonatomic) _Bool hasUnknownMicUser;
@property(nonatomic) _Bool isVideoLandscapeMode;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAllUserInfoViewGiftNotificationDelegate> giftNotificationDelegate;
- (id)initWithFrame:(struct CGRect)arg1 replayTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

