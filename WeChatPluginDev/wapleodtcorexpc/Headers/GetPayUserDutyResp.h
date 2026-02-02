//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetPayUserDutyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *darkModeDutyInfo; // @dynamic darkModeDutyInfo;
@property(retain, nonatomic) NSString *dutyInfo; // @dynamic dutyInfo;
@property(nonatomic) _Bool needAgreeDuty; // @dynamic needAgreeDuty;
@property(nonatomic) int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

