//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface ShakeReportResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int imgId; // @dynamic imgId;
@property(nonatomic) unsigned int imgTotoalLen; // @dynamic imgTotoalLen;
@property(nonatomic) int ret; // @dynamic ret;

@end

