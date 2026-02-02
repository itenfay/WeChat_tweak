//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray, NSString;

@interface GetGatewayUrlReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *business; // @dynamic business;
@property(retain, nonatomic) NSMutableArray *clientIps; // @dynamic clientIps;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *realCountry; // @dynamic realCountry;
@property(retain, nonatomic) NSData *reqSpamInfo; // @dynamic reqSpamInfo;
@property(retain, nonatomic) NSString *timeZone; // @dynamic timeZone;

@end

