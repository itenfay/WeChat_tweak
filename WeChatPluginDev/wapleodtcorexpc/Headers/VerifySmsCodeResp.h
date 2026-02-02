//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AuthorizeUserIDBaseResponse, BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface VerifySmsCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AuthorizeUserIDBaseResponse *authBaseResponse; // @dynamic authBaseResponse;
@property(retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;

@end

