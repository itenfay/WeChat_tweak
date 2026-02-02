//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJCaptionErrorTipLabel, MJMuteLabel, MJNarrationSegmentViewModel, MJVoiceLabel;

@interface MJNarrationSegmentCell
{
    MJNarrationSegmentViewModel *_narrationSegmentVM;
    MJVoiceLabel *_recognizingTipLabel;
    MJCaptionErrorTipLabel *_sttErrorTipLabel;
    MJCaptionErrorTipLabel *_stsErrorTipLabel;
    MJVoiceLabel *_voiceLabel;
    MJMuteLabel *_muteLabel;
    map_247f78e2 _labelsByCaptionItem;
    struct CGRect _currentBounds;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect currentBounds; // @synthesize currentBounds=_currentBounds;
@property(retain, nonatomic) MJMuteLabel *muteLabel; // @synthesize muteLabel=_muteLabel;
@property(retain, nonatomic) MJVoiceLabel *voiceLabel; // @synthesize voiceLabel=_voiceLabel;
@property(retain, nonatomic) MJCaptionErrorTipLabel *stsErrorTipLabel; // @synthesize stsErrorTipLabel=_stsErrorTipLabel;
@property(retain, nonatomic) MJCaptionErrorTipLabel *sttErrorTipLabel; // @synthesize sttErrorTipLabel=_sttErrorTipLabel;
@property(retain, nonatomic) MJVoiceLabel *recognizingTipLabel; // @synthesize recognizingTipLabel=_recognizingTipLabel;
@property(nonatomic) map_247f78e2 labelsByCaptionItem; // @synthesize labelsByCaptionItem=_labelsByCaptionItem;
@property(retain, nonatomic) MJNarrationSegmentViewModel *narrationSegmentVM; // @synthesize narrationSegmentVM=_narrationSegmentVM;
- (_Bool)checkViewModel;
- (void)syncWithMutation;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutCaptionLabels;
- (void)layoutRecognitionTipLabel;
- (void)layoutSTSErrorTipLabelIfNeeded;
- (void)layoutSTSErrorTipLabel;
- (void)layoutSTTErrorTipLabel;
- (void)layoutCaptionLabel:(id)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)updateMuteLabel;
- (void)updateVoiceLabel;
- (void)hideCaptionLabelsAnimated:(_Bool)arg1;
- (void)showCaptionLabelsAnimated:(_Bool)arg1;
- (void)setupCaptionLabels;
- (id)captionLabelWithText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

