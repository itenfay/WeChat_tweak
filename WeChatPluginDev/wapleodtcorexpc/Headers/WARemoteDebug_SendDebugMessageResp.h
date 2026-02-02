//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class WARemoteDebug_BaseResp;

@interface WARemoteDebug_SendDebugMessageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseResp *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int sendAck; // @dynamic sendAck;

@end

