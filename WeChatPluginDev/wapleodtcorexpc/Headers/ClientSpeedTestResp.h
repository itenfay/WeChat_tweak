//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, SpeedTestNotify;

@class WXPBGeneratedMessage;

@interface ClientSpeedTestResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SpeedTestNotify *downloadPacket; // @dynamic downloadPacket;
@property(nonatomic) int retcode; // @dynamic retcode;
@property(nonatomic) unsigned int suspensionDuration; // @dynamic suspensionDuration;
@property(retain, nonatomic) SpeedTestNotify *uploadPacket; // @dynamic uploadPacket;

@end

