//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderFeedContentVM;

@protocol WCFinderSnSAdListViewModelDelegate <NSObject>

@optional
- (void)finderSnSAdListOnStateOfNotExist:(NSString *)arg1;
- (void)finderSnSAdListFollowStatusChanged:(_Bool)arg1 followState:(unsigned long long)arg2;
- (void)finderSnSAdListShouldReloadMediaWithTid:(NSString *)arg1;
- (void)finderSnSAdListDeleteDataItemVM:(WCFinderFeedContentVM *)arg1;
- (void)finderSnSAdListFetchFailWithErrorCode:(int)arg1;
- (void)finderSnSAdListEmpty;
- (void)finderSnSAdListNoMoreData;
- (void)finderSnSAdListLoadMoreFinished:(NSArray *)arg1;
- (void)finderSnSAdListFetchDataSuc;
@end

