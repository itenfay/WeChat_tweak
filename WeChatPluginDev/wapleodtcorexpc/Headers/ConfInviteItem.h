//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface ConfInviteItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int errcode; // @dynamic errcode;
@property(retain, nonatomic) NSData *inviteData; // @dynamic inviteData;
@property(retain, nonatomic) NSString *openid; // @dynamic openid;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

