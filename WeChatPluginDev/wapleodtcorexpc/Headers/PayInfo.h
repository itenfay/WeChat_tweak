//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long orderPayCreateTime; // @dynamic orderPayCreateTime;
@property(nonatomic) unsigned long long orderPayTime; // @dynamic orderPayTime;
@property(nonatomic) unsigned long long payAmount; // @dynamic payAmount;
@property(retain, nonatomic) NSString *payMethod; // @dynamic payMethod;
@property(nonatomic) unsigned int payType; // @dynamic payType;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

