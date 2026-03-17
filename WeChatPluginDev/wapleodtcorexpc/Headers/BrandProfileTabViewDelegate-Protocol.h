//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandProfileTabView, MyProfileTabItemInfo, UIButton;

@protocol BrandProfileTabViewDelegate <NSObject>
- (void)onTabButtonCreated:(UIButton *)arg1 itemInfo:(MyProfileTabItemInfo *)arg2;
- (void)tabView:(BrandProfileTabView *)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 selectType:(unsigned long long)arg4;
@end

