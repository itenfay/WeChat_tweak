//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, PayJsApiAuthenPageMsgInfo;

@interface CheckPayJsapiResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool canPassPwd; // @dynamic canPassPwd;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *jsApiReqKey; // @dynamic jsApiReqKey;
@property(retain, nonatomic) PayJsApiAuthenPageMsgInfo *payJsapiAuthenPageMsgItem; // @dynamic payJsapiAuthenPageMsgItem;
@property(retain, nonatomic) NSString *scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(retain, nonatomic) NSString *usertoken; // @dynamic usertoken;

@end

