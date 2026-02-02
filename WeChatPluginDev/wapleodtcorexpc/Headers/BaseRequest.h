//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface BaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) NSData *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSData *deviceType; // @dynamic deviceType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *sessionKey; // @dynamic sessionKey;
@property(nonatomic) unsigned int uin; // @dynamic uin;

@end

