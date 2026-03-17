//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, JSAPIBaseResponse;

@class WXPBGeneratedMessage;

@interface JSAPICheckLaunchAppResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int errcode; // @dynamic errcode;
@property(retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse; // @dynamic jsapiBaseresponse;
@property(nonatomic) int jumpStoreFlag; // @dynamic jumpStoreFlag;
@property(nonatomic) int showType; // @dynamic showType;

@end

