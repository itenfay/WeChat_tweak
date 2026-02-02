//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderProfileOverviewSection;

@protocol WCFinderProfileOverviewSectionCountCangeExt <NSObject>

@optional
- (void)onProfileOverviewSection:(long long)arg1 sectionDidUpdate:(WCFinderProfileOverviewSection *)arg2;
- (void)onProfileOverviewSection:(long long)arg1 changedCount:(long long)arg2;
@end

