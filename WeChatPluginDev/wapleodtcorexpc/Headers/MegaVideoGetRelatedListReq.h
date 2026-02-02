//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MegaVideoBaseRequest, MegaVideoClientStatus, NSData, NSString;

@interface MegaVideoGetRelatedListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) MegaVideoBaseRequest *megaBasereq; // @dynamic megaBasereq;
@property(retain, nonatomic) NSData *objectSessionInfo; // @dynamic objectSessionInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) MegaVideoClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;
@property(nonatomic) unsigned long long videoId; // @dynamic videoId;
@property(retain, nonatomic) NSString *videoNonceId; // @dynamic videoNonceId;

@end

