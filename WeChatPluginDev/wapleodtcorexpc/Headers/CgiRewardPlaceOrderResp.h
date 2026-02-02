//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface CgiRewardPlaceOrderResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *extendStr; // @dynamic extendStr;
@property(retain, nonatomic) NSString *receiverOpenId; // @dynamic receiverOpenId;
@property(retain, nonatomic) NSString *remindStr; // @dynamic remindStr;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *rewardId; // @dynamic rewardId;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

