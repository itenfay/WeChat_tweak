//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderFeedLikeListViewModelDelegate <NSObject>

@optional
- (void)feedLikeListDataAddSelfLike;
- (void)feedLikeListDataLikeCountChange;
- (void)feedLikeListDataError:(int)arg1;
- (void)feedLikeListDataNoMore;
- (void)feedLikeListDataChange;
@end

