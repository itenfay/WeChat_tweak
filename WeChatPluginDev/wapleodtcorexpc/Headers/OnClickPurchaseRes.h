//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FaultControlInfo, LqtBindQueryInfo, LqtDialog, NSMutableArray, NSString;

@interface OnClickPurchaseRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool autoPullUpKeyboard; // @dynamic autoPullUpKeyboard;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bottomTipsWording; // @dynamic bottomTipsWording;
@property(retain, nonatomic) NSString *bottomWording; // @dynamic bottomWording;
@property(retain, nonatomic) NSString *daeAuthorizationPromptWording; // @dynamic daeAuthorizationPromptWording;
@property(retain, nonatomic) LqtDialog *dialog; // @dynamic dialog;
@property(retain, nonatomic) NSString *exceedingWording; // @dynamic exceedingWording;
@property(retain, nonatomic) FaultControlInfo *faultControlInfo; // @dynamic faultControlInfo;
@property(retain, nonatomic) NSMutableArray *hintBelowAmount; // @dynamic hintBelowAmount;
@property(retain, nonatomic) NSMutableArray *hintOfKeyboard; // @dynamic hintOfKeyboard;
@property(retain, nonatomic) NSMutableArray *interceptDialogs; // @dynamic interceptDialogs;
@property(nonatomic) _Bool isProtocolDefaultChecked; // @dynamic isProtocolDefaultChecked;
@property(nonatomic) _Bool isShowProtocol; // @dynamic isShowProtocol;
@property(retain, nonatomic) NSString *lqLimitReliefFirsttimeWording; // @dynamic lqLimitReliefFirsttimeWording;
@property(retain, nonatomic) LqtBindQueryInfo *lqtBindQueryInfo; // @dynamic lqtBindQueryInfo;
@property(retain, nonatomic) NSMutableArray *protocolList; // @dynamic protocolList;
@property(retain, nonatomic) NSString *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) unsigned int remainingBalance; // @dynamic remainingBalance;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *upgradeLinkWording; // @dynamic upgradeLinkWording;
@property(retain, nonatomic) NSString *upgradeUrl; // @dynamic upgradeUrl;

@end

