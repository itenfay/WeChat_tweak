//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PstnInviteRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int countryType; // @dynamic countryType;
@property(nonatomic) unsigned int dialScene; // @dynamic dialScene;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int inviteId; // @dynamic inviteId;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned int sipMedia; // @dynamic sipMedia;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(retain, nonatomic) NSString *toUserPhoneNum; // @dynamic toUserPhoneNum;

@end

