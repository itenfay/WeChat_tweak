//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicInfo, MMUIView, NSString, UIVisualEffectView, WCAdURLImageView, WCCanvasComponentMusicInfo, WCCanvasMusicPlayButton, WCCanvasMusicProgressBar, WCMarqueeLabel;

@interface WCCanvasMusicComponent
{
    MMUIView *_musicCardView;
    MMUIView *_bgView;
    WCAdURLImageView *_bgImageView;
    UIVisualEffectView *_bgBlurView;
    MMUIView *_bgMaskView;
    WCAdURLImageView *_coverImageView;
    WCMarqueeLabel *_titleLabel;
    WCMarqueeLabel *_subTitleLabel;
    WCCanvasMusicPlayButton *_playButton;
    WCCanvasMusicProgressBar *_progressBar;
    WCCanvasComponentMusicInfo *_canvasMusicInfo;
    NSString *_musicId;
    MMMusicInfo *_mmMusicInfo;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicInfo *mmMusicInfo; // @synthesize mmMusicInfo=_mmMusicInfo;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(retain, nonatomic) WCCanvasComponentMusicInfo *canvasMusicInfo; // @synthesize canvasMusicInfo=_canvasMusicInfo;
@property(retain, nonatomic) WCCanvasMusicProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) WCCanvasMusicPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WCMarqueeLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) WCMarqueeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCAdURLImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) MMUIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) UIVisualEffectView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(retain, nonatomic) WCAdURLImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) MMUIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) MMUIView *musicCardView; // @synthesize musicCardView=_musicCardView;
- (void)onMusicPlayTimeChanged:(id)arg1 currentTime:(double)arg2 duration:(double)arg3;
- (void)onMusicPlayStatusChanged:(id)arg1 playState:(long long)arg2;
- (void)onSliderSeekToTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 duration:(double)arg2;
- (void)setPlayState:(long long)arg1;
- (void)onClickPlayButton:(id)arg1 forEvent:(id)arg2;
- (void)initProgressBar;
- (void)initPlayButton;
- (void)initTitleAndSubTitle;
- (void)initCoverImageView;
- (void)initMusicCardView;
- (void)initMMMusicInfo;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

