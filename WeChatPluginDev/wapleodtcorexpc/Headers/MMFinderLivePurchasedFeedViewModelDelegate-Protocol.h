//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMFinderLivePurchasedFeedViewModelDelegate <NSObject>

@optional
- (void)onPurchasedFeedViewModelUpdated:(_Bool)arg1 hasMoreData:(_Bool)arg2;
- (void)onPurchasedFeedViewModelStartFetching;
@end

