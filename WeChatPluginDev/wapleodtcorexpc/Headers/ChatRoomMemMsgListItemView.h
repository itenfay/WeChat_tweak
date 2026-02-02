//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMHeadImageView, MainFrameCellData, UILabel;

@interface ChatRoomMemMsgListItemView
{
    MainFrameCellData *m_cellData;
    MMHeadImageView *m_frameHeadView;
    MMCPLabel *m_nameLabel;
    UILabel *m_timeLabel;
    UILabel *m_greenLabel;
    MMCPLabel *m_messageLabel;
}

- (void).cxx_destruct;
- (void)updateView:(id)arg1;
- (void)updateTimeLabel;
- (void)updateNameLabel;
- (void)updateMessageLabel;
- (void)initSubview;
- (id)init;

@end

