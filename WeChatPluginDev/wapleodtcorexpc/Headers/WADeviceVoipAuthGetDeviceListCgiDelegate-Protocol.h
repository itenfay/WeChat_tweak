//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCBaseCgi, WCBaseNetworkingError;

@protocol WADeviceVoipAuthGetDeviceListCgiDelegate <NSObject>
- (void)didFailToFetchDeviceWithError:(WCBaseNetworkingError *)arg1 cgi:(WCBaseCgi *)arg2;
- (void)didFetchDeviceVoipAuthDeviceList:(NSArray *)arg1 cgi:(WCBaseCgi *)arg2;
@end

