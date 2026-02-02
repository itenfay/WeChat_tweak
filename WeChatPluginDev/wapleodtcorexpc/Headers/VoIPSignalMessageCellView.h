//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, VoIPSignalMessageViewModel;

@interface VoIPSignalMessageCellView
{
    UIView *m_unreadImageView;
}

- (void).cxx_destruct;
- (void)startVideoVoip;
- (void)tapVoipNodeView;
- (void)startVoiceVoip;
- (void)tapVoiceVoipNodeView;
- (void)onClicked;
- (void)onTouchUpInside;
- (void)updateStatus;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) VoIPSignalMessageViewModel *viewModel; // @dynamic viewModel;

@end

