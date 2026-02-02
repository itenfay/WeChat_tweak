//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString;

@interface SdkOauthAuthorizeConfirmResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *ilinkAuthBuffer; // @dynamic ilinkAuthBuffer;
@property(retain, nonatomic) NSString *redirectUrl; // @dynamic redirectUrl;
@property(retain, nonatomic) NSString *userConfirmRedirectUrl; // @dynamic userConfirmRedirectUrl;
@property(retain, nonatomic) NSString *userConfirmWording; // @dynamic userConfirmWording;
@property(retain, nonatomic) NSString *wxToken; // @dynamic wxToken;

@end

