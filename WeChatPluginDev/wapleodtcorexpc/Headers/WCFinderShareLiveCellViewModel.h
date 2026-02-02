//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderAuthInfo, WCFinderLiveShareCardExposeReportAdapter;
@protocol WCFinderShareLiveCellViewDelegate;

@interface WCFinderShareLiveCellViewModel
{
    _Bool _isShareBySelf;
    int _cellViewType;
    id <WCFinderShareLiveCellViewDelegate> _liveDelegate;
    double _gradientLayerHeight;
    WCFinderLiveShareCardExposeReportAdapter *_exposeReportAdapter;
}

+ (double)cellViewEstimateWidth;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveShareCardExposeReportAdapter *exposeReportAdapter; // @synthesize exposeReportAdapter=_exposeReportAdapter;
@property(readonly, nonatomic) int cellViewType; // @synthesize cellViewType=_cellViewType;
@property(readonly, nonatomic) double gradientLayerHeight; // @synthesize gradientLayerHeight=_gradientLayerHeight;
@property(nonatomic) _Bool isShareBySelf; // @synthesize isShareBySelf=_isShareBySelf;
@property(nonatomic) __weak id <WCFinderShareLiveCellViewDelegate> liveDelegate; // @synthesize liveDelegate=_liveDelegate;
- (void)reportEcsData:(id)arg1;
- (void)exposeExtStatsReportWhenDisappearFrom:(id)arg1;
- (void)preloadReplay;
- (void)onExposeReport;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (void)onFinderLiveReplaySettingUpdated:(id)arg1 replayEnabled:(_Bool)arg2;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveShareViewReplayStatusUpdated:(id)arg1 liveInfo:(id)arg2;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(id)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
@property(readonly, nonatomic) double estimateWidth;
- (_Bool)isJumpFeedReplay;
- (_Bool)isNeedRemoveNowView;
- (_Bool)isReplay;
- (_Bool)needPayForLive;
- (_Bool)shouldRemoveLiveNowView;
- (_Bool)isCompleteFinderLiveReplay;
- (_Bool)shouldShowGeneratingReplay;
- (_Bool)shouldShowLiveEffectSpam;
- (_Bool)shouldShowMaskView;
- (struct CGSize)defaultContentViewSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (double)descHeight:(int)arg1;
- (_Bool)canForward;
- (id)descFont;
- (id)descColor;
- (id)priceColor;
- (id)gradientLayerBeginColor;
- (id)gradientLayerEndColor;
- (unsigned long long)finderLiveStatus;
- (id)genFinderDataItem;
@property(readonly, copy, nonatomic) NSString *tailTagURL;
@property(readonly, copy, nonatomic) WCFinderAuthInfo *authInfo;
- (id)coverEffectText;
- (id)desc;
- (id)maskUrl;
- (id)bareCoverUrl;
- (id)coverUrl;
- (double)adjustImageRatio;
- (struct CGSize)imageSize;
- (id)nickname;
- (id)avatarUrl;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

