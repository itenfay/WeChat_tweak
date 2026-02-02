//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveAppMsgOption, FinderLiveBoxId, FinderLiveContact, NSData, NSMutableArray, NSString;

@interface FinderLiveAppMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveBoxId *boxId; // @dynamic boxId;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned int floatType; // @dynamic floatType;
@property(retain, nonatomic) FinderLiveContact *fromUserContact; // @dynamic fromUserContact;
@property(nonatomic) unsigned int isFloatmsg; // @dynamic isFloatmsg;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *localClientMsgId; // @dynamic localClientMsgId;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(retain, nonatomic) FinderLiveAppMsgOption *option; // @dynamic option;
@property(retain, nonatomic) NSData *payload; // @dynamic payload;
@property(nonatomic) unsigned long long quotedMsgSeq; // @dynamic quotedMsgSeq;
@property(retain, nonatomic) NSMutableArray *recipientContactList; // @dynamic recipientContactList;
@property(retain, nonatomic) NSString *referFloatProductId; // @dynamic referFloatProductId;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(nonatomic) unsigned long long serverMsgVersion; // @dynamic serverMsgVersion;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) FinderLiveContact *toUserContact; // @dynamic toUserContact;

@end

