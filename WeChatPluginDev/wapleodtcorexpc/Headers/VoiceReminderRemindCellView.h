//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, VoiceReminderRemindViewModel;

@interface VoiceReminderRemindCellView
{
    UIButton *m_playButton;
    long long m_playCount;
    _Bool m_playing;
}

- (void).cxx_destruct;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)downloadAppData;
- (void)stopPlayVoice;
- (void)startPlayVoice;
- (void)onPlayButtonClicked:(id)arg1;
- (void)initView;
- (void)layoutContentView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) VoiceReminderRemindViewModel *viewModel; // @dynamic viewModel;

@end

