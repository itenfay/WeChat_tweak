//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t, SKBuiltinString_t, SafeDeviceList;

@interface BindQQResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *a2Key; // @dynamic a2Key;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *imgBuf; // @dynamic imgBuf;
@property(retain, nonatomic) SKBuiltinString_t *imgEncryptKey; // @dynamic imgEncryptKey;
@property(retain, nonatomic) NSString *imgSid; // @dynamic imgSid;
@property(retain, nonatomic) SKBuiltinBuffer_t *ksid; // @dynamic ksid;
@property(retain, nonatomic) NSString *microBlogName; // @dynamic microBlogName;
@property(nonatomic) unsigned int privateMsgStatus; // @dynamic privateMsgStatus;
@property(nonatomic) unsigned int pushMailStatus; // @dynamic pushMailStatus;
@property(retain, nonatomic) NSString *qqmailSkey; // @dynamic qqmailSkey;
@property(nonatomic) unsigned int safeDevice; // @dynamic safeDevice;
@property(retain, nonatomic) SafeDeviceList *safeDeviceList; // @dynamic safeDeviceList;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) SKBuiltinBuffer_t *wtloginRspBuff; // @dynamic wtloginRspBuff;

@end

