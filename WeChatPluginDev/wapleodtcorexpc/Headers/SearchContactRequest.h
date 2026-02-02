//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface SearchContactRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqBuf; // @dynamic reqBuf;
@property(nonatomic) unsigned int searchScene; // @dynamic searchScene;
@property(retain, nonatomic) SKBuiltinString_t *userName; // @dynamic userName;

@end

