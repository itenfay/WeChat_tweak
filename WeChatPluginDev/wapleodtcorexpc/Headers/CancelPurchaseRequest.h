//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CancelPurchaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) NSString *currencyType; // @dynamic currencyType;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(nonatomic) unsigned int payTime; // @dynamic payTime;
@property(nonatomic) unsigned int payType; // @dynamic payType;
@property(retain, nonatomic) NSString *price; // @dynamic price;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) unsigned int verifyType; // @dynamic verifyType;

@end

