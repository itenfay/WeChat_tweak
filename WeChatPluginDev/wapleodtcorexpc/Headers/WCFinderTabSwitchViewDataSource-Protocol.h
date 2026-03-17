//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString, UIView, WCFinderTabSwitchView;

@protocol WCFinderTabSwitchViewDataSource <NSObject>
- (long long)numberOfTabSwitchView:(WCFinderTabSwitchView *)arg1;

@optional
- (unsigned long long)tabSwitchView:(WCFinderTabSwitchView *)arg1 unreadCountForTabAtIndex:(long long)arg2;
- (NSDictionary *)tabSwitchView:(WCFinderTabSwitchView *)arg1 sdkLogReportForIndex:(long long)arg2;
- (UIView *)tabSwitchView:(WCFinderTabSwitchView *)arg1 customTabViewAtIndex:(long long)arg2;
- (NSString *)tabSwitchView:(WCFinderTabSwitchView *)arg1 titleForTabAtIndex:(long long)arg2;
- (NSObject *)tabSwitchView:(WCFinderTabSwitchView *)arg1 uniqueObjectForIndex:(unsigned long long)arg2;
@end

