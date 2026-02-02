//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSString;

@class WXPBGeneratedMessage;

@interface GetOpenIMChatRoomQRCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *footerWording; // @dynamic footerWording;
@property(retain, nonatomic) NSData *qrcode; // @dynamic qrcode;

@end

