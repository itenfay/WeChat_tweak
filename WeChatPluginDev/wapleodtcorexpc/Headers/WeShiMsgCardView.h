//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUILabel, MMWebImageView, NSArray, RichTextView, UIImageView;
@protocol WeiShiMsgCardMenuDelegate;

@interface WeShiMsgCardView
{
    MMWebImageView *_coverView;
    RichTextView *_titleView;
    UIImageView *_playIcon;
    MMUILabel *_videoLengthLabel;
    CAGradientLayer *_gradientLayer;
    unsigned int _itemIndex;
    NSArray *_menuItems;
    id <WeiShiMsgCardMenuDelegate> _menuDelegage;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WeiShiMsgCardMenuDelegate> menuDelegage; // @synthesize menuDelegage=_menuDelegage;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
- (void)showMenu:(id)arg1;
- (void)layoutSubviews;
- (void)onMore:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrameAndData:(struct CGRect)arg1 content:(id)arg2 coverUrl:(id)arg3 timeText:(id)arg4;

@end

