//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface ConfRecvInviteInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)cancelVoIPMonoMsg;
- (id)inviteVoIPMonoMsg;
- (id)voIPMonoMsgWithType:(unsigned int)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *callerOpenid; // @dynamic callerOpenid;
@property(retain, nonatomic) NSString *callerUsername; // @dynamic callerUsername;
@property(nonatomic) unsigned int memberid; // @dynamic memberid;
@property(nonatomic) unsigned int roomType; // @dynamic roomType;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(retain, nonatomic) NSString *subAppid; // @dynamic subAppid;
@property(nonatomic) _Bool subCall; // @dynamic subCall;
@property(retain, nonatomic) NSMutableArray *usernameList; // @dynamic usernameList;

@end

