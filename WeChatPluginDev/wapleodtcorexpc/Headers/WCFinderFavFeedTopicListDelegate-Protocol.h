//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderFavFeedListPageViewModel;

@protocol WCFinderFavFeedTopicListDelegate <NSObject>
- (void)onFavTagPageFeedBecomeEmpty:(WCFinderFavFeedListPageViewModel *)arg1;
- (void)onFetchFavTagListUpdate:(NSArray *)arg1;
@end

