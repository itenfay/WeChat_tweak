//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, WARemoteDebug_BaseReq;

@interface WARemoteDebug_SendDebugMessageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseReq *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *debugMessageList; // @dynamic debugMessageList;
@property(nonatomic) unsigned int recvAck; // @dynamic recvAck;

@end

