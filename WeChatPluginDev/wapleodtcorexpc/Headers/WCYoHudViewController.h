//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel, UIView, WCYoAvatarView;

@interface WCYoHudViewController
{
    int _yoType;
    unsigned int _yoTime;
    UIView *_containerView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UILabel *_timeLabel;
    WCYoAvatarView *_avatarView;
    UIImageView *_checkedMaskView;
    UIButton *_replyButton;
    NSString *_username;
    unsigned long long _count;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int yoTime; // @synthesize yoTime=_yoTime;
@property(nonatomic) int yoType; // @synthesize yoType=_yoType;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) UIImageView *checkedMaskView; // @synthesize checkedMaskView=_checkedMaskView;
@property(retain, nonatomic) WCYoAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)refreshDescriptionTime;
- (void)addYoCount:(unsigned long long)arg1 forUsername:(id)arg2 type:(int)arg3;
- (void)didTapAvatarView:(id)arg1;
- (void)didTapReplyButton:(id)arg1;
- (void)doAvatarBounceAnimation;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 nameLabelString:(id)arg4 descriptionString:(id)arg5 timeString:(id)arg6 allowReply:(_Bool)arg7;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 nameLabelString:(id)arg4 descriptionString:(id)arg5 allowReply:(_Bool)arg6;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3;
- (void)changeUIWithYoType:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

@end

