//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiTalkHDHeadView, UILabel, UIView, ilinkConfSDKMember;

@interface ilinkMultiTalkMsgCell
{
    MultiTalkHDHeadView *_headImageView;
    UILabel *_userNameLable;
    UILabel *_descLabel;
    ilinkConfSDKMember *_member;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) ilinkConfSDKMember *member; // @synthesize member=_member;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *userNameLable; // @synthesize userNameLable=_userNameLable;
@property(retain, nonatomic) MultiTalkHDHeadView *headImageView; // @synthesize headImageView=_headImageView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateContentWithMsgContact:(id)arg1;

@end

