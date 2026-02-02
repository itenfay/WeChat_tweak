//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CommMsgBaseInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int dateTime; // @dynamic dateTime;
@property(nonatomic) unsigned int funcFlag; // @dynamic funcFlag;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

