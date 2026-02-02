//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, StatusNotifyFunction;

@interface StatusNotifyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned int code; // @dynamic code;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) StatusNotifyFunction *function; // @dynamic function;
@property(retain, nonatomic) NSMutableArray *hasReadChatList; // @dynamic hasReadChatList;
@property(nonatomic) unsigned int hasReadChatListCount; // @dynamic hasReadChatListCount;
@property(nonatomic) unsigned int hasReadFunctionCount; // @dynamic hasReadFunctionCount;
@property(retain, nonatomic) NSMutableArray *hasReadFunctionList; // @dynamic hasReadFunctionList;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(retain, nonatomic) NSMutableArray *unreadChatList; // @dynamic unreadChatList;
@property(nonatomic) unsigned int unreadChatListCount; // @dynamic unreadChatListCount;
@property(nonatomic) unsigned int unreadFunctionCount; // @dynamic unreadFunctionCount;
@property(retain, nonatomic) NSMutableArray *unreadFunctionList; // @dynamic unreadFunctionList;

@end

