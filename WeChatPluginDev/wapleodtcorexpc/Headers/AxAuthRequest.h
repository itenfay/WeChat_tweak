//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface AxAuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *axTicket; // @dynamic axTicket;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(nonatomic) int channel; // @dynamic channel;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *softType; // @dynamic softType;
@property(retain, nonatomic) NSString *timeZone; // @dynamic timeZone;

@end

