//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveLotteryAttendMethod, FinderLiveLotteryClaimMethod, FinderLiveLotteryPrizeMethod, NSString;

@interface FinderLiveLotteryMethodItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @dynamic claimMethod;
@property(nonatomic) unsigned int itemId; // @dynamic itemId;
@property(retain, nonatomic) NSString *lotteryDescription; // @dynamic lotteryDescription;
@property(nonatomic) unsigned int lotteryDuration; // @dynamic lotteryDuration;
@property(nonatomic) unsigned int lotteryWinnerCnt; // @dynamic lotteryWinnerCnt;
@property(retain, nonatomic) FinderLiveLotteryAttendMethod *method; // @dynamic method;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod; // @dynamic prizeMethod;
@property(nonatomic) unsigned long long settingFlag; // @dynamic settingFlag;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *statusWording; // @dynamic statusWording;

@end

