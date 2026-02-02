//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface TransferPhonePlaceOrderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int delayCode; // @dynamic delayCode;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *getRcvrExt; // @dynamic getRcvrExt;
@property(retain, nonatomic) NSString *rcvrOpenid; // @dynamic rcvrOpenid;
@property(retain, nonatomic) NSString *rcvrToken; // @dynamic rcvrToken;
@property(retain, nonatomic) NSString *realNameToken; // @dynamic realNameToken;
@property(retain, nonatomic) NSString *replaceorderToken; // @dynamic replaceorderToken;
@property(retain, nonatomic) NSString *timestampMs; // @dynamic timestampMs;

@end

