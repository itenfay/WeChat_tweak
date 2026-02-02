//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface BizCommReportResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(retain, nonatomic) NSString *respJson; // @dynamic respJson;
@property(nonatomic) int ret; // @dynamic ret;

@end

