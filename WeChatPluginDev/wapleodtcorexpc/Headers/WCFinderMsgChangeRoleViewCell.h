//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, WCFinderHeadImageView, WCFinderMsgChangeRoleViewItem;

@interface WCFinderMsgChangeRoleViewCell : UITableViewCell
{
    WCFinderMsgChangeRoleViewItem *_item;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_titleLabel;
    UIImageView *_selectedView;
    UIView *_addIconView;
    UIImageView *_addIconImageView;
    UILabel *_usernameLabel;
    UIView *_lineView;
    UILabel *_globalSelectedLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *globalSelectedLabel; // @synthesize globalSelectedLabel=_globalSelectedLabel;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UIImageView *addIconImageView; // @synthesize addIconImageView=_addIconImageView;
@property(retain, nonatomic) UIView *addIconView; // @synthesize addIconView=_addIconView;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderMsgChangeRoleViewItem *item; // @synthesize item=_item;
- (void)layoutSubviews;
- (void)update:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)hideLiveView:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

