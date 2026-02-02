//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ComonPromptInfo, FaultControlInfo, LqtBindQueryInfo, LqtDialog, NSMutableArray, NSString, PopUpWithHalfDialog, PopUpsItem;

@interface OnClickRedeemRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int balance; // @dynamic balance;
@property(nonatomic) unsigned int bankBalance; // @dynamic bankBalance;
@property(retain, nonatomic) NSMutableArray *bankRedeemTypeInfo; // @dynamic bankRedeemTypeInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) LqtDialog *dialog; // @dynamic dialog;
@property(nonatomic) unsigned int fastRedeemFeeLimit; // @dynamic fastRedeemFeeLimit;
@property(retain, nonatomic) FaultControlInfo *faultControlInfo; // @dynamic faultControlInfo;
@property(retain, nonatomic) NSMutableArray *hintBelowAmount; // @dynamic hintBelowAmount;
@property(retain, nonatomic) NSMutableArray *informationLst; // @dynamic informationLst;
@property(nonatomic) _Bool isShowPopups; // @dynamic isShowPopups;
@property(nonatomic) unsigned int lqBalance; // @dynamic lqBalance;
@property(retain, nonatomic) NSMutableArray *lqRedeemTypeList; // @dynamic lqRedeemTypeList;
@property(retain, nonatomic) LqtBindQueryInfo *lqtBindQueryInfo; // @dynamic lqtBindQueryInfo;
@property(retain, nonatomic) PopUpsItem *popupsItem; // @dynamic popupsItem;
@property(retain, nonatomic) NSString *realNameInfo; // @dynamic realNameInfo;
@property(retain, nonatomic) PopUpWithHalfDialog *redeemToBankExceedDetail; // @dynamic redeemToBankExceedDetail;
@property(retain, nonatomic) ComonPromptInfo *redeemToBankExceedSecondLineMsg; // @dynamic redeemToBankExceedSecondLineMsg;
@property(retain, nonatomic) NSString *redeemToBankExceedWording; // @dynamic redeemToBankExceedWording;
@property(retain, nonatomic) NSString *redeemToBankWording; // @dynamic redeemToBankWording;
@property(retain, nonatomic) PopUpWithHalfDialog *redeemToLqExceedDetail; // @dynamic redeemToLqExceedDetail;
@property(retain, nonatomic) PopUpWithHalfDialog *redeemToLqExceedGuide; // @dynamic redeemToLqExceedGuide;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

