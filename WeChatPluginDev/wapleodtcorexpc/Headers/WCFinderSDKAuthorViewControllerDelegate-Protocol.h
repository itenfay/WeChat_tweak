//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderGameBindOpResponse, WCBaseNetworkingError, WCFinderSDKAuthorViewController;

@protocol WCFinderSDKAuthorViewControllerDelegate <NSObject>

@optional
- (void)finderSDKAuthorViewController:(WCFinderSDKAuthorViewController *)arg1 comfirmFailure:(WCBaseNetworkingError *)arg2;
- (void)finderSDKAuthorViewController:(WCFinderSDKAuthorViewController *)arg1 comfirmSuccessful:(FinderGameBindOpResponse *)arg2;
- (void)finderSDKAuthorViewControllerDenyAction:(WCFinderSDKAuthorViewController *)arg1;
@end

