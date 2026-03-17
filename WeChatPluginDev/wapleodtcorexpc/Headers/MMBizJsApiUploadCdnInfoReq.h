//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, MMBizJsApiCdnInfo, NSString;

@class WXPBGeneratedMessage;

@interface MMBizJsApiUploadCdnInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) MMBizJsApiCdnInfo *cdnInfo; // @dynamic cdnInfo;

@end

