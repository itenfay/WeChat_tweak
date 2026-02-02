//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveReplayGreateTimeModel, MMFinderLiveReplayTask, MMFinderLiveTaskId, MMUIButton, MMUILabel, NSString, WCFinderLiveReplayPreviewDisplayView, WCPlayerView;
@protocol WCFinderLiveReplayPreviewDelegate;

@interface WCFinderLiveReplayPreviewContainer : UIView
{
    _Bool _isTimeHidden;
    _Bool _enterLittleStridePreview;
    double _currentTime;
    MMFinderLiveReplayGreateTimeModel *_currentGreateTimeModel;
    id <WCFinderLiveReplayPreviewDelegate> _previewDelegate;
    MMFinderLiveTaskId *_taskId;
    WCPlayerView *_previewPlayer;
    WCFinderLiveReplayPreviewDisplayView *_previewDisplayView;
    MMUIButton *_playButton;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_descLabel;
    double _totalTime;
    double _lastRecordTime;
    long long _timeDisplayFormat;
    double _previewWHPercent;
    double _seekStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) double seekStartTime; // @synthesize seekStartTime=_seekStartTime;
@property(nonatomic) _Bool enterLittleStridePreview; // @synthesize enterLittleStridePreview=_enterLittleStridePreview;
@property(nonatomic) _Bool isTimeHidden; // @synthesize isTimeHidden=_isTimeHidden;
@property(nonatomic) double previewWHPercent; // @synthesize previewWHPercent=_previewWHPercent;
@property(nonatomic) long long timeDisplayFormat; // @synthesize timeDisplayFormat=_timeDisplayFormat;
@property(nonatomic) double lastRecordTime; // @synthesize lastRecordTime=_lastRecordTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WCFinderLiveReplayPreviewDisplayView *previewDisplayView; // @synthesize previewDisplayView=_previewDisplayView;
@property(retain, nonatomic) WCPlayerView *previewPlayer; // @synthesize previewPlayer=_previewPlayer;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <WCFinderLiveReplayPreviewDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(retain, nonatomic) MMFinderLiveReplayGreateTimeModel *currentGreateTimeModel; // @synthesize currentGreateTimeModel=_currentGreateTimeModel;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void)onFetchAllPreviewPlayerDataChanged;
- (_Bool)onDisplaySizeChanged:(struct CGSize)arg1;
- (id)getNearestGreateTimeModelWithTime:(double)arg1;
- (void)onReplayPreviewResolutionInfoUpdated:(id)arg1 taskId:(id)arg2;
- (void)onReplayPreviewLowBitrateUrlUpdated:(id)arg1 resolutionChanged:(_Bool)arg2 taskId:(id)arg3;
- (void)onReplayPreviewThumbListAppended:(id)arg1 taskId:(id)arg2;
- (void)onPlayButtonClick;
- (void)scheduleAutoUpdatePreviewData;
- (_Bool)isDirectlyUsePlayerPreviewMode:(double)arg1;
- (long long)getCurrentAtOncePreviewByMode:(double)arg1;
- (long long)getCurrentNormalPreviewByMode:(double)arg1;
- (void)autoCheckCurrentTimeChange;
- (void)stopAutoCheckCurrentTimeChange;
- (void)startAutoCheckCurrentTimeChange;
- (void)inner_updateCurrentGreatTimeModel:(id)arg1;
- (void)inner_updateCurrentTime:(double)arg1;
- (void)inner_showWithCurrentTime:(double)arg1;
- (void)startPreview;
- (_Bool)hasPrepareForPreview;
- (void)onReplayVideoPrepareToPlay:(id)arg1;
- (void)prepareForLargeStridePreview;
- (void)prepareForLittleStridePreview;
- (void)resetToDefaultStridePreview;
- (_Bool)isShown;
- (void)hide;
- (void)updateGreateTimeModel:(id)arg1;
- (void)updateCurrentTime:(double)arg1;
- (void)showWithGreateTimeModel:(id)arg1;
- (void)showWithCurrentTime:(double)arg1;
- (_Bool)updatePreviewWHPercent:(double)arg1;
- (void)updatePlayButtonHidden:(_Bool)arg1;
- (void)updateTimeHidden:(_Bool)arg1;
- (void)updateTotalTime:(double)arg1;
@property(readonly, nonatomic) double preViewHeight;
@property(readonly, nonatomic) double preViewWidth;
@property(readonly, nonatomic) MMFinderLiveReplayTask *replayLiveTask;
@property(readonly, nonatomic) _Bool isTimeLabelHidden;
- (void)updateDescContent:(id)arg1;
- (void)updateSelfSize;
- (_Bool)updatePreviewDisplayViewSize;
- (void)updateTimeLabelsHidden;
- (void)updateTimeLabelSizeWithTotalTimeText:(id)arg1;
- (void)updateDescLabelOrigin;
- (void)layoutDescLabel;
- (void)updateCurrentTimeLabelOrigin;
- (void)layoutCurrentTimeLabel;
- (void)layoutPlayButton;
- (void)updatePreviewDisplayViewOrigin;
- (void)layoutPreviewDisplayView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

