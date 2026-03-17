//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BusinessCallbackRes, NSString;

@protocol WCPayT2BCBusinessCallBackCgiDelegate <NSObject>

@optional
- (void)OnWCPayT2BCBusinessCallBackCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCBusinessCallBackCgiResponseOK:(BusinessCallbackRes *)arg1;
@end

