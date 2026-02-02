//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetWCOCallInfoRequest, GetWCOCallInfoResponse;

@protocol WCOutGetCallInfoDelegate <NSObject>
- (void)GetCallInfoResponse:(int)arg1 Request:(GetWCOCallInfoRequest *)arg2 Response:(GetWCOCallInfoResponse *)arg3;
@end

