//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderGetUserResponse, WCBaseNetworkingError, WCFinderGetUserCgi;

@protocol WCFinderGetUserCgiDelegate <NSObject>
- (void)getUserCgi:(WCFinderGetUserCgi *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2;
- (void)getUserCgi:(WCFinderGetUserCgi *)arg1 didGetResponse:(FinderGetUserResponse *)arg2;
@end

