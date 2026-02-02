//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ConsultInfoList, MediaList, NSMutableArray, NSString, ProductHandleInfo, SpuSnapshot;

@interface AfterSalesOrder : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *afterSaleOrderId; // @dynamic afterSaleOrderId;
@property(retain, nonatomic) SpuSnapshot *afterSaleProductInfo; // @dynamic afterSaleProductInfo;
@property(retain, nonatomic) NSString *afterSaleReason; // @dynamic afterSaleReason;
@property(nonatomic) unsigned int afterSaleReasonType; // @dynamic afterSaleReasonType;
@property(nonatomic) unsigned int afterSaleState; // @dynamic afterSaleState;
@property(nonatomic) unsigned long long applyTime; // @dynamic applyTime;
@property(retain, nonatomic) ConsultInfoList *consultList; // @dynamic consultList;
@property(retain, nonatomic) MediaList *mediaList; // @dynamic mediaList;
@property(retain, nonatomic) ProductHandleInfo *productHandleInfo; // @dynamic productHandleInfo;
@property(retain, nonatomic) NSString *referOrderId; // @dynamic referOrderId;
@property(retain, nonatomic) NSMutableArray *refundInfo; // @dynamic refundInfo;
@property(nonatomic) unsigned long long updateTime; // @dynamic updateTime;

@end

