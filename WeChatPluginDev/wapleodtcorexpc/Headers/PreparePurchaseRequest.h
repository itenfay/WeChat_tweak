//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PreparePurchaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *currencyType; // @dynamic currencyType;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int payType; // @dynamic payType;
@property(retain, nonatomic) NSString *price; // @dynamic price;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) unsigned int quantity; // @dynamic quantity;

@end

