//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCTimeLineEditVideoLayoutView
{
    _Bool _shouldRecoverLyricsWidget;
    _Bool _shouldShowNewBGMPanel;
    NSMutableArray *_currentMusicLyrics;
    double _currentLyricTotalTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowNewBGMPanel; // @synthesize shouldShowNewBGMPanel=_shouldShowNewBGMPanel;
@property(nonatomic) _Bool shouldRecoverLyricsWidget; // @synthesize shouldRecoverLyricsWidget=_shouldRecoverLyricsWidget;
@property(nonatomic) double currentLyricTotalTime; // @synthesize currentLyricTotalTime=_currentLyricTotalTime;
@property(retain, nonatomic) NSMutableArray *currentMusicLyrics; // @synthesize currentMusicLyrics=_currentMusicLyrics;
- (void)onTimeLineEditVideoViewControllerWillTransitionToSize;
- (double)videoScaleForHalfScreenHeight:(double)arg1;
- (struct CGSize)editVideoLayoutViewSize;
- (void)adjustPreviewFrameToFitBGMPanel:(double)arg1;
- (void)handleBGMSelectedViewController:(id)arg1 didChangeVisibleHeight:(double)arg2;
- (void)handleBGMSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2;
- (id)createBGMSelectedConfigWithPreferDuration:(unsigned long long)arg1;
- (id)createBGMPanelTabModels;
- (void)onBGMSelectedViewControllerInit;
- (_Bool)scrollViewDidZoom:(id)arg1;
- (void)_updateLyricsWidgetTime;
- (_Bool)isLyricOn;
- (void)updateLyricInfo:(id)arg1 totoalTimeInSeconds:(double)arg2;
- (void)setPlayerTimeControlStatusChangeBlock;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (unsigned long long)setBGMViewButtonOption;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(_Bool)arg2;
- (void)EditVideoBGMViewLyricOnOffStateChange:(_Bool)arg1;
- (void)_recoverLyricsWidget;
- (_Bool)recoverBGMViewForEditVideoAttr:(id)arg1;
- (void)initEditImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

