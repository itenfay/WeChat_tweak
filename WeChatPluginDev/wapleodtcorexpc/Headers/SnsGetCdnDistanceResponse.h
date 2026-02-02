//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData;

@class WXPBGeneratedMessage;

@interface SnsGetCdnDistanceResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cityId; // @dynamic cityId;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int provinceId; // @dynamic provinceId;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

