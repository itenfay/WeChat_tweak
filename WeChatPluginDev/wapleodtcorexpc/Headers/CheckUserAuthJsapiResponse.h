//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, PayJsApiAuthenPageMsgInfo, TouchInfo;

@interface CheckUserAuthJsapiResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *jsApiReqKey; // @dynamic jsApiReqKey;
@property(retain, nonatomic) PayJsApiAuthenPageMsgInfo *payJsapiVerifyPaypasswordPageMsg; // @dynamic payJsapiVerifyPaypasswordPageMsg;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(retain, nonatomic) TouchInfo *touchInfo; // @dynamic touchInfo;

@end

