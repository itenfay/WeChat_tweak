//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CShakeChecker, MMMusicInfo, MMMusicLocalFileDataInfo, MMMusicPageView, MMMusicPlayerModeTipView, MMMusicSliderControlView, MMScrollActionSheet, MMScrollView, MMTimer, MMTipsViewController, MMWebImageView, MPVolumeView, NSMutableArray, NSString, SendAppMsgHandler, UIButton, UIImageView, UILabel;

@interface MMMultipleMusicViewController
{
    MMScrollView *_musicPageScrollView;
    MMMusicPageView *_leftPageView;
    MMMusicPageView *_centerPageView;
    MMMusicPageView *_rightPageView;
    NSMutableArray *_musicInfoArray;
    MMMusicInfo *_curMusicInfo;
    int _numberOfPages;
    unsigned long long _currentPageIndex;
    SendAppMsgHandler *_sendAppMsgHandler;
    _Bool _isSingleLyricPage;
    float _offset;
    UIImageView *_bottomView;
    UIButton *_playMusicButton;
    MMTimer *_musicProgressTimer;
    MMMusicPlayerModeTipView *_transModeTipView;
    unsigned long long _pushedFromType;
    _Bool _isFromShaking;
    MMScrollActionSheet *_scrollActionSheet;
    CShakeChecker *_shakeChecker;
    _Bool _isOnShakeCheck;
    unsigned long long _beginShakeTime;
    unsigned long long _endShakeTime;
    unsigned long long _startEntranceTime;
    MMTipsViewController *_easterEggTipView;
    MMMusicPlayerModeTipView *_justOneSongTipView;
    MPVolumeView *m_viewAirPlay;
    UIButton *m_jumpOriginMusicView;
    MMWebImageView *m_sourceMusicIconImageView;
    UILabel *m_sourceMusicTitleLabel;
    UIImageView *m_arrowImageView;
    MMMusicSliderControlView *_sliderView;
    _Bool _bLayoutScrollView;
    _Bool _forceRestart;
    _Bool _bClickJumpButton;
    long long _playMode;
    NSString *_taskBizKey;
    unsigned long long _enterMusicTime;
    MMMusicLocalFileDataInfo *_fileLogicController;
    MMScrollActionSheet *_actionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) MMMusicLocalFileDataInfo *fileLogicController; // @synthesize fileLogicController=_fileLogicController;
@property(nonatomic) _Bool bClickJumpButton; // @synthesize bClickJumpButton=_bClickJumpButton;
@property(nonatomic) unsigned long long enterMusicTime; // @synthesize enterMusicTime=_enterMusicTime;
@property(retain, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) _Bool isFromShaking; // @synthesize isFromShaking=_isFromShaking;
- (void)onRevokedReturn;
- (void)onRevoked;
- (id)getRightBarButtonItem;
- (id)getCurrentViewController;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)playSoundByAQAudioPlayer:(id)arg1 type:(id)arg2;
- (void)playShakeSound;
- (id)getEasterEggcontentTip;
- (void)showEasterEgg;
- (void)transPlayMode;
- (void)startShakeCheck;
- (void)OnShake;
- (void)layoutMusicPageView;
- (void)layoutScrollView;
- (void)layoutAirPlayBtn;
- (void)layoutMusicPlayBtn;
- (void)layoutTipView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (id)getPlayButton;
- (void)onBack2FirstPage;
- (void)onShowSecondPage;
- (void)onFollowArrayUpToShowSecondPage;
- (void)updateNavBarTintColorByColor:(id)arg1;
- (void)updateNavBarByColor:(id)arg1;
- (void)onUpdateBottomBtnColor:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)updateCurMusicInfo;
- (void)updatePlayBtn;
- (void)setPlayMusicButtonImage:(_Bool)arg1;
- (id)getMessageWrap:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getUpLoadTask:(id)arg1;
- (id)getCoverImageData;
- (void)onStopMusicListPlay;
- (void)onDataBuffering:(double)arg1;
- (void)OnUpdateDuarationOnForeGround;
- (void)onPlayPreviousMusic;
- (void)onPlayNextMusic;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (void)onMusicPlayStatusChanged;
- (void)onLyricsChanged:(id)arg1 Lyrics:(id)arg2;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)cancelSetShakePage;
- (void)updateMusicScrollViewByCurMusicInfo;
- (void)updateMusicScrollView:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSwipeScrollView;
- (void)addGestureRecognizers;
- (void)showFileActionSheet:(id)arg1;
- (void)onShowCommonMore:(id)arg1;
- (id)getJumpToOriginMusicSheetItemWithMusicInfo:(id)arg1 FromShowMore:(_Bool)arg2;
- (id)getJumpToOriginMusicSheetItemWithMusicInfo:(id)arg1;
- (void)onPlayMusicBtnClicked;
- (void)onMinimizeMusicPlayer;
- (void)onRouteActiveChange:(id)arg1;
- (void)airPlayButtonTouchUpInside:(id)arg1;
- (void)updateJumpOriginMusicView;
- (void)initJumpOriginMusicButton;
- (void)onClickJumpOriginMusicButton;
- (void)initSlider;
- (void)initAirPlayBtn;
- (void)initMusicPlayBtn;
- (void)setMusicPageDelegate;
- (void)tileMusicPages;
- (void)initScrollView;
- (void)initNavigationItem;
- (void)initSelfView;
- (void)updateButtomBtnColor:(id)arg1;
- (void)initView;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)dealloc;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)beginPlayCurMusic;
- (void)reportState;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)shouldShowSearchPlayAllTip;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)updateLogEntranceType;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned int)getSceneByPushFromType:(unsigned long long)arg1;
- (void)setPushedFromType:(long long)arg1;
- (void)commonInit;
- (unsigned long long)indexOfCurrentPage;
- (void)initPageInfo;
- (id)initFromLocalFileData:(id)arg1;
- (id)initFromBanner;
- (id)initWithMusicInfo:(id)arg1 withMusicListSource:(long long)arg2 withOffset:(float)arg3 forceRestart:(_Bool)arg4;
- (id)initWithMusicInfo:(id)arg1 withMusicListSource:(long long)arg2 withOffset:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

