//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface GetA8KeyLiteReqInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appDesc; // @dynamic appDesc;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) unsigned int appMsgInnerType; // @dynamic appMsgInnerType;
@property(retain, nonatomic) NSString *appTitle; // @dynamic appTitle;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(nonatomic) unsigned int controlBits; // @dynamic controlBits;
@property(retain, nonatomic) NSData *digest; // @dynamic digest;
@property(retain, nonatomic) NSString *referUrl; // @dynamic referUrl;
@property(retain, nonatomic) NSString *reqUrl; // @dynamic reqUrl;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

