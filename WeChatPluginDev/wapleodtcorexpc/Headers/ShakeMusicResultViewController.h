//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicFavHandler, MMMusicForwardHandler, MMMusicInfo, MMMusicOpenThirdAppHelper, MMUIButton, MMUILabel, MMWebImageView, NSString, RichTextView, ShakeMusicInfo, ShakeMusicPlayButton, ShakeMusicResultMediaView, UIScrollView, UIView;

@interface ShakeMusicResultViewController
{
    _Bool _shouldNotStopMusic;
    _Bool _shouldUseCustomPopAnimation;
    CDUnknownBlockType _onPopBlock;
    unsigned long long _openScene;
    MMWebImageView *_musicCoverBgImageView;
    MMUIButton *_closeButton;
    MMUILabel *_recognitionResultLabel;
    UIScrollView *_containerView;
    UIView *_cardContainerView;
    ShakeMusicResultMediaView *_mediaView;
    MMUILabel *_songNameLabel;
    MMUILabel *_singerNameLabel;
    MMWebImageView *_musicCoverImageView;
    ShakeMusicPlayButton *_playIconContainerButton;
    MMUIButton *_forwardButton;
    MMUIButton *_favButton;
    MMUIButton *_musicSourceContainerButton;
    RichTextView *_musicSourceRichTextView;
    ShakeMusicInfo *_shakeMusicInfo;
    MMMusicInfo *_musicInfo;
    MMMusicOpenThirdAppHelper *_openThirdAppHelper;
    MMMusicForwardHandler *_forwardHandler;
    MMMusicFavHandler *_favHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseCustomPopAnimation; // @synthesize shouldUseCustomPopAnimation=_shouldUseCustomPopAnimation;
@property(nonatomic) _Bool shouldNotStopMusic; // @synthesize shouldNotStopMusic=_shouldNotStopMusic;
@property(retain, nonatomic) MMMusicFavHandler *favHandler; // @synthesize favHandler=_favHandler;
@property(retain, nonatomic) MMMusicForwardHandler *forwardHandler; // @synthesize forwardHandler=_forwardHandler;
@property(retain, nonatomic) MMMusicOpenThirdAppHelper *openThirdAppHelper; // @synthesize openThirdAppHelper=_openThirdAppHelper;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) ShakeMusicInfo *shakeMusicInfo; // @synthesize shakeMusicInfo=_shakeMusicInfo;
@property(retain, nonatomic) RichTextView *musicSourceRichTextView; // @synthesize musicSourceRichTextView=_musicSourceRichTextView;
@property(retain, nonatomic) MMUIButton *musicSourceContainerButton; // @synthesize musicSourceContainerButton=_musicSourceContainerButton;
@property(retain, nonatomic) MMUIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) MMUIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) ShakeMusicPlayButton *playIconContainerButton; // @synthesize playIconContainerButton=_playIconContainerButton;
@property(retain, nonatomic) MMWebImageView *musicCoverImageView; // @synthesize musicCoverImageView=_musicCoverImageView;
@property(retain, nonatomic) MMUILabel *singerNameLabel; // @synthesize singerNameLabel=_singerNameLabel;
@property(retain, nonatomic) MMUILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) ShakeMusicResultMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UIView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUILabel *recognitionResultLabel; // @synthesize recognitionResultLabel=_recognitionResultLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMWebImageView *musicCoverBgImageView; // @synthesize musicCoverBgImageView=_musicCoverBgImageView;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(copy, nonatomic) CDUnknownBlockType onPopBlock; // @synthesize onPopBlock=_onPopBlock;
- (id)mmMusicFavHandlerGetMusicShareItem:(id)arg1;
- (void)mmMusicFavHandlerOnAddFav:(id)arg1;
- (void)mmMusicFavHandlerOnEndLoading:(id)arg1;
- (void)mmMusicFavHandlerOnStartLoading:(id)arg1;
- (id)mmMusicForwardHandlerGetMusicShareItem:(id)arg1;
- (void)mmMusicForwardHandler:(id)arg1 onShareToWcWithForwardViewController:(id)arg2 andSource:(unsigned long long)arg3;
- (void)mmMusicForwardHandler:(id)arg1 getForwardViewControllerAndPresent:(id)arg2;
- (void)mmMusicForwardHandler:(id)arg1 onShareToFriends:(id)arg2 withSource:(unsigned long long)arg3;
- (void)mmMusicForwardHandlerOnShareActionSuccess:(id)arg1;
- (void)mmMusicForwardHandlerOnEndLoading:(id)arg1;
- (void)mmMusicForwardHandlerOnStartLoading:(id)arg1;
- (id)mmMusicOpenThirdAppHelperGetShareItem:(id)arg1;
- (void)open3rdMusicWebPage;
- (void)mmMusicOpenThirdAppHelper:(id)arg1 onOpen3rdMusicAppWithType:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (id)getMusicShareItem:(id)arg1;
- (id)generateEmptyMVModel;
- (void)didOpenThirdApp;
- (void)favButtonDidClick;
- (void)forwardButtonDidClick;
- (void)playIconViewDidClick;
- (void)closeButtonDidClick;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)loadData;
- (void)setupSubviews;
- (void)layoutBottomArea;
- (void)layoutCardContainerView;
- (void)layoutScrollView;
- (void)layoutTopArea;
- (void)layoutInternal;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithShakeMusicInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

