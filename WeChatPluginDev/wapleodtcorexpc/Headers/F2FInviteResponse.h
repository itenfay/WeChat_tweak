//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface F2FInviteResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int delayTime; // @dynamic delayTime;
@property(nonatomic) unsigned long long key; // @dynamic key;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int syncInterval; // @dynamic syncInterval;
@property(retain, nonatomic) NSString *toUser; // @dynamic toUser;

@end

