//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface CheckVerifyCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *cloudId; // @dynamic cloudId;
@property(retain, nonatomic) NSString *data; // @dynamic data;
@property(retain, nonatomic) NSString *encryptedData; // @dynamic encryptedData;
@property(retain, nonatomic) NSString *iv; // @dynamic iv;
@property(retain, nonatomic) NSString *showMobile; // @dynamic showMobile;
@property(nonatomic) int status; // @dynamic status;

@end

