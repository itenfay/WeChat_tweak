//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WeAppCustomTabbar;

@protocol WeAppCustomTabbarDelegate <NSObject>

@optional
- (_Bool)tabBar:(WeAppCustomTabbar *)arg1 didSelectIndex:(long long)arg2;
@end

