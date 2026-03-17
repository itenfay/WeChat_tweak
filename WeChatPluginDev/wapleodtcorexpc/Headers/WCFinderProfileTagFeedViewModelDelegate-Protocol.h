//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderProfileTagFeedViewModel;

@protocol WCFinderProfileTagFeedViewModelDelegate <NSObject>

@optional
- (void)topicFeedVMFetchStateChanged:(WCFinderProfileTagFeedViewModel *)arg1;
- (void)topicFeedVMRequestDataFaield:(WCFinderProfileTagFeedViewModel *)arg1;
- (void)topicFeedVMBeginRequestFirstPage:(WCFinderProfileTagFeedViewModel *)arg1;
@end

