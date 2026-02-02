//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PstnShutDownRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long callSeq; // @dynamic callSeq;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end

