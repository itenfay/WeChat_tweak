//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AuthenApplePayInfo_PaymentMethod, NSString;

@interface AuthenApplePayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *applePayPaymentData; // @dynamic applePayPaymentData;
@property(retain, nonatomic) AuthenApplePayInfo_PaymentMethod *applePayPaymentMethod; // @dynamic applePayPaymentMethod;
@property(retain, nonatomic) NSString *applePayTransactionId; // @dynamic applePayTransactionId;

@end

