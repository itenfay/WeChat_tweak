//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ColorGradientView, MMCopyLabel, MMMusicInfo, MMMusicLyricResolver, MMTimer, MMUILabel, MMWebImageView, NSMutableArray, NSString, NSURL, UIColor, UIImageView, UILabel, UITableView;
@protocol MMMusicPageViewDelegate;

@interface MMMusicPageView : UIView
{
    UIImageView *_musicCoverView;
    MMWebImageView *_lowMusicCoverWebView;
    ColorGradientView *_navBarGradientView;
    MMMusicInfo *_musicInfo;
    NSURL *_url;
    int _currentLyricIndex;
    MMTimer *_timer;
    float _offset;
    NSMutableArray *_lyricsList;
    NSMutableArray *_timeList;
    UIView *_bgShadeView;
    ColorGradientView *_shadeGradientView;
    UIView *_bottomBgView;
    UIColor *_bgColorByCover;
    UIColor *_lyricColorHl;
    _Bool _isSingleLyricPage;
    NSString *_displayName;
    UIView *_musicTitleView;
    UILabel *_shareLabel;
    MMCopyLabel *_musicTitleLabel;
    MMUILabel *_singleLyricLabel;
    _Bool _isTimeToShowSingleLyric;
    UITableView *_lyricsView;
    UIView *_lyricsContainerView;
    ColorGradientView *_headColorGradientView;
    ColorGradientView *_bottomColorGradientView;
    UIView *_secondPageGuesterView;
    MMMusicLyricResolver *_lyricResolver;
    _Bool _isShakeMusicPage;
    id <MMMusicPageViewDelegate> m_delegate;
    int _musicIndex;
    UIImageView *_arrowUpBtn;
    _Bool _hasAddBlurEffect;
    UIView *_blurView;
    NSString *_copyText;
    double _musicTitleAboveCoverButtom;
    double _bottomBgAboveCoverHeight;
    _Bool _bShowJumpButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowUpBtn; // @synthesize arrowUpBtn=_arrowUpBtn;
@property(nonatomic) _Bool isSingleLyricPage; // @synthesize isSingleLyricPage=_isSingleLyricPage;
@property(nonatomic) _Bool isShakeMusicPage; // @synthesize isShakeMusicPage=_isShakeMusicPage;
@property(nonatomic) __weak id <MMMusicPageViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)copyText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onLabelLongPress:(id)arg1 withRect:(struct CGRect)arg2;
- (void)tryToUpdateBlurEffect;
- (double)getCoverViewOriginX;
- (double)getCoverViewSideLength;
- (void)tryToUseIpadRatio;
- (void)resetBgShadeViewY;
- (void)resetLyricContainerViewY;
- (void)resetWidthAndX;
- (void)resetMusicCoverFrame;
- (void)layoutPageView;
- (void)onNewSeekTime:(double)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)addBlurEffectForOverseaMusicCover;
- (void)addBlurEffectForMusicCover;
- (void)updateLowMusicCoverWebView;
- (void)scrollToMusicOffset:(float)arg1;
- (id)getCoverImage;
- (void)back2FirstPage;
- (void)onSwipeBack2FirstPage;
- (void)showSecondPage;
- (void)onShowSecondPage;
- (void)musicTitleViewTapped;
- (void)shadeGradientViewSwipeDown;
- (void)shadeGradientViewTapped;
- (void)coverImageViewTapped;
- (void)lyricsViewTapped;
- (void)menuItemHidden:(id)arg1;
- (void)addGestureRecognizers;
- (id)getMusicInfo;
- (void)setLocalFileTwoColors;
- (void)setDefaultTwoColors;
- (void)updateTwoColorsByImage:(id)arg1;
- (id)getBackGroundColor;
- (id)getLyricColor;
- (void)updateAlbumCoverImgByLocalImage:(id)arg1;
- (void)updateAlbumCoverImg:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)dealloc;
- (_Bool)isValidDisplayName;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateLyrics:(id)arg1;
- (void)updateTimeLyricArrayWithLyrics:(id)arg1;
- (void)stopTimer;
- (void)updateCurIndexJustByTime;
- (void)updateCurIndex;
- (void)scroll;
- (void)startScroll;
- (void)setAlphaForSubViews;
- (void)initSecondPage;
- (void)updateNavBarGradientView;
- (void)updateColorGradientView;
- (void)updateShadeGradientView;
- (void)initDisplayNameByUsrName:(id)arg1;
- (void)initDisplayName;
- (void)initMusicTitleView;
- (void)fadeShowShareLabel;
- (_Bool)isValidLyric;
- (void)commitArrowUpAnimation;
- (void)becomeCenterPage;
- (void)performFadeShowShareLabel;
- (void)initArrowUpBtn;
- (id)shareLabelText;
- (void)initFirstPage;
- (void)setLocalMusicSetting;
- (void)initPageView;
- (void)willChangeToSplitMode;
- (void)configureWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(_Bool)arg3 isFirstConfigure:(_Bool)arg4;
- (id)initWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(_Bool)arg3 andOffset:(float)arg4 ShowJumpButton:(_Bool)arg5;
- (id)initWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(_Bool)arg3 ShowJumpButton:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

