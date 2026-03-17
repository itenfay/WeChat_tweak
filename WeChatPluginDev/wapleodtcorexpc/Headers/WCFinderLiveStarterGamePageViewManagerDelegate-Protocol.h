//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGameUserInfo, NSIndexPath, WCFinderFeedFlowView, WCFinderLiveStarterGamePageViewManager;

@protocol WCFinderLiveStarterGamePageViewManagerDelegate <NSObject>
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2 gamePageViewManager:(WCFinderLiveStarterGamePageViewManager *)arg3 gameUserInfo:(MMFinderLiveGameUserInfo *)arg4;
@end

