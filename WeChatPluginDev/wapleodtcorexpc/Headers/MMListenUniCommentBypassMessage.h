//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenUniCommentBypassMessage_ClientInfo, MMListenUniCommentBypassMessage_JumpInfo, NSData, NSString;

@interface MMListenUniCommentBypassMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) int categoryItemType; // @dynamic categoryItemType;
@property(retain, nonatomic) MMListenUniCommentBypassMessage_ClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) NSData *clientInfoBuffer; // @dynamic clientInfoBuffer;
@property(retain, nonatomic) MMListenUniCommentBypassMessage_JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) int listenItemType; // @dynamic listenItemType;
@property(nonatomic) unsigned long long scene; // @dynamic scene;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(retain, nonatomic) NSString *topicName; // @dynamic topicName;
@property(nonatomic) int type; // @dynamic type;

@end

