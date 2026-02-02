//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, PayWay;

@interface HoneyPayerDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *attentionMessage; // @dynamic attentionMessage;
@property(retain, nonatomic) NSString *cardNo; // @dynamic cardNo;
@property(retain, nonatomic) NSString *cardStateTitle; // @dynamic cardStateTitle;
@property(retain, nonatomic) NSString *cardTypeName; // @dynamic cardTypeName;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned long long creditLine; // @dynamic creditLine;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(nonatomic) _Bool isOpenUnifiedPay; // @dynamic isOpenUnifiedPay;
@property(nonatomic) unsigned int notifyFlag; // @dynamic notifyFlag;
@property(retain, nonatomic) PayWay *payWay; // @dynamic payWay;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) unsigned int unbindFlag; // @dynamic unbindFlag;
@property(nonatomic) unsigned int unbindTime; // @dynamic unbindTime;
@property(retain, nonatomic) NSString *userUsername; // @dynamic userUsername;

@end

