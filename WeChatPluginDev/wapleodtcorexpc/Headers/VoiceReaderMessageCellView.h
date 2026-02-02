//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIView, VoiceReaderMessageViewModel, WCBrandAudioPlayView;

@interface VoiceReaderMessageCellView
{
    UIView *m_titleTimeView;
    WCBrandAudioPlayView *m_playingImageView;
    NSMutableArray *_voiceOverElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceOverElements; // @synthesize voiceOverElements=_voiceOverElements;
- (id)getSuperViewAccessibilityLabel;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (void)updateVoiceOverElements;
- (void)initVoiceOverElements;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewForTitleAndTimeLabel;
- (void)initPlayingImageView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VoiceReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

