//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJPageView, MJPageViewTitleItem, UIViewController;

@protocol MJPageViewDataSource <NSObject>
- (MJPageViewTitleItem *)pageView:(MJPageView *)arg1 titleItemAtIndex:(long long)arg2;
- (UIViewController *)pageView:(MJPageView *)arg1 contentItemAtIndex:(long long)arg2;
- (long long)numberOfPagesInPageView:(MJPageView *)arg1;
@end

