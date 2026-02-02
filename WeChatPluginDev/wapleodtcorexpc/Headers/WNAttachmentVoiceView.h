//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UILabel, UIView;

@interface WNAttachmentVoiceView
{
    UILabel *_titleLabel;
    UILabel *_totalTimeLabel;
    MMUIButton *_controlBtn;
    int _viewType;
    UIView *_recordingPoint;
    UIView *_progressIndicator;
    UIView *_progressBackView;
    UIView *_progressFrontView;
    _Bool _userDragging;
    double _titleWidth;
    unsigned int _timems;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int timems; // @synthesize timems=_timems;
- (id)getSubViewAccessibilityRecursive;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnEndPlayWNAudio:(id)arg1;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (id)getDuration:(int)arg1;
- (void)onClickControlBtn;
- (void)showPlayingView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)showRecordingView;
- (void)showNormalView;
- (void)setProgressIndicatorCenterX:(double)arg1;
- (void)onIndicatorPan:(id)arg1;
- (void)onClickObject;
- (void)layoutView;
- (void)setUnSelected;
- (void)setSelected;
- (_Bool)ifLayoutViewByBase;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

