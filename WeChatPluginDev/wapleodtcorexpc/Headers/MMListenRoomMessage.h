//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenUserInfo, NSString;

@interface MMListenRoomMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenUserInfo *fromUser; // @dynamic fromUser;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) NSString *messageId; // @dynamic messageId;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) MMListenUserInfo *toUser; // @dynamic toUser;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

