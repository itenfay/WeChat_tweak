//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, VoipStatReportData;

@interface VoipCancelInviteReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cancelType; // @dynamic cancelType;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(nonatomic) unsigned int intervalWithInvite; // @dynamic intervalWithInvite;
@property(nonatomic) unsigned int inviteId; // @dynamic inviteId;
@property(nonatomic) unsigned int inviteType; // @dynamic inviteType;
@property(retain, nonatomic) VoipStatReportData *reportData; // @dynamic reportData;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

