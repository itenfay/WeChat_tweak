//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSData, NSString;

@interface FinderLiveMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) FinderLiveContact *finderLiveContact; // @dynamic finderLiveContact;
@property(nonatomic) unsigned int floatType; // @dynamic floatType;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(nonatomic) unsigned int isFloatmsg; // @dynamic isFloatmsg;
@property(nonatomic) _Bool isStickMsg; // @dynamic isStickMsg;
@property(nonatomic) unsigned int likeCnt; // @dynamic likeCnt;
@property(retain, nonatomic) NSString *localClientMsgId; // @dynamic localClientMsgId;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *referFloatProductId; // @dynamic referFloatProductId;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(nonatomic) unsigned int stickType; // @dynamic stickType;
@property(retain, nonatomic) FinderLiveContact *toFinderLiveContact; // @dynamic toFinderLiveContact;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

