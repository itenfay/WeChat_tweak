//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface TenPayRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cgiCmd; // @dynamic cgiCmd;
@property(retain, nonatomic) NSString *crtNo; // @dynamic crtNo;
@property(nonatomic) unsigned int outPutType; // @dynamic outPutType;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqText; // @dynamic reqText;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqTextWx; // @dynamic reqTextWx;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;

@end

