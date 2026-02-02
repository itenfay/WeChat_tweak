//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AuthorizeUserIDBaseResponse, AuthorizeUserIDSmsInfo, BaseResponse, NSString;

@interface SubmitAuthorizeUserIDResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AuthorizeUserIDBaseResponse *authBaseResponse; // @dynamic authBaseResponse;
@property(nonatomic) unsigned int authStatus; // @dynamic authStatus;
@property(retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) AuthorizeUserIDSmsInfo *sms; // @dynamic sms;

@end

