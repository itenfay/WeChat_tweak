//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AuthorizeUserIDBaseResponse, BaseResponse, NSString;

@interface SendSmsResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AuthorizeUserIDBaseResponse *authBaseResponse; // @dynamic authBaseResponse;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *verifyToken; // @dynamic verifyToken;

@end

