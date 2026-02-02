//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface WTLoginImgReqInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *imgCode; // @dynamic imgCode;
@property(retain, nonatomic) NSString *imgEncryptKey; // @dynamic imgEncryptKey;
@property(retain, nonatomic) NSString *imgSid; // @dynamic imgSid;
@property(retain, nonatomic) SKBuiltinBuffer_t *ksid; // @dynamic ksid;

@end

