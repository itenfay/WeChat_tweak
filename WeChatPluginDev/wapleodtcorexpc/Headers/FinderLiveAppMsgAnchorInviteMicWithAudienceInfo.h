//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderLiveAppMsgAnchorInviteMicWithAudienceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long confirmExpiredTime; // @dynamic confirmExpiredTime;
@property(retain, nonatomic) NSData *inviteMicBuffer; // @dynamic inviteMicBuffer;
@property(nonatomic) unsigned int inviteSeatId; // @dynamic inviteSeatId;
@property(nonatomic) int micType; // @dynamic micType;

@end

