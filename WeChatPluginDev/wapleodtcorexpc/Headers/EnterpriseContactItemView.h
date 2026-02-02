//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEnterpriseContact, MMCPLabel, MMHeadImageView, UIButton, UILabel;
@protocol EnterpriseContactItemViewDelegate;

@interface EnterpriseContactItemView
{
    CEnterpriseContact *_contact;
    MMCPLabel *_nickNameLabel;
    MMHeadImageView *_headImage;
    UIButton *_rightButton;
    UILabel *_memberCountLabel;
    id <EnterpriseContactItemViewDelegate> delegate;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseContactItemViewDelegate> delegate; // @synthesize delegate;
- (void)onRightBtnClicked;
- (struct CGRect)calcRightButtonFrame:(id)arg1;
- (struct CGRect)calcMemberCountFrame:(id)arg1;
- (struct CGRect)calcNickNameFrame:(id)arg1;
- (void)initGreyRightButton:(id)arg1;
- (void)updateNickNameLabel;
- (void)updateHeadImageForContact:(id)arg1;
- (void)initMemberCountLabel:(id)arg1;
- (void)initNickNameLabel:(id)arg1;
- (void)initHeadImageForContact:(id)arg1;
- (void)updateView:(id)arg1;
- (void)initView:(id)arg1;
- (void)layoutSubviews;

@end

