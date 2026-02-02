//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RichTextView, UIView, WCFinderAuthInfoIconView, WCFinderFeedStaticCoverCollectionViewCell, WCFinderHeadImageView, WCFinderLiveGenericFeedVM;
@protocol WCFinderLiveHomePageLiveReplayCardCellDelegate;

@interface WCFinderLiveHomePageLiveReplayCardCell
{
    _Bool _viewInitialized;
    id <WCFinderLiveHomePageLiveReplayCardCellDelegate> _delegate;
    WCFinderLiveGenericFeedVM *_feedVM;
    WCFinderFeedStaticCoverCollectionViewCell *_liveReplayView;
    UIView *_liveReplayMaskView;
    UIView *_authorView;
    UIView *_avatorContainer;
    WCFinderHeadImageView *_avatorImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    RichTextView *_mediaTitleTextView;
    UIView *_replayLabelView;
    MMUILabel *_replayText;
    UIView *_replayIconView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool viewInitialized; // @synthesize viewInitialized=_viewInitialized;
@property(retain, nonatomic) UIView *replayIconView; // @synthesize replayIconView=_replayIconView;
@property(retain, nonatomic) MMUILabel *replayText; // @synthesize replayText=_replayText;
@property(retain, nonatomic) UIView *replayLabelView; // @synthesize replayLabelView=_replayLabelView;
@property(retain, nonatomic) RichTextView *mediaTitleTextView; // @synthesize mediaTitleTextView=_mediaTitleTextView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *avatorContainer; // @synthesize avatorContainer=_avatorContainer;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) UIView *liveReplayMaskView; // @synthesize liveReplayMaskView=_liveReplayMaskView;
@property(retain, nonatomic) WCFinderFeedStaticCoverCollectionViewCell *liveReplayView; // @synthesize liveReplayView=_liveReplayView;
@property(retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(nonatomic) __weak id <WCFinderLiveHomePageLiveReplayCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createPlayIconView;
- (id)accessibilityLabel;
- (void)onAuthorViewDidClick;
- (void)prepareForReuse;
- (void)updateSkeletonable:(id)arg1;
- (void)updateWithFeedVM:(id)arg1;
- (void)prepareForMorphTransition;
- (void)markTappedByUser;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)updateUIElementsWithIsPlaying:(_Bool)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
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

