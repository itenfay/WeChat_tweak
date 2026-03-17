//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAdDynamicFeedViewExtraClickJumpInfo;

@protocol WCTimeLineAdDynamicFeedViewDelegate <NSObject>
- (void)onAdDynamicFeedViewActionClickWithExtraClickType:(long long)arg1 jumpInfo:(WCAdDynamicFeedViewExtraClickJumpInfo *)arg2;
- (void)onAdDynamicFeedViewActionClickWithSource:(long long)arg1;
@end

