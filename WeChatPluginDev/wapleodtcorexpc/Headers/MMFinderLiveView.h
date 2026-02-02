//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveViewController, NSMutableDictionary, NSString, UIView;

@interface MMFinderLiveView
{
    NSMutableDictionary *_attachWidgetLayerDict;
    NSMutableDictionary *_attachWidgetContainerDict;
    MMFinderLiveViewController *_finderLiveViewController;
    UIView *_overLoadErrorIcon;
    UIView *_overLoadErrorText;
    UIView *_overLoadErrorPage;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *overLoadErrorPage; // @synthesize overLoadErrorPage=_overLoadErrorPage;
@property(retain, nonatomic) UIView *overLoadErrorText; // @synthesize overLoadErrorText=_overLoadErrorText;
@property(retain, nonatomic) UIView *overLoadErrorIcon; // @synthesize overLoadErrorIcon=_overLoadErrorIcon;
@property(retain, nonatomic) MMFinderLiveViewController *finderLiveViewController; // @synthesize finderLiveViewController=_finderLiveViewController;
@property(retain, nonatomic) NSMutableDictionary *attachWidgetContainerDict; // @synthesize attachWidgetContainerDict=_attachWidgetContainerDict;
@property(retain, nonatomic) NSMutableDictionary *attachWidgetLayerDict; // @synthesize attachWidgetLayerDict=_attachWidgetLayerDict;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
- (id)audienceLogReporter;
- (void)insertConnectMicViewsToPIPRenderLayer;
- (void)onPIPHandleLogicConfig:(id)arg1;
- (void)handleAvatarTap:(id)arg1;
- (struct CGPoint)restrictAvatar:(struct CGPoint)arg1 InView:(id)arg2 withViewBoundsSize:(struct CGSize)arg3;
- (void)handleAvatarPan:(id)arg1;
- (void)notifyConnectMicStateChangedIfNeeded;
- (void)updateBeforeZoomOut;
- (void)updateAfterZoomOut;
- (void)doZoomOutAnimator;
- (void)updateBeforeZoomIn;
- (void)updateAfterZoomIn;
- (void)doZoomInAnimator;
- (struct CGRect)getZoomInTargetVideoViewFrame;
- (struct CGRect)getZoomOutTargetVideoViewFrame;
- (id)getLiveStateText;
- (struct CGRect)getLocalAudioModeMinimizeSrcFrame;
- (struct CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (id)minimizeSrcView;
- (id)audioModeCoverImageUrlString;
- (void)prepareForMinimizeMode;
- (void)prepareForMaximizeMode;
- (void)layoutCDNView;
- (_Bool)CGSizeEqualBetween:(struct CGSize)arg1 And:(struct CGSize)arg2;
- (void)updateInnerWindowSize:(struct CGSize)arg1;
- (void)updateWeAvatarView;
- (void)preloadAvatarView;
- (void)addAvatarView;
- (void)layoutAvatarView;
- (void)layoutSubviews;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (void)refreshLiveMinimizeAudioMicWidgets;
- (_Bool)shouldHideNicknameInAudioMicWidgets;
- (_Bool)isUseCDN;
- (void)handleForAudioMicFromAudienceUserNickLabelRefresh:(id)arg1 inCDN:(_Bool)arg2;
- (void)handleForAudioMicFromAudienceUserHeadImageViewRefresh:(id)arg1 inCDN:(_Bool)arg2;
- (void)handleForAudioMicFromAudienceUserOperationViewRefresh:(id)arg1 inCDN:(_Bool)arg2;
- (void)onLiveViewDirtyNotify:(id)arg1;
- (void)clearAttachWidgets;
- (id)getSortedContainerIndexNumArr;
- (void)attachAttachWidgetContainerForLayerIndex:(unsigned long long)arg1;
- (id)getAttachWidgetContainerForLayerIndex:(unsigned long long)arg1;
- (id)getAttachWidgetDictInLayerIndex:(unsigned long long)arg1;
- (id)getUserMicWidgetContainerView;
- (void)insertAttachWidget:(id)arg1 atLayer:(unsigned long long)arg2;
- (void)layoutUIForAttachWidgets;
- (void)handleForAttachWidgetsInOperationView:(id)arg1;
- (void)showOverloadErrorPage:(id)arg1;
- (void)layoutOverloadErrorPage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

