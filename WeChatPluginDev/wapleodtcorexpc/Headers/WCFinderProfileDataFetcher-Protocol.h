//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedArray, WCFinderStreamLoadingState;

@protocol WCFinderProfileDataFetcher <NSObject>
- (WCFinderFeedContentVM * (^)(WCFinderDataItem *))feedMapper;
- (void)profileRequestNextPage:(WCFinderFeedArray *)arg1 complete:(void (^)(_Bool))arg2;
- (void)profileRequestFirstPage:(WCFinderFeedArray *)arg1 complete:(void (^)(_Bool, WCFinderContact *))arg2;
- (WCFinderStreamLoadingState *)profileLoadingState;

@optional
- (void)profileRequestPrePage:(WCFinderFeedArray *)arg1 complete:(void (^)(_Bool))arg2;
- (WCFinderStreamLoadingState *)profilePullingState;
@end

