//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WxVerifyCodeReqInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *verifyContent; // @dynamic verifyContent;
@property(retain, nonatomic) NSString *verifySignature; // @dynamic verifySignature;

@end

