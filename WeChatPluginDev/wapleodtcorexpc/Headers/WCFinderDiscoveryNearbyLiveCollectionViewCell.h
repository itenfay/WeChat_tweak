//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveActivityView, MMFinderLiveFeedHighlightTagView, MMLiveCDNPlayerView, NSString, RichTextView, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderDiscoveryNearbyLiveCollectionViewCellConfig, WCFinderFeedContentVM, WCFinderHeadImageView;
@protocol WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate;

@interface WCFinderDiscoveryNearbyLiveCollectionViewCell
{
    _Bool _hiddenVideo;
    _Bool _hideAudienceNum;
    _Bool _canShowVolumeEduView;
    _Bool _canShowLiveActivityView;
    _Bool _isJustTappedByUser;
    id <WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _playerScene;
    MMLiveCDNPlayerView *_playerView;
    UIView *_endMaskView;
    UIView *_endTipsView;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    RichTextView *_recommendReasonLabel;
    UIView *_recommendReasonView;
    RichTextView *_descLabel;
    UIView *_authorView;
    UIView *_avatorContainer;
    WCFinderHeadImageView *_avatorImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_audienceNumLabel;
    UIImageView *_soundVolumeAnimationView;
    UIView *_playEduView;
    UIView *_playEduTipsView;
    UILabel *_playEduTipsLabel;
    UIImageView *_eduVoiceView;
    unsigned long long _startPlayTimestamp;
    unsigned long long _playerConnectTimestamp;
    MMFinderLiveActivityView *_liveActivityView;
    WCFinderDiscoveryNearbyLiveCollectionViewCellConfig *_config;
    MMFinderLiveFeedHighlightTagView *_highlightTagView;
}

+ (double)bannerCellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFeedHighlightTagView *highlightTagView; // @synthesize highlightTagView=_highlightTagView;
@property(retain, nonatomic) WCFinderDiscoveryNearbyLiveCollectionViewCellConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isJustTappedByUser; // @synthesize isJustTappedByUser=_isJustTappedByUser;
@property(retain, nonatomic) MMFinderLiveActivityView *liveActivityView; // @synthesize liveActivityView=_liveActivityView;
@property(nonatomic) _Bool canShowLiveActivityView; // @synthesize canShowLiveActivityView=_canShowLiveActivityView;
@property(nonatomic) unsigned long long playerConnectTimestamp; // @synthesize playerConnectTimestamp=_playerConnectTimestamp;
@property(nonatomic) unsigned long long startPlayTimestamp; // @synthesize startPlayTimestamp=_startPlayTimestamp;
@property(retain, nonatomic) UIImageView *eduVoiceView; // @synthesize eduVoiceView=_eduVoiceView;
@property(retain, nonatomic) UILabel *playEduTipsLabel; // @synthesize playEduTipsLabel=_playEduTipsLabel;
@property(retain, nonatomic) UIView *playEduTipsView; // @synthesize playEduTipsView=_playEduTipsView;
@property(retain, nonatomic) UIView *playEduView; // @synthesize playEduView=_playEduView;
@property(nonatomic) _Bool canShowVolumeEduView; // @synthesize canShowVolumeEduView=_canShowVolumeEduView;
@property(retain, nonatomic) UIImageView *soundVolumeAnimationView; // @synthesize soundVolumeAnimationView=_soundVolumeAnimationView;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *avatorContainer; // @synthesize avatorContainer=_avatorContainer;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(retain, nonatomic) RichTextView *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) _Bool hideAudienceNum; // @synthesize hideAudienceNum=_hideAudienceNum;
@property(nonatomic) _Bool hiddenVideo; // @synthesize hiddenVideo=_hiddenVideo;
@property(nonatomic) __weak id <WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForMorphTransition;
- (void)updateAllUIElementsShow:(_Bool)arg1 animate:(_Bool)arg2;
- (void)layoutLiveActivityView;
- (void)pause;
- (void)play;
- (unsigned long long)autoPlayCellType;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onPlayMuteByNotifyOuter:(_Bool)arg1;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)onFeedLiveHighlightTagUpdate:(id)arg1;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onForwardGestureAction:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)onAuthorViewDidClick;
- (void)startAnimatingAsyncLoadImagesIfNeeded;
- (void)updateSoundVolumeAnimationViewHidden;
- (void)updateSoundVolumeAnimationView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)markTappedByUser;
- (_Bool)isEduViewHidden;
- (void)updateShowVolumeEduView:(_Bool)arg1;
- (_Bool)isPlayingWithSound;
- (void)hideTouchEduView;
- (void)showTouchEduViewWithTip:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)stop:(_Bool)arg1;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)onConfigUpdated;
- (void)updateLiveCardBlurState;
- (void)relayoutNickname;
- (void)updateHighLightTag;
- (void)updateWithContentVM:(id)arg1 config:(id)arg2;
- (_Bool)isPlaying;
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

