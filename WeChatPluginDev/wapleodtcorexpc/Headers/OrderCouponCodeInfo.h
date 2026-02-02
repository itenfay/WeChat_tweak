//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CouponCodeList, NSString, OfflineStoreInfoList, ValidityPeriodInfo;

@interface OrderCouponCodeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *couponcodeId; // @dynamic couponcodeId;
@property(retain, nonatomic) CouponCodeList *couponcodes; // @dynamic couponcodes;
@property(retain, nonatomic) OfflineStoreInfoList *offlineStoreInfos; // @dynamic offlineStoreInfos;
@property(nonatomic) unsigned int qrcodeExpireTime; // @dynamic qrcodeExpireTime;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) ValidityPeriodInfo *validityPeriodInfo; // @dynamic validityPeriodInfo;

@end

