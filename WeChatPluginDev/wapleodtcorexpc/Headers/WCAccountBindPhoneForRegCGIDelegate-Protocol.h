//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AccountErrorInfo, BindOpMobileResponse, NSDictionary, NSString;

@protocol WCAccountBindPhoneForRegCGIDelegate <NSObject>

@optional
- (void)onPostCheckRegState:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onCheckLoginVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onCheckRegVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onGetRegVoiceVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onGetLoginVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onGetRegVerifyCode:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onCheckLoginPhoneNumberStatus:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (void)onCheckRegPhoneNumberStatus:(AccountErrorInfo *)arg1 StyleKeyValue:(NSDictionary *)arg2 Response:(BindOpMobileResponse *)arg3;
- (NSString *)getRegSessionID;
@end

