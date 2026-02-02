//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, NSMutableArray, UILabel, UIView, WCAdURLImageView, WCCanvasComponentSocialInfo, WCCanvasSocialComponentFriendAvatarView;

@interface WCCanvasSocialComponent
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_avatarView;
    WCAdURLImageView *_backgroundImage;
    MMHeadImageView *_selfHeadImage;
    WCAdURLImageView *_avatarBackgroundImg;
    UILabel *_avatarDescLabel;
    WCCanvasSocialComponentFriendAvatarView *_friendAvatarView;
    UILabel *_friendAvatarDescLabel;
    WCCanvasComponentSocialInfo *_socialInfo;
    NSMutableArray *_friendUsernames;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *friendUsernames; // @synthesize friendUsernames=_friendUsernames;
@property(retain, nonatomic) WCCanvasComponentSocialInfo *socialInfo; // @synthesize socialInfo=_socialInfo;
@property(retain, nonatomic) UILabel *friendAvatarDescLabel; // @synthesize friendAvatarDescLabel=_friendAvatarDescLabel;
@property(retain, nonatomic) WCCanvasSocialComponentFriendAvatarView *friendAvatarView; // @synthesize friendAvatarView=_friendAvatarView;
@property(retain, nonatomic) UILabel *avatarDescLabel; // @synthesize avatarDescLabel=_avatarDescLabel;
@property(retain, nonatomic) WCAdURLImageView *avatarBackgroundImg; // @synthesize avatarBackgroundImg=_avatarBackgroundImg;
@property(retain, nonatomic) MMHeadImageView *selfHeadImage; // @synthesize selfHeadImage=_selfHeadImage;
@property(retain, nonatomic) WCAdURLImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)isFriendCard;
- (void)reportForUIType;
- (void)updateSizeForLabel:(id)arg1;
- (void)updateFriendAvatarDesc;
- (void)updateTitleLabelWithPrefix:(id)arg1 infix:(id)arg2 suffix:(id)arg3;
- (id)generateLabelWithFont:(id)arg1 textColor:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)updateViews;
- (void)parseFriendUsernames;
- (void)parseDynamicInfo;
- (void)initViews;
- (void)layoutSubviews;

@end

