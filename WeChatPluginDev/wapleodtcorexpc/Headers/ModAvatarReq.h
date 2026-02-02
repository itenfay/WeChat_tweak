//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ModAvatarReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int avatarId; // @dynamic avatarId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fileid; // @dynamic fileid;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *oriAvatarurl; // @dynamic oriAvatarurl;

@end

