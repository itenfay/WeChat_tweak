//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface SendPatRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatUsername; // @dynamic chatUsername;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) NSString *pattedUsername; // @dynamic pattedUsername;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

