//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class WARemoteDebug_BaseReq;

@class WXPBGeneratedMessage;

@interface WARemoteDebug_WxHeartBeatReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseReq *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int recvAck; // @dynamic recvAck;

@end

