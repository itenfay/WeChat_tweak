//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EnterpriseSessionCellData, EnterpriseSessionCellLayoutParam, MMBadgeView, MMHeadImageView, UIImageView, UILabel, UIView;

@interface EnterpriseSessionItemView
{
    EnterpriseSessionCellData *_cellData;
    EnterpriseSessionCellLayoutParam *_layoutParam;
    UIView *_backgroudView;
    MMHeadImageView *_headView;
    MMBadgeView *_msgCountView;
    UIImageView *_statusView;
    UILabel *_nicknameLabel;
    UILabel *_msgLabel;
    UILabel *_alertLabel;
    UILabel *_timeLabel;
    UIImageView *_chatNotPushView;
    _Bool bAlertToRight;
    _Bool _isSubscribeBrandContact;
}

+ (double)cellHeight;
- (void).cxx_destruct;
- (void)onUpdateCellWithCellData:(id)arg1;
- (id)cellSessionDataLastMsg:(id)arg1;
- (void)updateBackgroundColorWithSessionCellData:(id)arg1;
- (void)updateChatNotPushWithSessionCellData:(id)arg1;
- (void)updateMoreMenuWithSessionCellData:(id)arg1;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (void)updateAlertLabelWithSessionCellData:(id)arg1;
- (void)updateStatusWithSessionCellData:(id)arg1;
- (void)updateUnReadCountWithSessionCellData:(id)arg1;
- (void)updateNameLabelWithSessionCellData:(id)arg1;
- (void)updateTimeLabelWithSessionCellData:(id)arg1;
- (void)updateHeadViewWithSessionCellData:(id)arg1;
- (double)rightBoundOfAlertLabelOrStatusImage;
- (double)rightBoundOfStatusImage;
- (void)setHeadCategory:(unsigned char)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateWithSessionCellData:(id)arg1;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithReuseIdentifier:(id)arg1;

@end

