//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WXAPhoneInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool allowSendSms; // @dynamic allowSendSms;
@property(retain, nonatomic) NSString *cloudId; // @dynamic cloudId;
@property(retain, nonatomic) NSString *encryptedData; // @dynamic encryptedData;
@property(retain, nonatomic) NSString *iv; // @dynamic iv;
@property(retain, nonatomic) NSString *mobile; // @dynamic mobile;
@property(nonatomic) _Bool needAuth; // @dynamic needAuth;
@property(retain, nonatomic) NSString *showMobile; // @dynamic showMobile;

@end

