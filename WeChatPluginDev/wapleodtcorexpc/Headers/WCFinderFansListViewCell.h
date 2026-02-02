//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView, WCFinderHeadImageView, WCFinderUserRelationshipTagLabel;

@interface WCFinderFansListViewCell
{
    UILabel *_nickName;
    WCFinderHeadImageView *_headImageView;
    UIView *_separator;
    UIImageView *_iconView;
    WCFinderUserRelationshipTagLabel *_userTagLabel;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUserRelationshipTagLabel *userTagLabel; // @synthesize userTagLabel=_userTagLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
- (void)layoutSubviews;
- (void)setupDeleteMenu;
- (void)setupRevertMenu;
- (void)showSeparator:(_Bool)arg1;
- (void)updateUserTagWithContact:(id)arg1;
- (void)updateWithContact:(id)arg1;
- (void)prepareForReuse;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

