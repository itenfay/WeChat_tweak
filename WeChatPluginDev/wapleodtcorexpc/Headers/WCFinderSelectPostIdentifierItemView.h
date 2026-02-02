//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, WCFinderHeadImageView, WCFinderSelectPostIdentifierItem;

@interface WCFinderSelectPostIdentifierItemView : UITableViewCell
{
    _Bool _showDisable;
    WCFinderSelectPostIdentifierItem *_item;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_titleLabel;
    UIImageView *_selectedView;
    UIView *_addIconView;
    UIImageView *_addIconImageView;
    UILabel *_checkLabel;
    UILabel *_usernameLabel;
    UIView *_mentionView;
    UILabel *_mentionLabel;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *mentionLabel; // @synthesize mentionLabel=_mentionLabel;
@property(nonatomic) __weak UIView *mentionView; // @synthesize mentionView=_mentionView;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(nonatomic) _Bool showDisable; // @synthesize showDisable=_showDisable;
@property(retain, nonatomic) UILabel *checkLabel; // @synthesize checkLabel=_checkLabel;
@property(retain, nonatomic) UIImageView *addIconImageView; // @synthesize addIconImageView=_addIconImageView;
@property(retain, nonatomic) UIView *addIconView; // @synthesize addIconView=_addIconView;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderSelectPostIdentifierItem *item; // @synthesize item=_item;
- (void)layoutSubviews;
- (void)update:(id)arg1;
- (void)updateMentionCount:(unsigned long long)arg1 showNormalRedDot:(_Bool)arg2;
- (_Bool)reloadMentionCountWithUsername:(id)arg1;
- (void)prepareForReuse;
- (void)hideLiveView:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

