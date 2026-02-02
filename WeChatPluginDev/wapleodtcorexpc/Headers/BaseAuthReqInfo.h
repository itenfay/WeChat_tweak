//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t, WTLoginImgReqInfo, WxVerifyCodeReqInfo;

@interface BaseAuthReqInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int authReqFlag; // @dynamic authReqFlag;
@property(retain, nonatomic) NSString *authTicket; // @dynamic authTicket;
@property(retain, nonatomic) SKBuiltinBuffer_t *cliDbencryptInfo; // @dynamic cliDbencryptInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *cliDbencryptKey; // @dynamic cliDbencryptKey;
@property(retain, nonatomic) WTLoginImgReqInfo *wtloginImgReqInfo; // @dynamic wtloginImgReqInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *wtloginReqBuff; // @dynamic wtloginReqBuff;
@property(retain, nonatomic) WxVerifyCodeReqInfo *wxVerifyCodeReqInfo; // @dynamic wxVerifyCodeReqInfo;

@end

