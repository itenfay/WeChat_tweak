//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderQRCodeResponse, WCBaseNetworkingError, WCFinderQRCodeCgi;

@protocol WCFinderQRCodeCgiDelegate <NSObject>
- (void)qrcodeCgi:(WCFinderQRCodeCgi *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2;
- (void)qrcodeCgi:(WCFinderQRCodeCgi *)arg1 didGetResponse:(FinderQRCodeResponse *)arg2;
@end

