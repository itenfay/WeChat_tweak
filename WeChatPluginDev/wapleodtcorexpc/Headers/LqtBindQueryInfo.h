//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BalanceInfo, ComonPromptInfo, NSMutableArray, NSString, TipsItem;

@interface LqtBindQueryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *array; // @dynamic array;
@property(retain, nonatomic) BalanceInfo *balanceInfo; // @dynamic balanceInfo;
@property(retain, nonatomic) TipsItem *balanceSecondLineTips; // @dynamic balanceSecondLineTips;
@property(retain, nonatomic) NSString *balanceWording; // @dynamic balanceWording;
@property(retain, nonatomic) NSString *defaultCardBindSerial; // @dynamic defaultCardBindSerial;
@property(nonatomic) int funcAfterWording; // @dynamic funcAfterWording;
@property(nonatomic) _Bool isHideBankCard; // @dynamic isHideBankCard;
@property(nonatomic) _Bool isReqAgainAfterDeal; // @dynamic isReqAgainAfterDeal;
@property(retain, nonatomic) NSString *lqFetchPreArriveTimeWording; // @dynamic lqFetchPreArriveTimeWording;
@property(nonatomic) unsigned int lqMaxAmountPerRedeem; // @dynamic lqMaxAmountPerRedeem;
@property(retain, nonatomic) ComonPromptInfo *purchaseFromLqWording; // @dynamic purchaseFromLqWording;
@property(retain, nonatomic) NSString *selectAccountPrompt; // @dynamic selectAccountPrompt;
@property(retain, nonatomic) NSString *selectAccountTitle; // @dynamic selectAccountTitle;

@end

