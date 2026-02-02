//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM;

@protocol WCFinderMemberShipFeedTabViewModelDelegate <NSObject>

@optional
- (void)finderMemberShipZoneFeedTabViewChangeStickyTopTo:(_Bool)arg1 contentVM:(WCFinderFeedContentVM *)arg2 success:(_Bool)arg3 errorInfo:(NSString *)arg4;
- (void)finderMemberShipZoneFeedTabViewDeleteDataItemVM;
- (void)finderMemberShipZoneFeedTabViewFetchListFail;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabViewNoMoreData;
@end

