//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class NSString, UIButton, UILabel, UISlider, UIView;
@protocol TAVPlayerControlPanelDelegate;

@interface TAVPlayerControlPanel : UIControl
{
    _Bool _dragging;
    _Bool _playing;
    id <TAVPlayerControlPanelDelegate> _delegate;
    UIView *_backgroundView;
    UILabel *_progressLabel;
    UILabel *_durationLabel;
    UISlider *_progressSlider;
    UIButton *_playButton;
    unsigned long long _timeStyle;
    CDStruct_1b6d18a9 _progress;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeStyle; // @synthesize timeStyle=_timeStyle;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UISlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_1b6d18a9 progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <TAVPlayerControlPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTimeStyle;
- (id)playbackFormatter:(double)arg1;
- (id)imageWithName:(id)arg1;
- (void)handleTapRecognizer:(id)arg1;
- (void)playAction;
- (void)didEndDragging;
- (void)didChangeTime:(id)arg1;
- (void)didStartDragging;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double speed;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly) Class superclass;

@end

