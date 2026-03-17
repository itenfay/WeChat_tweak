//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData;

@class WXPBGeneratedMessage;

@interface MMListenMusicRewardConsumeOrderResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int businessId; // @dynamic businessId;
@property(retain, nonatomic) NSData *wecoinBuff; // @dynamic wecoinBuff;

@end

