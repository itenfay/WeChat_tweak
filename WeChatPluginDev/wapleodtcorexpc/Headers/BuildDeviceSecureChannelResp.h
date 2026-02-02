//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ServerBaseHandShakeResp, ServerECDHHandShakeResp, ServerPSKHandShakeResp;

@interface BuildDeviceSecureChannelResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ServerECDHHandShakeResp *ecdhResp; // @dynamic ecdhResp;
@property(retain, nonatomic) ServerBaseHandShakeResp *handshakeBaseResp; // @dynamic handshakeBaseResp;
@property(retain, nonatomic) ServerPSKHandShakeResp *pskResp; // @dynamic pskResp;
@property(nonatomic) unsigned int respHandshakeTypeFlag; // @dynamic respHandshakeTypeFlag;

@end

