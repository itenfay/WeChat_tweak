//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderMusicTopicInfo, MMMusicVCOpenParams, MMUIButton, MMUIView, MMWebImageView, NSString, RichTextView, UILabel, UIView, VideoTemplate, WCFinderAuthInfoIconView, WCFinderDataItem, WCFinderExpandHitTingPlayerContoller, WCFinderMusicEventHeaderRecommendListView, WCFinderShadowBubbleView, WCFinderShareItemInfo, WCFinderVideoTemplateView;

@interface WCFinderMusicEventHeaderView
{
    MMUIButton *_ringBtn;
    MMUIButton *_likeBtn;
    MMUIButton *_joinButton;
    WCFinderVideoTemplateView *_templateView;
    VideoTemplate *_videoTemplate;
    MMWebImageView *_mediaBkgImage;
    MMUIButton *_audioMusicBtn;
    WCFinderExpandHitTingPlayerContoller *_tingMusicBtn;
    WCFinderDataItem *_fromDataItem;
    FinderMusicTopicInfo *_musicTopicInfo;
    MMMusicVCOpenParams *_openMusicParams;
    RichTextView *_songNameTextView;
    UILabel *_songDescLabel;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UIView *_playButtonBGView;
    MMUIView *_btnContainerView;
    WCFinderMusicEventHeaderRecommendListView *_recommendListView;
    WCFinderShadowBubbleView *_likeEduBubbleView;
    WCFinderShareItemInfo *_shareItemInfo;
}

+ (id)getSongDescByMusicTopicInfo:(id)arg1;
+ (id)convertFromFinderMusicInfo:(id)arg1;
+ (id)buildTitleTextView:(double)arg1;
+ (id)buildSongDetailLabel:(double)arg1;
+ (_Bool)canShowAuthorView:(id)arg1;
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareItemInfo *shareItemInfo; // @synthesize shareItemInfo=_shareItemInfo;
@property(retain, nonatomic) WCFinderShadowBubbleView *likeEduBubbleView; // @synthesize likeEduBubbleView=_likeEduBubbleView;
@property(retain, nonatomic) WCFinderMusicEventHeaderRecommendListView *recommendListView; // @synthesize recommendListView=_recommendListView;
@property(retain, nonatomic) MMUIView *btnContainerView; // @synthesize btnContainerView=_btnContainerView;
@property(retain, nonatomic) UIView *playButtonBGView; // @synthesize playButtonBGView=_playButtonBGView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UILabel *songDescLabel; // @synthesize songDescLabel=_songDescLabel;
@property(retain, nonatomic) RichTextView *songNameTextView; // @synthesize songNameTextView=_songNameTextView;
@property(retain, nonatomic) MMMusicVCOpenParams *openMusicParams; // @synthesize openMusicParams=_openMusicParams;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
@property(retain, nonatomic) WCFinderDataItem *fromDataItem; // @synthesize fromDataItem=_fromDataItem;
@property(retain, nonatomic) WCFinderExpandHitTingPlayerContoller *tingMusicBtn; // @synthesize tingMusicBtn=_tingMusicBtn;
@property(retain, nonatomic) MMUIButton *audioMusicBtn; // @synthesize audioMusicBtn=_audioMusicBtn;
@property(retain, nonatomic) MMWebImageView *mediaBkgImage; // @synthesize mediaBkgImage=_mediaBkgImage;
@property(retain, nonatomic) VideoTemplate *videoTemplate; // @synthesize videoTemplate=_videoTemplate;
@property(readonly, nonatomic) WCFinderVideoTemplateView *templateView; // @synthesize templateView=_templateView;
@property(retain, nonatomic) MMUIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) MMUIButton *ringBtn; // @synthesize ringBtn=_ringBtn;
- (void)finderMusicEventHeaderRecommendListViewDidClickRecommendMusicActionButtonWithMusicInfo:(id)arg1;
- (void)finderMusicEventHeaderRecommendListViewDidClickTemplateActionButton;
- (void)finderMusicEventHeaderRecommendListViewDidReloadData;
- (void)onClickLikeEduBubbleView;
- (void)onClickTemplateViewAction;
- (void)onClickPlayAudioAction:(id)arg1;
- (void)playClicked:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)onClickLikeAction;
- (void)onClickRingAction;
- (void)joinButtonClicked;
- (void)onClickAuthorView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickFavAction;
- (id)getHeaderIconUrl;
- (id)getHeaderTitle;
- (void)hiddenLikeEduBubbleView;
- (void)showLikeEduBubbleView;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
- (void)changeRingBtnShow:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)pauseMusic;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

