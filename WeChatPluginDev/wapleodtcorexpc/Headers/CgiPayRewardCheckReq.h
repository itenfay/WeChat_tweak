//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiPayRewardCheckReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *extendStr; // @dynamic extendStr;
@property(retain, nonatomic) NSString *receiverOpenId; // @dynamic receiverOpenId;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(retain, nonatomic) NSString *rewardId; // @dynamic rewardId;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

