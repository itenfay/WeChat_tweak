//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, WARemoteDebug_BaseResp;

@class WXPBGeneratedMessage;

@interface WARemoteDebug_WxSyncMessageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseResp *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *debugMessageList; // @dynamic debugMessageList;
@property(nonatomic) unsigned int sendAck; // @dynamic sendAck;

@end

