//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ExpireTimeInfo, NSData, NSMutableArray, NSString, SimMobileLogicResp;

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

