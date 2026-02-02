//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface EcCustomerGetOrderListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int evaluationStatus; // @dynamic evaluationStatus;
@property(retain, nonatomic) NSString *lastIndex; // @dynamic lastIndex;
@property(retain, nonatomic) NSString *lastOrderId; // @dynamic lastOrderId;
@property(nonatomic) _Bool needEvaluationStatus; // @dynamic needEvaluationStatus;
@property(nonatomic) unsigned int pageSize; // @dynamic pageSize;
@property(nonatomic) unsigned int tabType; // @dynamic tabType;

@end

