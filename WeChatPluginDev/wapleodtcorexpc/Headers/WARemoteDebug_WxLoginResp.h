//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class WARemoteDebug_BaseResp, WARemoteDebug_RoomInfo;

@interface WARemoteDebug_WxLoginResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseResp *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) WARemoteDebug_RoomInfo *roomInfo; // @dynamic roomInfo;

@end

