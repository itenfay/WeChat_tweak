//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface EnterTempSessionRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUserName; // @dynamic bizUserName;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSData *sessionFrom; // @dynamic sessionFrom;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

