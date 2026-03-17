//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, ExpireTimeInfo, NSData, NSMutableArray, NSString, SimMobileLogicResp;

@class WXPBGeneratedMessage;

@interface GetGatewayUrlResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ExpireTimeInfo *expiredTimeInfo; // @dynamic expiredTimeInfo;
@property(retain, nonatomic) SimMobileLogicResp *logicresp; // @dynamic logicresp;
@property(retain, nonatomic) NSString *msgid; // @dynamic msgid;
@property(retain, nonatomic) NSData *respSpamInfo; // @dynamic respSpamInfo;
@property(retain, nonatomic) NSMutableArray *uplinkUrlInfo; // @dynamic uplinkUrlInfo;

@end

