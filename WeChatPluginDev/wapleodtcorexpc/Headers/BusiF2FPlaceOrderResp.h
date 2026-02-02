//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AmountRemindPage, AmountRemindWin, BaseResponse, BusiF2FFaultConfig, CheckRecvNameWin, NSData, NSString, ShowMessage, TokeMess;

@interface BusiF2FPlaceOrderResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AmountRemindPage *amountRemindPage; // @dynamic amountRemindPage;
@property(retain, nonatomic) AmountRemindWin *amountRemindWin; // @dynamic amountRemindWin;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int canUseFingerprint; // @dynamic canUseFingerprint;
@property(retain, nonatomic) CheckRecvNameWin *checkRecvNameWin; // @dynamic checkRecvNameWin;
@property(nonatomic) unsigned int dynamicCodeAmount; // @dynamic dynamicCodeAmount;
@property(retain, nonatomic) NSString *dynamicCodeSpamWording; // @dynamic dynamicCodeSpamWording;
@property(retain, nonatomic) NSString *f2FId; // @dynamic f2FId;
@property(retain, nonatomic) BusiF2FFaultConfig *faultConfig; // @dynamic faultConfig;
@property(retain, nonatomic) NSString *getDynamicCodeExtend; // @dynamic getDynamicCodeExtend;
@property(nonatomic) unsigned int getDynamicCodeFlag; // @dynamic getDynamicCodeFlag;
@property(retain, nonatomic) NSString *getDynamicCodeSign; // @dynamic getDynamicCodeSign;
@property(retain, nonatomic) NSString *interruptDesc; // @dynamic interruptDesc;
@property(nonatomic) _Bool jumpThirdpartyCashier; // @dynamic jumpThirdpartyCashier;
@property(nonatomic) int needChangeAuthKey; // @dynamic needChangeAuthKey;
@property(retain, nonatomic) NSString *paycheckExtend; // @dynamic paycheckExtend;
@property(nonatomic) unsigned int payerNeedAuthFlag; // @dynamic payerNeedAuthFlag;
@property(retain, nonatomic) NSString *payokChecksign; // @dynamic payokChecksign;
@property(nonatomic) unsigned int reGetfavor; // @dynamic reGetfavor;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(nonatomic) unsigned int returnToMainPage; // @dynamic returnToMainPage;
@property(retain, nonatomic) NSString *showPayingWording; // @dynamic showPayingWording;
@property(retain, nonatomic) ShowMessage *showmessage; // @dynamic showmessage;
@property(retain, nonatomic) NSString *sucPageExtend; // @dynamic sucPageExtend;
@property(retain, nonatomic) NSString *thirdpartyCashierPackageBase64; // @dynamic thirdpartyCashierPackageBase64;
@property(retain, nonatomic) TokeMess *tockMess; // @dynamic tockMess;
@property(retain, nonatomic) NSData *touchChallenge; // @dynamic touchChallenge;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;
@property(retain, nonatomic) NSString *unlockFavorExtend; // @dynamic unlockFavorExtend;
@property(retain, nonatomic) NSString *zeroPayExtend; // @dynamic zeroPayExtend;
@property(nonatomic) unsigned int zeroPayFlag; // @dynamic zeroPayFlag;
@property(nonatomic) unsigned int zeroTryIntervalMs; // @dynamic zeroTryIntervalMs;
@property(nonatomic) unsigned int zeroTryTime; // @dynamic zeroTryTime;

@end

