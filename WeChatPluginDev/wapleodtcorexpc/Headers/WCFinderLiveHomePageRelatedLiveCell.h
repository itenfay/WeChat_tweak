//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveActivityView, MMFinderLiveFeedHighlightTagView, MMLiveCDNPlayerView, NSString, RichTextView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderFeedImageCDNView, WCFinderHeadImageView, WCFinderLiveFeedGenericCoverReportInfo, WCFinderLiveGenericFeedVM;
@protocol WCFinderLiveHomePageRelatedLiveCellDelegate;

@interface WCFinderLiveHomePageRelatedLiveCell
{
    _Bool _canShowLiveActivityView;
    _Bool _isJustTappedByUser;
    id <WCFinderLiveHomePageRelatedLiveCellDelegate> _delegate;
    UIView *_backgroundMaskView;
    MMLiveCDNPlayerView *_playerView;
    WCFinderFeedImageCDNView *_topCoverView;
    WCFinderFeedImageCDNView *_midCoverView;
    WCFinderFeedImageCDNView *_bottomCoverView;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    UIView *_endMaskView;
    UIView *_endTipsView;
    RichTextView *_recommendReasonLabel;
    UIView *_recommendReasonView;
    UIView *_authorView;
    WCFinderHeadImageView *_avatarImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_audienceNumLabel;
    MMFinderLiveActivityView *_liveActivityView;
    unsigned long long _startPlayTimestamp;
    unsigned long long _playerConnectTimestamp;
    WCFinderLiveGenericFeedVM *_feedVM;
    MMFinderLiveFeedHighlightTagView *_highlightTagView;
    WCFinderLiveFeedGenericCoverReportInfo *_coverReportInfo;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveFeedGenericCoverReportInfo *coverReportInfo; // @synthesize coverReportInfo=_coverReportInfo;
@property(retain, nonatomic) MMFinderLiveFeedHighlightTagView *highlightTagView; // @synthesize highlightTagView=_highlightTagView;
@property(retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(nonatomic) _Bool isJustTappedByUser; // @synthesize isJustTappedByUser=_isJustTappedByUser;
@property(nonatomic) unsigned long long playerConnectTimestamp; // @synthesize playerConnectTimestamp=_playerConnectTimestamp;
@property(nonatomic) unsigned long long startPlayTimestamp; // @synthesize startPlayTimestamp=_startPlayTimestamp;
@property(retain, nonatomic) MMFinderLiveActivityView *liveActivityView; // @synthesize liveActivityView=_liveActivityView;
@property(nonatomic) _Bool canShowLiveActivityView; // @synthesize canShowLiveActivityView=_canShowLiveActivityView;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) UIView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(retain, nonatomic) RichTextView *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UIView *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *bottomCoverView; // @synthesize bottomCoverView=_bottomCoverView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *midCoverView; // @synthesize midCoverView=_midCoverView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *topCoverView; // @synthesize topCoverView=_topCoverView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(nonatomic) __weak id <WCFinderLiveHomePageRelatedLiveCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetCoverReportInfo;
- (id)getCoverReportInfo;
- (_Bool)onFeedLiveGetIsAutoPlaying;
- (void)onFeedHighlightTagUpdate;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)prepareForMorphTransition;
- (void)layoutLiveActivityView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)onForwardGestureAction:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)takePlayerViewSnapshot;
- (void)markTappedByUser;
- (void)setMute:(_Bool)arg1;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)onAuthorViewDidClick;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (void)updateLiveCardBlurState;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)adjustSize;
- (void)initViews;
- (void)setFrame:(struct CGRect)arg1;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)relayoutNickname;
- (void)updateHighLightTag;
- (void)updateWithFeedVM:(id)arg1;
- (void)prepareForReuse;
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

