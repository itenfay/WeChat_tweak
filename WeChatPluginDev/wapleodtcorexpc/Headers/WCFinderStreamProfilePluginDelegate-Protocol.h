//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderCGIProfile, WCFinderStreamProfilePluginBase;

@protocol WCFinderStreamProfilePluginDelegate <NSObject>
- (void)onPlugin:(WCFinderStreamProfilePluginBase *)arg1 cgiLoadFinish:(_Bool)arg2 cgiProfile:(WCFinderCGIProfile *)arg3;
- (void)onPlugin:(WCFinderStreamProfilePluginBase *)arg1 updateOverview:(long long)arg2 necessary:(_Bool)arg3 update:(void (^)(WCFinderProfileOverviewSection *))arg4;
@end

