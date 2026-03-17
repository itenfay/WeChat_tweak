//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderFeedContentVM;

@protocol WCFinderRewardAdViewModelDelegate <NSObject>

@optional
- (void)finderShareListStopCurrentFeedPlay;
- (void)finderShareListFetchFirstRelatedPageCgiSuc;
- (void)finderShareListShouldReloadMediaWithTid:(NSString *)arg1;
- (void)finderShareListOnStateOfNotExist:(NSString *)arg1;
- (void)finderShareListDeleteDataItemVM:(WCFinderFeedContentVM *)arg1;
- (void)finderShareListFetchFailWithErrorCode:(int)arg1;
- (void)finderShareListNoMoreData;
- (void)finderShareListLoadMoreFinished:(NSArray *)arg1 continueFlag:(_Bool)arg2;
- (void)finderShareListReplaceFirstItemFinished:(_Bool)arg1;
- (void)finderShareListFetchDataSuc:(_Bool)arg1;
@end

