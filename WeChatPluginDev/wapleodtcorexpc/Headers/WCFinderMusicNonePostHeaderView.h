//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderMusicTopicInfo, MMMusicVCOpenParams, MMUIButton, MMWebImageView, NSString, RichTextView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderDataItem, WCFinderExpandHitTingPlayerContoller;

@interface WCFinderMusicNonePostHeaderView
{
    FinderMusicTopicInfo *_musicTopicInfo;
    MMMusicVCOpenParams *_openMusicParams;
    MMWebImageView *_mediaBkgImage;
    RichTextView *_songNameTextView;
    UILabel *_songDescLabel;
    MMUIButton *_favBtn;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    WCFinderExpandHitTingPlayerContoller *_playMusicBtn;
    UIView *_playButtonBGView;
    WCFinderDataItem *_fromDataItem;
}

+ (id)getSongDescByMusicTopicInfo:(id)arg1;
+ (id)convertFromFinderMusicInfo:(id)arg1;
+ (id)buildTitleTextView:(double)arg1;
+ (id)buildSongDetailLabel:(double)arg1;
+ (_Bool)canShowAuthorView:(id)arg1;
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *fromDataItem; // @synthesize fromDataItem=_fromDataItem;
@property(retain, nonatomic) UIView *playButtonBGView; // @synthesize playButtonBGView=_playButtonBGView;
@property(retain, nonatomic) WCFinderExpandHitTingPlayerContoller *playMusicBtn; // @synthesize playMusicBtn=_playMusicBtn;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMUIButton *favBtn; // @synthesize favBtn=_favBtn;
@property(retain, nonatomic) UILabel *songDescLabel; // @synthesize songDescLabel=_songDescLabel;
@property(retain, nonatomic) RichTextView *songNameTextView; // @synthesize songNameTextView=_songNameTextView;
@property(retain, nonatomic) MMWebImageView *mediaBkgImage; // @synthesize mediaBkgImage=_mediaBkgImage;
@property(retain, nonatomic) MMMusicVCOpenParams *openMusicParams; // @synthesize openMusicParams=_openMusicParams;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
- (void)playClicked:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)onClickAuthorView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickFavAction;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)prepareForReuse;
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

