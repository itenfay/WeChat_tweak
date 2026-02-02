//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderTopicInfo;

@protocol WCFinderFeedTopicInfoExt <NSObject>

@optional
- (void)feedTopicInfoUpdate:(WCFinderTopicInfo *)arg1;
- (void)feedTopicInfoStatus:(WCFinderTopicInfo *)arg1 followStatus:(_Bool)arg2;
@end

