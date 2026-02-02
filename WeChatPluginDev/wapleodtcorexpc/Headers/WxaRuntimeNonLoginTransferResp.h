//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, TransferAction;

@class WXPBGeneratedMessage;

@interface WxaRuntimeNonLoginTransferResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *respData; // @dynamic respData;
@property(retain, nonatomic) TransferAction *transferAction; // @dynamic transferAction;

@end

