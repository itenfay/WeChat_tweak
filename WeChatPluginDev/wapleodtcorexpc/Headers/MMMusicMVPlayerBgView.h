//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMMusicMVEpisodeItemCellView, MMMusicVideoDisplayView, MMTimer, MusicDefualtImageView, NSMutableDictionary, NSMutableSet, NSObject, NSString, UIImage, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol MMMusicMVPLayerBgviewDataSource, MMMusicMVPlayerBgViewDelegate, OS_dispatch_source;

@interface MMMusicMVPlayerBgView : UIView
{
    _Bool _isSwipeAnimating;
    _Bool _isPreviewMode;
    _Bool _isFullScreen;
    _Bool _isMVInfoValid;
    _Bool _doubleTapLikeDisabled;
    _Bool _disabledPlay;
    _Bool _shouldUseNewPreloadPolicy;
    _Bool _isCancelTimer;
    _Bool _shouldClearDisplay;
    _Bool _disableNextTransition;
    id <MMMusicMVPlayerBgViewDelegate> _delegate;
    id <MMMusicMVPLayerBgviewDataSource> _dataSource;
    UIView *_blurCoverView;
    unsigned long long _currentCellIndex;
    UIView *_cellContentView;
    NSMutableSet *_cellSet;
    NSMutableDictionary *_visibleCellDic;
    NSMutableDictionary *_cellAnimatorDic;
    UIPanGestureRecognizer *_panGesture;
    UIView *_pausePrompt;
    CAGradientLayer *_bgGradientLayer;
    MMTimer *_preloadCellViewTimer;
    MMMusicMVEpisodeItemCellView *_preloadCell;
    unsigned long long _preloadCellIndex;
    UITapGestureRecognizer *_tapGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    UIImageView *_defaultBgImageView;
    MMMusicVideoDisplayView *_videoDisplayView;
    NSObject<OS_dispatch_source> *_imageTimer;
    UIImage *_bgImage;
    MusicDefualtImageView *_defaultImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableNextTransition; // @synthesize disableNextTransition=_disableNextTransition;
@property(nonatomic) _Bool shouldClearDisplay; // @synthesize shouldClearDisplay=_shouldClearDisplay;
@property(retain, nonatomic) MusicDefualtImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) _Bool isCancelTimer; // @synthesize isCancelTimer=_isCancelTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *imageTimer; // @synthesize imageTimer=_imageTimer;
@property(retain, nonatomic) MMMusicVideoDisplayView *videoDisplayView; // @synthesize videoDisplayView=_videoDisplayView;
@property(nonatomic) _Bool shouldUseNewPreloadPolicy; // @synthesize shouldUseNewPreloadPolicy=_shouldUseNewPreloadPolicy;
@property(nonatomic) _Bool disabledPlay; // @synthesize disabledPlay=_disabledPlay;
@property(retain, nonatomic) UIImageView *defaultBgImageView; // @synthesize defaultBgImageView=_defaultBgImageView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool doubleTapLikeDisabled; // @synthesize doubleTapLikeDisabled=_doubleTapLikeDisabled;
@property(nonatomic) unsigned long long preloadCellIndex; // @synthesize preloadCellIndex=_preloadCellIndex;
@property(retain, nonatomic) MMMusicMVEpisodeItemCellView *preloadCell; // @synthesize preloadCell=_preloadCell;
@property(retain, nonatomic) MMTimer *preloadCellViewTimer; // @synthesize preloadCellViewTimer=_preloadCellViewTimer;
@property(retain, nonatomic) CAGradientLayer *bgGradientLayer; // @synthesize bgGradientLayer=_bgGradientLayer;
@property(retain, nonatomic) UIView *pausePrompt; // @synthesize pausePrompt=_pausePrompt;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) NSMutableDictionary *cellAnimatorDic; // @synthesize cellAnimatorDic=_cellAnimatorDic;
@property(retain, nonatomic) NSMutableDictionary *visibleCellDic; // @synthesize visibleCellDic=_visibleCellDic;
@property(retain, nonatomic) NSMutableSet *cellSet; // @synthesize cellSet=_cellSet;
@property(retain, nonatomic) UIView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(nonatomic) _Bool isMVInfoValid; // @synthesize isMVInfoValid=_isMVInfoValid;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) unsigned long long currentCellIndex; // @synthesize currentCellIndex=_currentCellIndex;
@property(nonatomic) _Bool isSwipeAnimating; // @synthesize isSwipeAnimating=_isSwipeAnimating;
@property(nonatomic) __weak UIView *blurCoverView; // @synthesize blurCoverView=_blurCoverView;
@property(nonatomic) __weak id <MMMusicMVPLayerBgviewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MMMusicMVPlayerBgViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPlayEnabled:(_Bool)arg1;
- (void)reloadDataWithForceUpdate:(_Bool)arg1;
- (void)reloadData;
- (void)startCurrentEpisode;
- (void)pauseCurrentEpisodeWithImageShown:(_Bool)arg1;
- (void)pauseCurrentEpisode;
- (void)seekCurrentEpisodeToTime:(double)arg1 autoPlay:(_Bool)arg2 withTransitionEffect:(_Bool)arg3;
- (void)seekCurrentEpisodeToTime:(double)arg1 autoPlay:(_Bool)arg2;
- (void)seekCurrentEpisodeToTime:(double)arg1;
- (void)transitionToEpisodeAtIndex:(unsigned long long)arg1 initialVideoTime:(double)arg2 autoPlay:(_Bool)arg3;
- (void)transitionToEpisodeAtIndex:(unsigned long long)arg1 initialVideoTime:(double)arg2;
- (id)currentCell;
- (id)visibleCells;
- (id)episodeItemCellView:(id)arg1 finderDataItemForTrack:(id)arg2;
- (void)episodeItemCellViewOnHideBufferingViewFromCell:(id)arg1;
- (void)episodeItemCellViewOnShowBufferingViewFromCell:(id)arg1;
- (_Bool)episodeItemCellViewIsInUse:(id)arg1;
- (void)episodeItemCellViewOnVideoToggleJumpFinderProfileOperation:(id)arg1;
- (void)episodeItemCellViewDidTapNoVideoView;
- (void)episodeItemCellViewDidTapVideo;
- (void)episodeItemCellViewOnVideoTogglePostOperation;
- (void)episodeItemCellView:(id)arg1 didUpdateSingleVideoCurrentTime:(double)arg2 bufferPosition:(double)arg3;
- (void)renderPixelBuffer:(id)arg1 index:(long long)arg2;
- (void)episodeItemCellView:(id)arg1 onImageFrameOut:(id)arg2;
- (void)episodeItemCellView:(id)arg1 onVideoFrameOut:(id)arg2;
- (_Bool)shouldIgnoreTapWithLocation:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)removePausePrompt;
- (void)setupPausePrompt;
- (void)onPreloadCellViewTimeout;
- (void)delayPreloadCellView;
- (id)fetchReusuableCell;
- (void)updateCellData:(id)arg1 withIndex:(unsigned long long)arg2 videoInitialTime:(double)arg3 autoPlay:(_Bool)arg4;
- (void)updateCellData:(id)arg1 withIndex:(unsigned long long)arg2 videoInitialTime:(double)arg3;
- (void)updateCellData:(id)arg1 withIndex:(unsigned long long)arg2;
- (_Bool)checkAndShowDefaultImageView;
- (id)createVisibleCellIfNeededAtIndex:(unsigned long long)arg1 initialVideoTime:(double)arg2 autoPlay:(_Bool)arg3;
- (id)createVisibleCellIfNeededAtIndex:(unsigned long long)arg1 initialVideoTime:(double)arg2;
- (id)createVisibleCellIfNeededAtIndex:(unsigned long long)arg1;
- (void)handlePan:(id)arg1;
- (void)playLikeAnimationFromGestureRecognizer:(id)arg1 likeViewSuperView:(id)arg2 aboveView:(id)arg3;
- (void)handleLongPress:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)replaceVideoDisplayView;
- (void)displayBgImage:(id)arg1;
- (void)clearDisplayAfterDelay:(double)arg1;
- (void)checkAndClearDisplay;
- (void)clearDisplay;
- (void)_displayDefaultImage:(id)arg1;
- (void)displayDefaultImage:(id)arg1;
- (void)addVideoDisplayViewBlurEffectForRender:(double)arg1;
- (void)setupVideoTransitions;
- (_Bool)musicMVPlayerIsGetMvInfoFinish;
- (double)musicMVPlayerTrackPlayOffsetFromDatasourceAtIndex:(unsigned long long)arg1;
- (id)musicMVPlayerTrackItemFromDatasourceAtIndex:(unsigned long long)arg1;
- (long long)numberOfMusicTracksFromDataSource;
- (void)resetToStart;
- (void)layoutSubviews;
- (void)updateBackgroundLayerFrame:(struct CGRect)arg1;
- (void)destoryImageTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

