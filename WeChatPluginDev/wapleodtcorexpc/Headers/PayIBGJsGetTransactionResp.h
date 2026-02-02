//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, PayIBGBizInfo, PayIBGTransaction;

@interface PayIBGJsGetTransactionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *activityInfo; // @dynamic activityInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) PayIBGBizInfo *bizInfo; // @dynamic bizInfo;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(nonatomic) int isUseNewPage; // @dynamic isUseNewPage;
@property(nonatomic) int isUseShowInfo; // @dynamic isUseShowInfo;
@property(retain, nonatomic) NSMutableArray *showInfo; // @dynamic showInfo;
@property(retain, nonatomic) PayIBGTransaction *transactionDetail; // @dynamic transactionDetail;

@end

