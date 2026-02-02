//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicHorizontalScrollingView, MMMusicInfo, MMMusicListenLyricsViewController, MMMusicLyricsPanel, MMUIButton, MMWebImageView, NSString, UIButton, UILabel, UIPanGestureRecognizer, UIView;
@protocol MMMusicLyricsViewControllerDelegate;

@interface MMMusicLyricsViewController
{
    MMMusicInfo *m_musicInfo;
    struct CGRect m_lyricsViewFrame;
    MMMusicLyricsPanel *m_lyricsPanel;
    MMWebImageView *m_albumImageView;
    UIView *m_bgCoverView;
    MMUIButton *m_upBtn;
    _Bool _isDragOrClickLyrics;
    _Bool _isLargeImageMode;
    id <MMMusicLyricsViewControllerDelegate> _delegate;
    UIPanGestureRecognizer *_panGesture1;
    UIPanGestureRecognizer *_panGesture2;
    MMMusicHorizontalScrollingView *_titleScrollingView;
    MMMusicHorizontalScrollingView *_musicianScrollingView;
    UILabel *_titleLabel;
    UILabel *_musicianLabel;
    UIButton *_topAreaTapBtn;
    MMMusicListenLyricsViewController *_lyricContainerVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicListenLyricsViewController *lyricContainerVC; // @synthesize lyricContainerVC=_lyricContainerVC;
@property(retain, nonatomic) UIButton *topAreaTapBtn; // @synthesize topAreaTapBtn=_topAreaTapBtn;
@property(retain, nonatomic) UILabel *musicianLabel; // @synthesize musicianLabel=_musicianLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *musicianScrollingView; // @synthesize musicianScrollingView=_musicianScrollingView;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *titleScrollingView; // @synthesize titleScrollingView=_titleScrollingView;
@property(nonatomic) _Bool isLargeImageMode; // @synthesize isLargeImageMode=_isLargeImageMode;
@property(nonatomic) _Bool isDragOrClickLyrics; // @synthesize isDragOrClickLyrics=_isDragOrClickLyrics;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture2; // @synthesize panGesture2=_panGesture2;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture1; // @synthesize panGesture1=_panGesture1;
@property(nonatomic) __weak id <MMMusicLyricsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isMusicPlaying:(id)arg1;
- (void)wcListenLyricsViewControllerDidDragging:(id)arg1;
- (void)wcListenLyricsViewController:(id)arg1 didSelectLyric:(double)arg2;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (void)onMusicLyricDidSeekToTime:(double)arg1;
- (void)onLyricsDidSlideUp:(double)arg1;
- (void)onDragOrClickLyrics;
- (void)onClickUpBtn;
- (void)onWillCloseLyricsPanel;
- (void)handleSlide:(id)arg1;
- (void)onTapTopArea;
- (void)changeImageMode:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)getLyrics;
- (void)initData;
- (void)initUpBtn;
- (void)initView;
- (id)initWithMusicInfo:(id)arg1 andLyricsViewFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

