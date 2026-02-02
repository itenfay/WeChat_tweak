//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, WCFinderAuthInfoIconView, WCFinderFollowButton, WCFinderHeadImageView;

@interface WCFinderMJSetDesignerView
{
    UILabel *_topTitleLabel;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UILabel *_songDescLabel;
    WCFinderFollowButton *_followBtn;
}

+ (double)height;
+ (id)buildTitleTextView:(double)arg1;
+ (id)genTitleLabelWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFollowButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *songDescLabel; // @synthesize songDescLabel=_songDescLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
- (void)updateWithContactInfo:(id)arg1 originCount:(long long)arg2;
- (void)setupLayout;
- (void)setupSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

