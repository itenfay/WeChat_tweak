//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface JoinCloudIMRoomRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *groupid; // @dynamic groupid;
@property(retain, nonatomic) NSString *noncestr; // @dynamic noncestr;
@property(retain, nonatomic) NSString *privateData; // @dynamic privateData;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;

@end

