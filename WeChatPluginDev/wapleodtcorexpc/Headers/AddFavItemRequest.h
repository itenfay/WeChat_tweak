//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface AddFavItemRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long cliCreateTime; // @dynamic cliCreateTime;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) NSString *object; // @dynamic object;
@property(retain, nonatomic) NSString *sourceId; // @dynamic sourceId;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(retain, nonatomic) NSString *transferCtx; // @dynamic transferCtx;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

