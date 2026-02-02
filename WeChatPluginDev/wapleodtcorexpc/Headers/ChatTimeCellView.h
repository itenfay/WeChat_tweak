//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatTimeViewModel, MMTimer, MMUIButton, UIImageView, UILabel;

@interface ChatTimeCellView
{
    MMTimer *m_updateTimeLabelTimer;
    UILabel *m_timeLabel;
    MMUIButton *m_rightButton;
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (void)handleRightButtonClicked:(id)arg1;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)layoutInternal;
- (_Bool)shouldLayoutIfNeeded;
- (_Bool)canBeReused;
- (id)getRightButton;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) ChatTimeViewModel *viewModel; // @dynamic viewModel;

@end

