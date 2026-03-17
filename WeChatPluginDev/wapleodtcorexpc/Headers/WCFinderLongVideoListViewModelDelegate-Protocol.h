//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderLongVideoListViewModelDelegate <NSObject>

@optional
- (void)endRequestLongVideoDataWithPullType:(unsigned long long)arg1 isPrefetchCache:(_Bool)arg2 success:(_Bool)arg3 cgiTimeCost:(unsigned long long)arg4;
- (void)startRequestLongVideoDataWithPullType:(unsigned long long)arg1;
- (void)finderLongVideoLoadingFailure;
- (void)finderLongVideoLoadingSuccessful:(_Bool)arg1;
- (void)finderLongVideoStartLoading;
@end

