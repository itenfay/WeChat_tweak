//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderMsgSessionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool disableSendmsgNeedFollow; // @dynamic disableSendmsgNeedFollow;
@property(nonatomic) unsigned int enableAction; // @dynamic enableAction;
@property(nonatomic) unsigned int followFlag; // @dynamic followFlag;
@property(retain, nonatomic) NSData *msgExtInfo; // @dynamic msgExtInfo;
@property(nonatomic) unsigned int rejectMsg; // @dynamic rejectMsg;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end

