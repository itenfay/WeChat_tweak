//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, MidasSdkInfo;

@class WXPBGeneratedMessage;

@interface GetMidasSdkInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MidasSdkInfo *sdkInfo; // @dynamic sdkInfo;

@end

