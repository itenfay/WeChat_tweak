//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface ShakeTableViewCell
{
    UILabel *m_nickNameLabel;
    UILabel *m_personalRemarkLabel;
    UILabel *m_distanceLabel;
    UILabel *m_addedLabel;
    UIImageView *m_genderImageView;
    UIImageView *m_remarkBKImage;
    UIView *m_headerView;
}

- (void).cxx_destruct;
- (void)hideSubViews;
- (void)updateWithLbsContactInfo:(id)arg1 withHeaderView:(id)arg2;
- (void)initSubviews;
- (_Bool)isInMyContactList:(id)arg1;

@end

