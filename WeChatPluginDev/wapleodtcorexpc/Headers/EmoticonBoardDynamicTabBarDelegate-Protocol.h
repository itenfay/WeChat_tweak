//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonTabItem;

@protocol EmoticonBoardDynamicTabBarDelegate <NSObject>

@optional
- (void)onEmoticonBoardDynamicTabBarWillBeginDragging;
- (void)onEmoticonBoardDynamicTabBarClickFloatingFoldButton;
- (void)onEmoticonBoardDynamicTabBarClickSearchItem;
- (void)onEmoticonBoardDynamicTabBarClickStorePlusItem;
- (void)onEmoticonBoardDynamicTabBarClickSettingItem;
- (void)onEmoticonBoardDynamicTabBarTabBarClickItem:(EmoticonTabItem *)arg1 atIndex:(long long)arg2;
@end

