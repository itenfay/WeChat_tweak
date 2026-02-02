//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveActivityView, MMFinderLiveFeedHighlightTagView, NSString, RichTextView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView;
@protocol WCFinderLiveHomePageNormalCellDelegate;

@interface WCFinderLiveHomePageNormalCell
{
    _Bool _hideAudienceNum;
    _Bool _canShowLiveActivityView;
    id <WCFinderLiveHomePageNormalCellDelegate> _delegate;
    RichTextView *_recommendReasonLabel;
    UIView *_recommendReasonView;
    UIView *_authorView;
    UIView *_avatorContainer;
    WCFinderHeadImageView *_avatorImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_audienceNumLabel;
    MMFinderLiveActivityView *_liveActivityView;
    MMFinderLiveFeedHighlightTagView *_highlightTagView;
    RichTextView *_mediaTitleTextView;
}

+ (double)maxRecommendWidthInCellWidth:(double)arg1;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *mediaTitleTextView; // @synthesize mediaTitleTextView=_mediaTitleTextView;
@property(retain, nonatomic) MMFinderLiveFeedHighlightTagView *highlightTagView; // @synthesize highlightTagView=_highlightTagView;
@property(retain, nonatomic) MMFinderLiveActivityView *liveActivityView; // @synthesize liveActivityView=_liveActivityView;
@property(nonatomic) _Bool canShowLiveActivityView; // @synthesize canShowLiveActivityView=_canShowLiveActivityView;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *avatorContainer; // @synthesize avatorContainer=_avatorContainer;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) UIView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(retain, nonatomic) RichTextView *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(nonatomic) _Bool hideAudienceNum; // @synthesize hideAudienceNum=_hideAudienceNum;
@property(nonatomic) __weak id <WCFinderLiveHomePageNormalCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedHighlightTagUpdate;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateAllUIElementsShow:(_Bool)arg1 animate:(_Bool)arg2;
- (void)layoutLiveActivityView;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)layoutUI;
- (void)relayoutNickname;
- (void)updateHighLightTag;
- (void)updateWithFeedVM:(id)arg1;
- (void)updateSkeletonable:(id)arg1;
- (void)prepareForReuse;
- (void)initViews;
- (void)updateStyle;
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

