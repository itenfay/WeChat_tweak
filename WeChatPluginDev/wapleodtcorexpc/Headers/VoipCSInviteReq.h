//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface VoipCSInviteReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *callContext; // @dynamic callContext;
@property(retain, nonatomic) NSData *capInfo; // @dynamic capInfo;
@property(nonatomic) unsigned int inviteId; // @dynamic inviteId;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *toBizAppId; // @dynamic toBizAppId;
@property(retain, nonatomic) NSString *toBizUserName; // @dynamic toBizUserName;

@end

