//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class AttributeLabel, FavAttributeCPLabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderSearchInfo;

@interface WCFinderMentionSearchContactTableViewCell : UITableViewCell
{
    WCFinderHeadImageView *_avatarImageView;
    FavAttributeCPLabel *_nickNameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    AttributeLabel *_authInfoLabel;
    UIView *_separatorLine;
    WCFinderSearchInfo *_searchInfo;
}

+ (double)cellHeightWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) AttributeLabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) FavAttributeCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)getAttributeText:(id)arg1;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(_Bool)arg2 shouldHideFollow:(_Bool)arg3;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

