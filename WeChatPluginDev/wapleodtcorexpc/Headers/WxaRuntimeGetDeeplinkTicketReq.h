//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData, NSString;

@class WXPBGeneratedMessage;

@interface WxaRuntimeGetDeeplinkTicketReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *apiName; // @dynamic apiName;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *reqData; // @dynamic reqData;
@property(nonatomic) unsigned int wxaScene; // @dynamic wxaScene;

@end

