//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCDNPlayerView, NSString, UIImageView, UIView, WCFinderLiveFeedGenericCoverReportInfo, WCFinderLiveGenericFeedVM;
@protocol WCFinderLiveFeedGenericCdnCellDelegate;

@interface WCFinderLiveFeedGenericCdnCell
{
    _Bool _isJustTappedByUser;
    _Bool _disableEndMask;
    _Bool _isPlayerCoverLoaded;
    UIView *_containerView;
    MMLiveCDNPlayerView *_playerView;
    UIImageView *_gradientView;
    unsigned long long _startPlayTimestamp;
    unsigned long long _playerConnectTimestamp;
    UIView *_endMaskView;
    id <WCFinderLiveFeedGenericCdnCellDelegate> _delegate;
    UIView *_endTipsView;
    WCFinderLiveGenericFeedVM *_feedVM;
    WCFinderLiveFeedGenericCoverReportInfo *_coverReportInfo;
}

- (void).cxx_destruct;
@property _Bool isPlayerCoverLoaded; // @synthesize isPlayerCoverLoaded=_isPlayerCoverLoaded;
@property(retain, nonatomic) WCFinderLiveFeedGenericCoverReportInfo *coverReportInfo; // @synthesize coverReportInfo=_coverReportInfo;
@property(retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(retain, nonatomic) UIView *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(nonatomic) __weak id <WCFinderLiveFeedGenericCdnCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableEndMask; // @synthesize disableEndMask=_disableEndMask;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(nonatomic) _Bool isJustTappedByUser; // @synthesize isJustTappedByUser=_isJustTappedByUser;
@property(nonatomic) unsigned long long playerConnectTimestamp; // @synthesize playerConnectTimestamp=_playerConnectTimestamp;
@property(nonatomic) unsigned long long startPlayTimestamp; // @synthesize startPlayTimestamp=_startPlayTimestamp;
@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (_Bool)onFeedLiveGetIsAutoPlaying;
- (void)resetCoverReportInfo;
- (id)getCoverReportInfo;
- (void)onPlayVideoBackViewVisibleChanged:(_Bool)arg1;
- (_Bool)hasBizInfoForVM:(id)arg1;
- (void)onPlayAudioModeChange:(_Bool)arg1;
- (void)onPlayEventRecvAnchorSEIInfo:(id)arg1;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onPlayMuteForExternalPlaybackMode;
- (void)onPlayMessageReceive:(id)arg1;
- (void)onPlayChangeSize:(struct CGSize)arg1;
- (void)prepareForMorphTransition;
- (void)onPlayMuteByNotifyOuter:(_Bool)arg1;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)updateGradientVisible;
- (void)onForwardGestureAction:(id)arg1;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)takePlayerViewSnapshot;
- (void)markTappedByUser;
- (_Bool)isPlayingWithSound;
- (void)setMute:(_Bool)arg1;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)updateLiveCardBlurState;
- (void)updateWithFeedVM:(id)arg1;
- (void)prepareForReuse;
- (void)initViews;
- (void)initViewsIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

