//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface VerifyUser : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *antispamTicket; // @dynamic antispamTicket;
@property(retain, nonatomic) SKBuiltinBuffer_t *bizReportInfo; // @dynamic bizReportInfo;
@property(retain, nonatomic) NSString *chatRoomUserName; // @dynamic chatRoomUserName;
@property(retain, nonatomic) NSString *finderUserName; // @dynamic finderUserName;
@property(nonatomic) unsigned int friendFlag; // @dynamic friendFlag;
@property(retain, nonatomic) NSString *labelIdList; // @dynamic labelIdList;
@property(retain, nonatomic) NSString *outerUrl; // @dynamic outerUrl;
@property(retain, nonatomic) NSString *reportInfo; // @dynamic reportInfo;
@property(nonatomic) unsigned int scanQrcodeFromScene; // @dynamic scanQrcodeFromScene;
@property(retain, nonatomic) SKBuiltinBuffer_t *shareCardForwardInfo; // @dynamic shareCardForwardInfo;
@property(nonatomic) unsigned int shareCardForwardLevel; // @dynamic shareCardForwardLevel;
@property(retain, nonatomic) NSString *sourceNickName; // @dynamic sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @dynamic sourceUserName;
@property(nonatomic) unsigned int subScene; // @dynamic subScene;
@property(nonatomic) unsigned int subscribeBizLive; // @dynamic subscribeBizLive;
@property(retain, nonatomic) NSString *value; // @dynamic value;
@property(retain, nonatomic) NSString *verifyUserTicket; // @dynamic verifyUserTicket;

@end

