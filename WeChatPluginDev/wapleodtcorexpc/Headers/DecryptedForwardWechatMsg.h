//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface DecryptedForwardWechatMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *climsgid; // @dynamic climsgid;
@property(retain, nonatomic) NSData *content; // @dynamic content;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(nonatomic) int retCode; // @dynamic retCode;

@end

