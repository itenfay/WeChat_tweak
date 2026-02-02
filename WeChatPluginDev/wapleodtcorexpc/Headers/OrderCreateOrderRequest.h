//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EXTPKG_mmpayapplynfccardbo_DeviceInfo, NSString;

@interface OrderCreateOrderRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) long long applyAmount; // @dynamic applyAmount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_DeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSString *fpanId; // @dynamic fpanId;
@property(nonatomic) long long orderAmount; // @dynamic orderAmount;
@property(nonatomic) int orderType; // @dynamic orderType;

@end

