//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderProfileOverviewPageModel, WCFinderProfileOverviewSection;

@protocol WCFinderProfileOverviewPageModelDelegate <NSObject>
- (void)onOverviewpageMoreFeedFeedChanged:(WCFinderProfileOverviewPageModel *)arg1;
- (void)onOverviewpageMoreFeedTopPullFinish:(WCFinderProfileOverviewPageModel *)arg1;
- (void)onOverviewpageSectionElementCountChanged:(long long)arg1;
- (void)onOverviewpage:(WCFinderProfileOverviewPageModel *)arg1 sectionDidUpdate:(WCFinderProfileOverviewSection *)arg2;
- (void)onOverviewpageSectionsChanged:(WCFinderProfileOverviewPageModel *)arg1 forPageLoadFinish:(_Bool)arg2;
- (void)onOverviewpageFetchStateChanged:(WCFinderProfileOverviewPageModel *)arg1;
@end

