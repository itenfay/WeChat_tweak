//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedArray, WCFinderProfileFeedFetcher, WCFinderStreamLoadingState;
@protocol WCFinderProfilePullableFeedViewModel;

@protocol WCFinderProfilePullableFeedViewModel <NSObject>
- (void)fetchJustWatchFeed:(NSString *)arg1 complete:(void (^)(_Bool))arg2;
- (void)setRefPageModel:(id <WCFinderProfilePullableFeedViewModel>)arg1;
- (WCFinderProfileFeedFetcher *)dataFetcher;
- (_Bool)requestPrePage;
- (_Bool)requestNextPage;
- (WCFinderFeedArray *)feedArray;
- (WCFinderStreamLoadingState *)loadingState;
- (WCFinderStreamLoadingState *)pullingState;
@end

