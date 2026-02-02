//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface GetAvailableCardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *buff; // @dynamic buff;
@property(retain, nonatomic) NSString *cardSign; // @dynamic cardSign;
@property(retain, nonatomic) NSString *cardTpId; // @dynamic cardTpId;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *nonceStr; // @dynamic nonceStr;
@property(nonatomic) unsigned int onlyInvoice; // @dynamic onlyInvoice;
@property(nonatomic) unsigned int shopId; // @dynamic shopId;
@property(retain, nonatomic) NSString *signType; // @dynamic signType;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;

@end

