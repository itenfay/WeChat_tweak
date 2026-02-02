//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSMutableDictionary, WCFinderFeedListView;

@protocol WCFinderFeedListViewReportDelegate <NSObject>

@optional
- (NSDictionary *)finderFeedListViewTLFollowUdfKv:(WCFinderFeedListView *)arg1;
- (unsigned int)finderFeedListViewTLFollowEnterType:(WCFinderFeedListView *)arg1;
- (unsigned long long)postMgrShareScene;
- (unsigned long long)postMgrCreateScene;
- (int)postMgrUserPrepareScene;
- (NSDictionary *)clientInfoInLog18054;
- (NSMutableDictionary *)extInfoInLog21874;
@end

