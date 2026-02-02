//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM;

@protocol WCFinderNearbyFlowViewControllerDelegate <NSObject>

@optional
- (void)onNearbyFlowViewIndexChanged:(long long)arg1;
- (void)onTriggerUnLikeAction:(WCFinderFeedContentVM *)arg1;
@end

