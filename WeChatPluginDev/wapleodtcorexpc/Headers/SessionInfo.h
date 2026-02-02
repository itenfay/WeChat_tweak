//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BlackListInfo, GameLifeMsgExtInfo, NSString, SessionData;

@interface SessionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BlackListInfo *blackListInfo; // @dynamic blackListInfo;
@property(retain, nonatomic) GameLifeMsgExtInfo *msgExtInfo; // @dynamic msgExtInfo;
@property(retain, nonatomic) NSString *myUsername; // @dynamic myUsername;
@property(retain, nonatomic) SessionData *sessionData; // @dynamic sessionData;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int sessionType; // @dynamic sessionType;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end

