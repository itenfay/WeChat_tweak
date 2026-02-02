//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMBadgeView, MMTabbarItem, MMWebImageView, NSString, UILabel;

@interface MMTabBarItemView : UIView
{
    _Bool _isSelected;
    MMTabbarItem *_item;
    long long _unreadCount;
    NSString *_badgeString;
    MMWebImageView *_imageView;
    UILabel *_textLabel;
    MMBadgeView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *badgeString; // @synthesize badgeString=_badgeString;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMTabbarItem *item; // @synthesize item=_item;
- (void)preloadURLImages;
- (void)reloadIconImage;
- (_Bool)isSelectedState;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (double)getBadgeViewRightMarginPortrait;
- (void)layoutBadgeView;
- (void)layoutIcon;
- (void)relayoutIconAndBadge;
- (void)setupUI;
- (void)removeSmallRedDot;
- (void)showSmallRedDot;
- (void)setTabBarBadgeString:(id)arg1;
- (void)setTabBarBadgeValue:(long long)arg1;
- (void)setBadgeViewHidden:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithItem:(id)arg1 frame:(struct CGRect)arg2;

@end

