//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, WCFinderHeadImageView;

@interface WCFinderAccountSelectedInWXTableViewCell : UITableViewCell
{
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_titleLabel;
    UILabel *_fansLabel;
    UIImageView *_selectedView;
    UIView *_addIconView;
    UIImageView *_addIconImageView;
    UIView *_selectBGView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectBGView; // @synthesize selectBGView=_selectBGView;
@property(retain, nonatomic) UIImageView *addIconImageView; // @synthesize addIconImageView=_addIconImageView;
@property(retain, nonatomic) UIView *addIconView; // @synthesize addIconView=_addIconView;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateWithContact:(id)arg1 fansCount:(unsigned long long)arg2 isSelected:(_Bool)arg3;
- (void)prepareForReuse;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

