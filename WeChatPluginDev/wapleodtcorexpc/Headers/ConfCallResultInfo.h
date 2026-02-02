//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ConfCallResultInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int callResult; // @dynamic callResult;
@property(nonatomic) unsigned long long inviteId; // @dynamic inviteId;
@property(nonatomic) unsigned int leftCallCnt; // @dynamic leftCallCnt;
@property(retain, nonatomic) NSString *remoteUsername; // @dynamic remoteUsername;
@property(nonatomic) unsigned int roomType; // @dynamic roomType;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(nonatomic) unsigned int selfRole; // @dynamic selfRole;
@property(nonatomic) _Bool subCall; // @dynamic subCall;
@property(nonatomic) unsigned int talkTime; // @dynamic talkTime;
@property(nonatomic) unsigned int wordingId; // @dynamic wordingId;

@end

