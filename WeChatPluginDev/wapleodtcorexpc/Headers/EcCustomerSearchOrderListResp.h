//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface EcCustomerSearchOrderListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSMutableArray *orderDetailJsonList; // @dynamic orderDetailJsonList;
@property(retain, nonatomic) NSMutableArray *orderList; // @dynamic orderList;

@end

