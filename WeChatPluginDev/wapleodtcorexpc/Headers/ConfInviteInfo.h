//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface ConfInviteInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSMutableArray *calleeList; // @dynamic calleeList;
@property(nonatomic) unsigned long long inviteId; // @dynamic inviteId;
@property(nonatomic) _Bool muteVideo; // @dynamic muteVideo;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *ownerGroupid; // @dynamic ownerGroupid;
@property(nonatomic) unsigned int roomType; // @dynamic roomType;
@property(retain, nonatomic) NSString *subAppid; // @dynamic subAppid;
@property(retain, nonatomic) NSString *token; // @dynamic token;

@end

