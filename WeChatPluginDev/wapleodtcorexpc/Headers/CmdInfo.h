//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, PaymentSelectPageData, RetryExtraParam, RouteInfo;

@interface CmdInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *cmdData; // @dynamic cmdData;
@property(nonatomic) int cmdId; // @dynamic cmdId;
@property(nonatomic) unsigned int customCmdId; // @dynamic customCmdId;
@property(retain, nonatomic) PaymentSelectPageData *paymentPage; // @dynamic paymentPage;
@property(retain, nonatomic) RetryExtraParam *retryExtraParam; // @dynamic retryExtraParam;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;

@end

