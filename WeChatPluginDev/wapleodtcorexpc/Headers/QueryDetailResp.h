//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface QueryDetailResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int commission; // @dynamic commission;
@property(retain, nonatomic) NSString *estimatedWithdrawTime; // @dynamic estimatedWithdrawTime;
@property(retain, nonatomic) NSString *explain; // @dynamic explain;
@property(retain, nonatomic) NSString *paySuccTime; // @dynamic paySuccTime;
@property(retain, nonatomic) NSString *payeeAccount; // @dynamic payeeAccount;
@property(retain, nonatomic) NSString *payeeName; // @dynamic payeeName;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) NSString *stateDesc; // @dynamic stateDesc;
@property(retain, nonatomic) NSString *tip; // @dynamic tip;
@property(retain, nonatomic) NSString *withdrawSuccTime; // @dynamic withdrawSuccTime;

@end

