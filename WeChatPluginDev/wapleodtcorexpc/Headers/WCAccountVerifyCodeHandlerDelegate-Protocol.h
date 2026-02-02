//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AccountErrorInfo, BindOpMobileResponse, NSDictionary;

@protocol WCAccountVerifyCodeHandlerDelegate <NSObject>
- (void)onHandlerCheckLoginVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(NSDictionary *)arg1;
@end

