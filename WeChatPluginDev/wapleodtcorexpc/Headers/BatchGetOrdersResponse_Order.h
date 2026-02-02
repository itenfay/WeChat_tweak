//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BatchGetOrdersResponse_ReceiveOrder, BatchGetOrdersResponse_SendOrder;

@interface BatchGetOrdersResponse_Order : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BatchGetOrdersResponse_ReceiveOrder *receiveOrder; // @dynamic receiveOrder;
@property(retain, nonatomic) BatchGetOrdersResponse_SendOrder *sendOrder; // @dynamic sendOrder;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

