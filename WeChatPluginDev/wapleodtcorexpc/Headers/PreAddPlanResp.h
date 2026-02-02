//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, PreAddPlanResp_IncomeTipsItem, PreAddPlanResp_ProtocolItem;

@interface PreAddPlanResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *array; // @dynamic array;
@property(retain, nonatomic) NSString *balanceWarningWording; // @dynamic balanceWarningWording;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *chooseAmountTitle; // @dynamic chooseAmountTitle;
@property(retain, nonatomic) NSString *chooseTransTimeTitle; // @dynamic chooseTransTimeTitle;
@property(retain, nonatomic) NSString *dayQuota3Tips; // @dynamic dayQuota3Tips;
@property(nonatomic) unsigned long long defaultAmount; // @dynamic defaultAmount;
@property(retain, nonatomic) NSString *defaultCardBindSerial; // @dynamic defaultCardBindSerial;
@property(nonatomic) unsigned int defaultTransDay; // @dynamic defaultTransDay;
@property(nonatomic) _Bool isHideBankCard; // @dynamic isHideBankCard;
@property(retain, nonatomic) NSString *marketingWording; // @dynamic marketingWording;
@property(retain, nonatomic) NSString *productDesc; // @dynamic productDesc;
@property(retain, nonatomic) PreAddPlanResp_ProtocolItem *protocol; // @dynamic protocol;
@property(retain, nonatomic) NSMutableArray *recommendedAmtList; // @dynamic recommendedAmtList;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) PreAddPlanResp_IncomeTipsItem *tips; // @dynamic tips;
@property(nonatomic) unsigned int usrPlanId; // @dynamic usrPlanId;

@end

