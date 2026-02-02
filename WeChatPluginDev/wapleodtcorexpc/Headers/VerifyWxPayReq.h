//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface VerifyWxPayReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *noncestr; // @dynamic noncestr;
@property(retain, nonatomic) NSString *packageStr; // @dynamic packageStr;
@property(retain, nonatomic) NSString *paySign; // @dynamic paySign;
@property(retain, nonatomic) NSString *signType; // @dynamic signType;
@property(retain, nonatomic) NSString *timestamp; // @dynamic timestamp;

@end

