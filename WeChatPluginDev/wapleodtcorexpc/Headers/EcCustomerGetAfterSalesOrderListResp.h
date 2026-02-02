//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface EcCustomerGetAfterSalesOrderListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *afterSalesOrderDetailJsonList; // @dynamic afterSalesOrderDetailJsonList;
@property(retain, nonatomic) NSMutableArray *afterSalesOrderList; // @dynamic afterSalesOrderList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;

@end

