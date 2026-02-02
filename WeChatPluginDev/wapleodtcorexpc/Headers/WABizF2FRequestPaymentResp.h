//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface WABizF2FRequestPaymentResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *headImg; // @dynamic headImg;
@property(retain, nonatomic) NSString *okButtonWording; // @dynamic okButtonWording;
@property(retain, nonatomic) NSString *rcvrInfo; // @dynamic rcvrInfo;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned long long totalAmount; // @dynamic totalAmount;

@end

