//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ConfCallWordingInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)wordingInfo;

// Remaining properties
@property(nonatomic) int calleeMemberid; // @dynamic calleeMemberid;
@property(nonatomic) int callerMemberid; // @dynamic callerMemberid;
@property(nonatomic) unsigned long long inviteId; // @dynamic inviteId;
@property(retain, nonatomic) NSString *remoteUsername; // @dynamic remoteUsername;
@property(nonatomic) unsigned int roomType; // @dynamic roomType;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(nonatomic) unsigned int selfRole; // @dynamic selfRole;
@property(nonatomic) unsigned int talkTime; // @dynamic talkTime;
@property(nonatomic) unsigned int wordingId; // @dynamic wordingId;

@end

