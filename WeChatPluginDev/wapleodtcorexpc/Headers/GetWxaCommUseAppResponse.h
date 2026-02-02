//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, CommUseAppInfo, WxaAppBaseResponse;

@class WXPBGeneratedMessage;

@interface GetWxaCommUseAppResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CommUseAppInfo *commuseAppinfo; // @dynamic commuseAppinfo;
@property(nonatomic) unsigned int nextReqInterval; // @dynamic nextReqInterval;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;

@end

