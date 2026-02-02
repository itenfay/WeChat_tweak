//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView;

@interface WCFinderMentionUserContactTableViewCell
{
    WCFinderHeadImageView *_avatarImageView;
    AttributeLabel *_nickNameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    AttributeLabel *_authInfoLabel;
    UIView *_separatorLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) AttributeLabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) AttributeLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(_Bool)arg2;
- (void)prepareForReuse;
- (void)initSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

