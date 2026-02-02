//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface DeleteUserAutoFillInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clientVersion; // @dynamic clientVersion;
@property(nonatomic) unsigned int collectId; // @dynamic collectId;
@property(nonatomic) unsigned int groupId; // @dynamic groupId;
@property(retain, nonatomic) NSString *groupKey; // @dynamic groupKey;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

