//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoBGMPlayer, FinderTopicBgmInfo, MMUIButton, NSString, UIImageView, UILabel, UIView, WCFinderAnimationLoadingView;

@interface WCFinderPatMusicCollectionReusableView
{
    MMUIButton *_patButton;
    UILabel *_patMusicTitleLabel;
    UIView *_authorInfoView;
    UILabel *_musicAuthorLabel;
    UIImageView *_arrowImageView;
    MMUIButton *_playButton;
    UILabel *_patCountLabel;
    EditVideoBGMPlayer *_bgmPlayer;
    FinderTopicBgmInfo *_bgmInfo;
    WCFinderAnimationLoadingView *_loadingView;
}

+ (double)getPatMusicHeightWithBgmInfo:(id)arg1 titleWording:(id)arg2 screenWid:(double)arg3 enablePostFeed:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) UILabel *patCountLabel; // @synthesize patCountLabel=_patCountLabel;
@property(retain, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *musicAuthorLabel; // @synthesize musicAuthorLabel=_musicAuthorLabel;
@property(retain, nonatomic) UIView *authorInfoView; // @synthesize authorInfoView=_authorInfoView;
@property(retain, nonatomic) UILabel *patMusicTitleLabel; // @synthesize patMusicTitleLabel=_patMusicTitleLabel;
@property(retain, nonatomic) MMUIButton *patButton; // @synthesize patButton=_patButton;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (_Bool)patPostButtonShow;
- (void)resumeMusicPlay;
- (void)stopMusicPlay;
- (void)playMusicWith:(id)arg1 isPlay:(_Bool)arg2;
- (void)playMusicWith:(id)arg1;
- (double)contentLeftMargin;
- (void)updatePatMusicWithBgmInfo:(id)arg1 patCount:(unsigned long long)arg2 readTotalCount:(unsigned long long)arg3 titleWording:(id)arg4 enablePostFeed:(_Bool)arg5;
- (void)onClickAuthorAction;
- (void)onClickPatButtonAction;
- (void)showLoadingViewAnima:(_Bool)arg1;
- (void)onClickPlayAction;
- (void)setAllSubViewsHidden:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setUpSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

