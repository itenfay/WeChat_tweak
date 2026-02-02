//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString, UIButton, UIImageView, UILabel, UIView, VoiceReminderConfirmViewModel;

@interface VoiceReminderConfirmCellView
{
    int m_playCount;
    _Bool m_playing;
    _Bool m_deleting;
    UIImageView *m_bgImageView;
    UIImageView *m_remindStatusImageView;
    UIImageView *m_bodyBkgImageView;
    UILabel *m_dateLabel;
    UILabel *m_timeLabel;
    UILabel *m_timeDescLabel;
    UILabel *m_descLabel;
    UIButton *m_playButton;
    UIButton *m_cancelButton;
    MMUIActivityIndicatorView *m_spinner;
    UIView *m_maskView;
    UIView *m_separatorView;
}

- (void).cxx_destruct;
- (void)onSettingExtChanged:(long long)arg1;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)onDeleteRemindMsgsReturn:(_Bool)arg1 msgWrap:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)downloadAppData;
- (void)cancelRemindMsg:(id)arg1;
- (void)becomeRemindStatus;
- (id)getRemindBackgroundImage:(id)arg1;
- (void)stopPlayVoice;
- (void)startPlayVoice;
- (void)onPlayButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)initView;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VoiceReminderConfirmViewModel *viewModel; // @dynamic viewModel;

@end

