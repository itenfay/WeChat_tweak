//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMLiveActionSheetFlowLayoutView, NSString, WCFinderLiveAnchorLogReporter;

@interface MMFinderLiveActivityScrollActionSheet
{
    _Bool _isInStopState;
    _Bool _isLiveBannerMore;
    WCFinderLiveAnchorLogReporter *_anchorReporter;
    MMFinderLiveTaskId *_liveTaskId;
    MMLiveActionSheetFlowLayoutView *_anchorOrAssistantFlowLayoutView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLiveBannerMore; // @synthesize isLiveBannerMore=_isLiveBannerMore;
@property(retain, nonatomic) MMLiveActionSheetFlowLayoutView *anchorOrAssistantFlowLayoutView; // @synthesize anchorOrAssistantFlowLayoutView=_anchorOrAssistantFlowLayoutView;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter; // @synthesize anchorReporter=_anchorReporter;
@property(nonatomic) _Bool isInStopState; // @synthesize isInStopState=_isInStopState;
- (_Bool)isFansGroupItemExpose;
- (void)reportForChangeAppSceneItemExpose;
- (void)showInView:(id)arg1;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (id)liveTask;
- (_Bool)handleConnectMic;
- (_Bool)disableScrollSheetItem:(long long)arg1;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (_Bool)enableDataBoardEntrance;
- (_Bool)enableShowFansGroupEntrance;
- (_Bool)isLiveGameJoinTeamEnabled;
- (_Bool)isLiveGameTeamUpSwitchButtonEnable;
- (_Bool)isLikeAnchorOrAssistantEntrenceEnable;
- (_Bool)isRewardAnchorOrAssistantEntrenceEnable;
- (unsigned int)anchorSwitchFlag;
- (_Bool)isHiddenAudienceName;
- (_Bool)isHiddenAudienceNameEnable;
- (_Bool)isMicMuted;
@property(readonly, nonatomic) _Bool isCameraClosed;
- (_Bool)isLiveGiftEffectOff;
- (_Bool)isRewardEnable;
@property(readonly, nonatomic) _Bool isConnectMicEnabled;
- (_Bool)isLikeEnable;
- (_Bool)isCommentEnable;
- (_Bool)isCurrentInMainScene;
- (id)getChangeAppSceneItem;
- (id)loadItemArrayForAssistant;
- (id)loadItemArrayForAnchor;
- (id)loadItemArrayForAudience;
- (id)loadBannerItemArrayForAudience;
- (void)loadData;
- (id)initWithLiveTaskId:(id)arg1;
- (id)initWithLiveTaskId:(id)arg1 isBannerMore:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

