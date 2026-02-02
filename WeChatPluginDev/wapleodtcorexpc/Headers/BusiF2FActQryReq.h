//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface BusiF2FActQryReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *actInfo; // @dynamic actInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *f2FId; // @dynamic f2FId;
@property(retain, nonatomic) NSString *payokChecksign; // @dynamic payokChecksign;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(nonatomic) unsigned int totalAmount; // @dynamic totalAmount;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

