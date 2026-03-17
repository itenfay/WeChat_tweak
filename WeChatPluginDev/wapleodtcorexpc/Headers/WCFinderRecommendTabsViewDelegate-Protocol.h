//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderRecommendTabsViewDelegate <NSObject>
- (void)onTabButtonCleanLeftIcon:(long long)arg1;
- (void)onTabsViewDoubleClickTabIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)onTabsViewSingleClickTabIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (_Bool)timelineScrollViewIsScrolling;
@end

