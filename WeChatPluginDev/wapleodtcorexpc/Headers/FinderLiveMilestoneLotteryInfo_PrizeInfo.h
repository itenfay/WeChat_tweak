//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveMilestoneLotteryInfo_PrizeInfo_GiftInfo, FinderLiveMilestoneLotteryInfo_PrizeInfo_MiniAppInfo, FinderLiveMilestoneLotteryInfo_PrizeInfo_ProductJumpInfo, NSString;

@interface FinderLiveMilestoneLotteryInfo_PrizeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo_GiftInfo *giftInfo; // @dynamic giftInfo;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo_MiniAppInfo *miniAppInfo; // @dynamic miniAppInfo;
@property(nonatomic) unsigned int prizeType; // @dynamic prizeType;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo_ProductJumpInfo *productJumpInfo; // @dynamic productJumpInfo;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

