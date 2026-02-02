//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderCGIProfile, WCFinderProfileOverviewSection, WCFinderStreamProfilePageModel;

@protocol WCFinderStreamProfilePageModelTabDelegate <NSObject>
- (WCFinderProfileOverviewSection *)queryOverviewSectionWithType:(long long)arg1;
- (void)onPageModel:(WCFinderStreamProfilePageModel *)arg1 updateOverview:(long long)arg2 necessary:(_Bool)arg3 update:(void (^)(WCFinderProfileOverviewSection *))arg4;
- (void)onPageModel:(WCFinderStreamProfilePageModel *)arg1 waitOtherPage:(Class)arg2 complete:(void (^)(WCFinderStreamProfilePageModel *))arg3;
- (void)onPageModel:(WCFinderStreamProfilePageModel *)arg1 waitContactLoad:(void (^)(WCFinderContact *))arg2;
- (void)onPageModelDisplayTabChanged:(WCFinderStreamProfilePageModel *)arg1;
- (void)onPageModel:(WCFinderStreamProfilePageModel *)arg1 firstCGIFinish:(_Bool)arg2 cgiProfile:(WCFinderCGIProfile *)arg3;
@end

