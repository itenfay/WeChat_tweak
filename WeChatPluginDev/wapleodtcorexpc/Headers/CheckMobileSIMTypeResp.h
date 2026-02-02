//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse;

@class WXPBGeneratedMessage;

@interface CheckMobileSIMTypeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int businessFlag; // @dynamic businessFlag;
@property(nonatomic) unsigned int cacheExpiredTime; // @dynamic cacheExpiredTime;
@property(nonatomic) unsigned int productType; // @dynamic productType;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

