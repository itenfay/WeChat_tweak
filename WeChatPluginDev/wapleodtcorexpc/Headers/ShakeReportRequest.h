//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface ShakeReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cellId; // @dynamic cellId;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(nonatomic) int gpssource; // @dynamic gpssource;
@property(nonatomic) unsigned int imgId; // @dynamic imgId;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *macAddr; // @dynamic macAddr;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(nonatomic) int precision; // @dynamic precision;
@property(nonatomic) unsigned int times; // @dynamic times;

@end

