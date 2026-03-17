//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, UIView, UIViewController, WCFinderArbitraryPageView;

@protocol WCFinderArbitraryPageViewDataSource <NSObject>
- (NSString *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageTabNameForIdentifier:(NSObject *)arg2 index:(long long)arg3;

@optional
- (unsigned long long)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageTabUnreadCount:(NSObject *)arg2 forIndex:(long long)arg3;
- (double)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 bannerHeightForIndex:(long long)arg2;
- (UIView *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 bannerViewForIndex:(long long)arg2;
- (UIView *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageTabViewForIndex:(long long)arg2;
- (NSObject *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 uniqueObjectForPage:(long long)arg2;
- (UIViewController *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageViewController:(id)arg2 index:(long long)arg3;
- (UIView *)arbitraryTabView:(WCFinderArbitraryPageView *)arg1 pageViewForIdentifier:(id)arg2 index:(long long)arg3;
@end

