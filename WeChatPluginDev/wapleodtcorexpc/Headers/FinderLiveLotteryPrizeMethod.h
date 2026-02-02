//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveLotteryPrizeMethod_FreeGameTeamUp, FinderLiveLotteryPrizeMethod_LotteryGift, FinderLiveLotteryPrizeMethod_LotteryProduct;

@interface FinderLiveLotteryPrizeMethod : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod_FreeGameTeamUp *freeGameTeamup; // @dynamic freeGameTeamup;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod_LotteryGift *gift; // @dynamic gift;
@property(nonatomic) unsigned int prizeType; // @dynamic prizeType;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod_LotteryProduct *product; // @dynamic product;

@end

