//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface CgiQrcodeSaveNotifyMchReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(nonatomic) unsigned int notifyType; // @dynamic notifyType;
@property(nonatomic) unsigned long long opTimestamp; // @dynamic opTimestamp;
@property(retain, nonatomic) NSString *payerDescPlaceholder; // @dynamic payerDescPlaceholder;
@property(nonatomic) _Bool payerDescRequired; // @dynamic payerDescRequired;
@property(retain, nonatomic) NSData *saveNotifyInfo; // @dynamic saveNotifyInfo;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

