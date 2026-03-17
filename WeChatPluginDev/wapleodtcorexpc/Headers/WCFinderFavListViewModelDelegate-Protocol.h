//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFavFeedListPageViewModel, WCFinderFavListViewModel;

@protocol WCFinderFavListViewModelDelegate <NSObject>
- (void)favListViewModelTopicListChanged:(WCFinderFavListViewModel *)arg1;
- (void)favListViewModel:(WCFinderFavListViewModel *)arg1 selectedPageVMChanged:(WCFinderFavFeedListPageViewModel *)arg2;
@end

