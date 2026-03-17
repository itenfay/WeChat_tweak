//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface SubmitPayProductBuyInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appSource; // @dynamic appSource;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int outerErrCode; // @dynamic outerErrCode;
@property(retain, nonatomic) NSString *outerErrMsg; // @dynamic outerErrMsg;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;

@end

