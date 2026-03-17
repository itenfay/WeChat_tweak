//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CheckUserAuthJsapiResponse, NSString;

@protocol WCPayCheckUserAuthJSApiCgiDelegate <NSObject>
- (void)OnGetCheckUserAuthJSApiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetCheckUserAuthJSApiResponseOK:(CheckUserAuthJsapiResponse *)arg1;
@end

