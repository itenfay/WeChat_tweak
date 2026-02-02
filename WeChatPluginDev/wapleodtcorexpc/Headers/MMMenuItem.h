//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIMenuItem.h>

@class NSString, UIColor, UIFont, UIImage;
@protocol MMMenuItemProtocol;

@interface MMMenuItem : UIMenuItem
{
    UIColor *_titleColor;
    NSString *_subtitle;
    UIColor *_subtitleColor;
    UIImage *_iconImage;
    id _target;
    long long _menuType;
    id _userInfo;
    NSString *_accessibilityLabel;
    CDUnknownBlockType _itemViewCreateHandler;
    UIFont *_font;
    double _topPadding;
    double _bottomPadding;
    long long _linePosition;
    id <MMMenuItemProtocol> _delegate;
    CDUnknownBlockType _menuItemAnimator;
    struct CGRect _itemFrame;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType menuItemAnimator; // @synthesize menuItemAnimator=_menuItemAnimator;
@property(nonatomic) __weak id <MMMenuItemProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long linePosition; // @synthesize linePosition=_linePosition;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) struct CGRect itemFrame; // @synthesize itemFrame=_itemFrame;
@property(copy, nonatomic) CDUnknownBlockType itemViewCreateHandler; // @synthesize itemViewCreateHandler=_itemViewCreateHandler;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long menuType; // @synthesize menuType=_menuType;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (id)initWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 action:(SEL)arg2;
- (id)initWithTitle:(id)arg1 svgName:(id)arg2;
- (id)initWithTitle:(id)arg1 svgName:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 svgName:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 action:(SEL)arg3;
- (struct CGSize)itemSizeWithWidth:(double)arg1;

@end

