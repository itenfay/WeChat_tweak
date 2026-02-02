//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface OnClickPurchaseReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindSerial; // @dynamic bindSerial;
@property(nonatomic) unsigned int entranceType; // @dynamic entranceType;
@property(retain, nonatomic) NSString *newBindSerial; // @dynamic newBindSerial;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

