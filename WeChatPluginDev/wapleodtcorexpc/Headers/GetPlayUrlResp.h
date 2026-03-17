//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface GetPlayUrlResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int block; // @dynamic block;
@property(retain, nonatomic) NSString *errorWording; // @dynamic errorWording;
@property(retain, nonatomic) NSString *playurl; // @dynamic playurl;

@end

