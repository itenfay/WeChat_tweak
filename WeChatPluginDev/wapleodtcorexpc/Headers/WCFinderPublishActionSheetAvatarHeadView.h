//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UILabel, UIView, WCFinderContact, WCFinderHeadImageView;

@interface WCFinderPublishActionSheetAvatarHeadView
{
    UILabel *_headTips;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UIView *_contactContainerView;
    WCFinderContact *_contact;
    MMUIButton *_brandLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIButton *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak UIView *contactContainerView; // @synthesize contactContainerView=_contactContainerView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *headTips; // @synthesize headTips=_headTips;
- (id)initWithFrame:(struct CGRect)arg1;

@end

