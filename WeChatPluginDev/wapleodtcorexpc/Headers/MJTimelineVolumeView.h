//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJPlaybackViewModel, MJPublisherButton, MJTimelineViewModel, MJTimelineVolumeSliderInfo, NSMutableArray;

@interface MJTimelineVolumeView : UIView
{
    float _originalMusicVolume;
    float _originalOSTVolume;
    float _originalNarrationVolume;
    MJTimelineViewModel *_timelineVM;
    MJPlaybackViewModel *_playbackVM;
    MJTimelineVolumeSliderInfo *_musicVolumeSliderInfo;
    MJTimelineVolumeSliderInfo *_OSTVolumeSliderInfo;
    MJTimelineVolumeSliderInfo *_narrationVolumeSliderInfo;
    NSMutableArray *_slidersInfo;
    MJPublisherButton *_autoVolumeAdjustmentSwitch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJPublisherButton *autoVolumeAdjustmentSwitch; // @synthesize autoVolumeAdjustmentSwitch=_autoVolumeAdjustmentSwitch;
@property(retain, nonatomic) NSMutableArray *slidersInfo; // @synthesize slidersInfo=_slidersInfo;
@property(retain, nonatomic) MJTimelineVolumeSliderInfo *narrationVolumeSliderInfo; // @synthesize narrationVolumeSliderInfo=_narrationVolumeSliderInfo;
@property(retain, nonatomic) MJTimelineVolumeSliderInfo *OSTVolumeSliderInfo; // @synthesize OSTVolumeSliderInfo=_OSTVolumeSliderInfo;
@property(retain, nonatomic) MJTimelineVolumeSliderInfo *musicVolumeSliderInfo; // @synthesize musicVolumeSliderInfo=_musicVolumeSliderInfo;
@property(nonatomic) float originalNarrationVolume; // @synthesize originalNarrationVolume=_originalNarrationVolume;
@property(nonatomic) float originalOSTVolume; // @synthesize originalOSTVolume=_originalOSTVolume;
@property(nonatomic) float originalMusicVolume; // @synthesize originalMusicVolume=_originalMusicVolume;
@property(readonly, nonatomic) MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(readonly, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
- (void)autoVolumeAdjustmentSwitchDidTouchUpInside:(id)arg1;
- (void)narrationVolumeSliderDidFinishChangeValue:(id)arg1;
- (void)narrationVolumeSliderValueChanged:(id)arg1;
- (void)OSTVolumeSliderDidFinishChangeValue:(id)arg1;
- (void)OSTVolumeSliderValueChanged:(id)arg1;
- (void)musicVolumeSliderDidFinishChangeValue:(id)arg1;
- (void)musicVolumeSliderValueChanged:(id)arg1;
- (_Bool)hasChanges;
- (void)bindViews;
- (void)layoutSliderWithInfo:(id)arg1 topOffset:(double)arg2;
- (void)layoutViews;
- (_Bool)setupNarrationVolumeSliderIfNeeded;
- (_Bool)setupOSTVolumeSliderIfNeeded;
- (_Bool)setupMusicVolumeSliderIfNeeded;
- (void)setupAutoVolumeAdjustmentSwitch;
- (void)setupViews;
- (void)dealloc;
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;

@end

