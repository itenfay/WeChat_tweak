//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, RealNameSendSmsResp;

@protocol WCPayRealnameSendSMSCgiDelegate <NSObject>
- (void)onWCPayRealnameSendSMSCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayRealnameSendSMSCgiResp:(RealNameSendSmsResp *)arg1;
@end

