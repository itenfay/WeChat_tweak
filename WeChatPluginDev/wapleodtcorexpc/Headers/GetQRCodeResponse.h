//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetQRCodeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *dominatorColor; // @dynamic dominatorColor;
@property(nonatomic) int dominatorColorSize; // @dynamic dominatorColorSize;
@property(retain, nonatomic) NSString *footerWording; // @dynamic footerWording;
@property(retain, nonatomic) SKBuiltinBuffer_t *qrcode; // @dynamic qrcode;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(retain, nonatomic) NSString *revokeQrcodeId; // @dynamic revokeQrcodeId;
@property(retain, nonatomic) NSString *revokeQrcodeWording; // @dynamic revokeQrcodeWording;
@property(nonatomic) unsigned int style; // @dynamic style;

@end

