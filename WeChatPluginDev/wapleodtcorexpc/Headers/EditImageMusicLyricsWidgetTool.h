//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIImageView, UITextView, WCStoryLyricWaveView;

@interface EditImageMusicLyricsWidgetTool
{
    _Bool _dragToDelete;
    UIImageView *_imageView;
    WCStoryLyricWaveView *_waveView;
    NSMutableArray *_lyrics;
    UITextView *_snapShotTextView;
    CDUnknownBlockType _didDeletedBlock;
    CDUnknownBlockType _didDoubleTapBlock;
    double _lyricTotalTime;
    struct CGPoint _initialOrigin;
    CDStruct_e83c9415 _videoCropTimeRange;
}

+ (id)generateWidgetFromState:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 videoCropTimeRange; // @synthesize videoCropTimeRange=_videoCropTimeRange;
@property(nonatomic) double lyricTotalTime; // @synthesize lyricTotalTime=_lyricTotalTime;
@property(copy, nonatomic) CDUnknownBlockType didDoubleTapBlock; // @synthesize didDoubleTapBlock=_didDoubleTapBlock;
@property(copy, nonatomic) CDUnknownBlockType didDeletedBlock; // @synthesize didDeletedBlock=_didDeletedBlock;
@property(nonatomic, getter=isDragToDelete) _Bool dragToDelete; // @synthesize dragToDelete=_dragToDelete;
@property(retain, nonatomic) UITextView *snapShotTextView; // @synthesize snapShotTextView=_snapShotTextView;
@property(retain, nonatomic) NSMutableArray *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) __weak WCStoryLyricWaveView *waveView; // @synthesize waveView=_waveView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGPoint initialOrigin; // @synthesize initialOrigin=_initialOrigin;
- (id)exportAnimatedLayer;
- (void)resetToInitialState;
- (id)exportWidgetStateForEditorFrame:(struct CGRect)arg1 assetPreviewFrame:(struct CGRect)arg2;
- (void)_freezeAtPlayingTime:(double)arg1;
- (void)resetWidget;
- (void)seekWidgetToTimeSec:(double)arg1;
- (void)reviveWidget;
- (void)freezeWidget;
- (void)onWidgitDeleted;
- (void)handlePinchGesture:(id)arg1;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (_Bool)startEditingText;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (id)genLyricImageWithLyric:(id)arg1;
- (id)genLyricAnimationForScene:(unsigned long long)arg1;
- (id)splitLyrics:(id)arg1;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (void)updateMusicLyricsCropTime:(CDStruct_e83c9415)arg1;
- (void)setup;

@end

