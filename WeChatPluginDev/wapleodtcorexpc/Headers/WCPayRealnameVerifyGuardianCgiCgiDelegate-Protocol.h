//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, RealNameVerifyGuardianResp;

@protocol WCPayRealnameVerifyGuardianCgiCgiDelegate <NSObject>
- (void)onWCPayRealnameVerifyGuardianCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayRealnameVerifyGuardianCgiResp:(RealNameVerifyGuardianResp *)arg1;
@end

