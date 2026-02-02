//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderGlobalFavFlowPageViewModel, WCFinderGlobalFavFlowViewModel;

@protocol WCFinderGlobalFavListViewModelDelegate <NSObject>

@optional
- (void)favListViewModelDeleteDataItemTid:(NSString *)arg1;
- (void)favListViewModelTopicListChanged:(WCFinderGlobalFavFlowViewModel *)arg1;
- (void)favListViewModel:(WCFinderGlobalFavFlowViewModel *)arg1 selectedPageVMChanged:(WCFinderGlobalFavFlowPageViewModel *)arg2;
@end

