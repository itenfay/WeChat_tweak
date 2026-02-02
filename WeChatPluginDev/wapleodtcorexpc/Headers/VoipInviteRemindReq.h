//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface VoipInviteRemindReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int inviteType; // @dynamic inviteType;
@property(nonatomic) unsigned int listCount; // @dynamic listCount;
@property(retain, nonatomic) NSMutableArray *toUserNameList; // @dynamic toUserNameList;

@end

