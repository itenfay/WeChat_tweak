//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppRegisterInfo, MMWebImageView, UILabel, UISwitch;
@protocol ShareTo3rdAppManageCellDelegate;

@interface ShareTo3rdAppManageCell
{
    MMWebImageView *_iconImageView;
    UILabel *_nameLabel;
    UISwitch *_switchView;
    AppRegisterInfo *m_appInfo;
    id <ShareTo3rdAppManageCellDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ShareTo3rdAppManageCellDelegate> m_delegate; // @synthesize m_delegate;
- (void)actionSwitchValueChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withAppInfo:(id)arg2;

@end

