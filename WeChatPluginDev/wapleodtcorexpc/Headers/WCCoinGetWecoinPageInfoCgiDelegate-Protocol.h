//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetWecoinPageInfoResponse, WCCoinCgiError, WCCoinGetWecoinPageInfoCgi;

@protocol WCCoinGetWecoinPageInfoCgiDelegate <NSObject>
- (void)getWecoinPageInfoCgi:(WCCoinGetWecoinPageInfoCgi *)arg1 didFailWithError:(WCCoinCgiError *)arg2;
- (void)getWecoinPageInfoCgi:(WCCoinGetWecoinPageInfoCgi *)arg1 didGetResponse:(GetWecoinPageInfoResponse *)arg2;
@end

