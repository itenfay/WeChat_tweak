//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderNewUserPrepareResponse, WCBaseNetworkingError, WCFinderUserPrepareCgi;

@protocol WCFinderUserPrepareCgiDelegate <NSObject>
- (void)userPrepareCgi:(WCFinderUserPrepareCgi *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2;
- (void)userPrepareCgi:(WCFinderUserPrepareCgi *)arg1 didGetResponse:(FinderNewUserPrepareResponse *)arg2;
@end

