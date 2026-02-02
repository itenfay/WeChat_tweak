//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface VerifyPswdResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *a2Key; // @dynamic a2Key;
@property(retain, nonatomic) SKBuiltinBuffer_t *authAuthKey; // @dynamic authAuthKey;
@property(retain, nonatomic) NSString *authKey; // @dynamic authKey;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *imgBuf; // @dynamic imgBuf;
@property(retain, nonatomic) SKBuiltinString_t *imgEncryptKey; // @dynamic imgEncryptKey;
@property(retain, nonatomic) SKBuiltinString_t *imgSid; // @dynamic imgSid;
@property(retain, nonatomic) SKBuiltinBuffer_t *ksid; // @dynamic ksid;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(retain, nonatomic) SKBuiltinBuffer_t *wtloginRspBuff; // @dynamic wtloginRspBuff;

@end

