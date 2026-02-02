//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MobileInfo, NSData, SimMobileLogicResp;

@interface GetMobileResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SimMobileLogicResp *logicresp; // @dynamic logicresp;
@property(retain, nonatomic) MobileInfo *mobileInfo; // @dynamic mobileInfo;
@property(retain, nonatomic) NSData *respSpamInfo; // @dynamic respSpamInfo;

@end

