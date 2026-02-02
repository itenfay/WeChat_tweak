//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FakeHeadImageView, FakeMainFrameCellData, MMCPLabel, UILabel;

@interface FakeMainFrameItemView
{
    FakeHeadImageView *m_frameHeadView;
    MMCPLabel *m_nameLabel;
    UILabel *m_timeLabel;
    MMCPLabel *m_messageLabel;
    FakeMainFrameCellData *m_cellData;
}

- (void).cxx_destruct;
- (id)getLabelNameColor;
- (void)updateNameLabel;
- (void)updateTimeLabel;
- (void)updateMessageLabel;
- (void)updateHeadView;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)initWithCellData:(id)arg1 frame:(struct CGRect)arg2;

@end

