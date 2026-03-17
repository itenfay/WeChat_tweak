//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, ClientBaseHandShakeReq, ClientECDHHandShakeReq, ClientPSKHandShakeReq;

@class WXPBGeneratedMessage;

@interface BuildDeviceSecureChannelReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) ClientECDHHandShakeReq *ecdhReq; // @dynamic ecdhReq;
@property(retain, nonatomic) ClientBaseHandShakeReq *handshakeBaseReq; // @dynamic handshakeBaseReq;
@property(retain, nonatomic) ClientPSKHandShakeReq *pskReq; // @dynamic pskReq;
@property(nonatomic) unsigned int reqHandshakeTypeFlag; // @dynamic reqHandshakeTypeFlag;

@end

