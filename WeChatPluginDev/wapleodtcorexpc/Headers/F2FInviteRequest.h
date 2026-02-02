//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface F2FInviteRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fromUser; // @dynamic fromUser;
@property(nonatomic) unsigned int inviteId; // @dynamic inviteId;
@property(retain, nonatomic) NSString *toUser; // @dynamic toUser;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *xchgList; // @dynamic xchgList;

@end

