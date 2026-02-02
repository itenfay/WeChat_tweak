//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface SendYoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) unsigned int yoType; // @dynamic yoType;

@end

