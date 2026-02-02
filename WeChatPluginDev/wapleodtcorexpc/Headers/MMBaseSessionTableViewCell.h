//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, MMBaseSessionCellData, MMCPLabel, MMHeadImageView, NSString, SessionCellLayoutParam, UIImageView, UILabel, UIView;
@protocol MMBaseSessionCellDelegate;

@interface MMBaseSessionTableViewCell
{
    UILabel *m_msgLabel;
    MMBaseSessionCellData *m_cellData;
    SessionCellLayoutParam *m_layoutParam;
    UIView *m_backgroudView;
    MMHeadImageView *m_headView;
    MMBadgeView *m_msgCountView;
    UIImageView *m_statusView;
    UIImageView *m_originalIconView;
    UILabel *m_nicknameLabel;
    UIView *m_nicknameTailView;
    UILabel *m_alertLabel;
    UILabel *m_timeLabel;
    UIImageView *m_chatNotPushView;
    UIImageView *m_blockMessageView;
    UILabel *m_fromBusinessLabel;
    MMCPLabel *m_descPostfix;
    UIImageView *m_starView;
    UIImageView *m_namePostIconView;
    struct CGSize _blockMessageIconSize;
    _Bool _isSubscribeBrandContact;
    _Bool _isBrandServiceContact;
    id <MMBaseSessionCellDelegate> _delegate;
}

+ (double)cellHeightForLayoutParam:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMBaseSessionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)GetNickNameTailView;
- (id)accessibilityLabel;
- (void)onUpdateCellWithCellData:(id)arg1;
- (void)onMultiMenuAppear;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (void)initSubView;
- (double)rightBoundOfAlertLabelOrStatusImage;
- (double)rightBoundOfStatusImage;
- (void)updateStarMarkWithSessionCellData:(id)arg1;
- (void)updateFromBusinessLabelWithSessionCellData:(id)arg1;
- (void)updateBlockMessageWithSessionCellData:(id)arg1;
- (void)updateChatNotPushWithSessionCellData:(id)arg1;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (void)updateOriginalIconWithSessionCellData:(id)arg1;
- (void)updateStatusWithSessionCellData:(id)arg1;
- (void)updateAlertLabelWithSessionCellData:(id)arg1;
- (void)updateUnReadCountWithSessionCellData:(id)arg1;
- (void)updateNamePostIconViewWithSessionCellData:(id)arg1;
- (void)updateNameLabelWithSessionCellData:(id)arg1;
- (void)updateTimeLabelWithSessionCellData:(id)arg1;
- (void)updateHeadViewWithSessionCellData:(id)arg1;
- (void)layoutSubviews;
- (void)resetNormalHeadImage;
- (void)useRoundCornorHeadImage;
- (void)useRoundHeadImage;
- (void)setHeadCategory:(unsigned char)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateWithSessionCellData:(id)arg1;
- (void)dealloc;
- (id)initWithLayoutParam:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

