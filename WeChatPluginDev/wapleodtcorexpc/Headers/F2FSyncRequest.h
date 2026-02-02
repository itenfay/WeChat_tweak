//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface F2FSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clientId; // @dynamic clientId;
@property(nonatomic) unsigned long long flag; // @dynamic flag;
@property(retain, nonatomic) NSString *fromUser; // @dynamic fromUser;
@property(nonatomic) unsigned long long key; // @dynamic key;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *toUser; // @dynamic toUser;
@property(retain, nonatomic) NSMutableArray *xchgList; // @dynamic xchgList;

@end

