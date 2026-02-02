//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PurchaseFundReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) NSString *bankSerial; // @dynamic bankSerial;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int entranceType; // @dynamic entranceType;
@property(retain, nonatomic) NSString *fundCode; // @dynamic fundCode;
@property(retain, nonatomic) NSString *operateId; // @dynamic operateId;
@property(nonatomic) unsigned int purchaseFee; // @dynamic purchaseFee;
@property(retain, nonatomic) NSString *spid; // @dynamic spid;
@property(nonatomic) unsigned int supportCrossPlatformCashier; // @dynamic supportCrossPlatformCashier;
@property(nonatomic) unsigned int supportJointCashier; // @dynamic supportJointCashier;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

