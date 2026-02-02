//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, UILabel, UIView;

@interface WCMomentsUserTableViewCell
{
    CContact *_userContact;
    MMHeadImageView *_headerView;
    UILabel *_nicknameLabel;
    UIView *_separatorLine;
}

+ (double)heightForTableView:(id)arg1;
+ (id)defaultIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMHeadImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) CContact *userContact; // @synthesize userContact=_userContact;
- (void)layoutSubviews;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

