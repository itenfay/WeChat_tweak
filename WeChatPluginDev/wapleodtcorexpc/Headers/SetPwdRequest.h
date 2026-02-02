//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface SetPwdRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey; // @dynamic autoAuthKey;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *password; // @dynamic password;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(nonatomic) unsigned int ticketType; // @dynamic ticketType;

@end

