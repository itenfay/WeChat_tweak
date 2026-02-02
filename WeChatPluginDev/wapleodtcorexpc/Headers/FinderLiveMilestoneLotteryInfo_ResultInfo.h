//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveMilestoneLotteryInfo_ResultInfo_CouponInfo, FinderLiveMilestoneLotteryInfo_ResultInfo_GiftInfo, FinderLiveMilestoneLotteryInfo_ResultInfo_RedPacketInfo, NSString;

@interface FinderLiveMilestoneLotteryInfo_ResultInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *correctChoiceStrId; // @dynamic correctChoiceStrId;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo_CouponInfo *couponInfo; // @dynamic couponInfo;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo_GiftInfo *giftInfo; // @dynamic giftInfo;
@property(retain, nonatomic) NSString *posterUrl; // @dynamic posterUrl;
@property(retain, nonatomic) NSString *redPacketUri; // @dynamic redPacketUri;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo_RedPacketInfo *redpacketInfo; // @dynamic redpacketInfo;
@property(retain, nonatomic) NSString *sponsorDescription; // @dynamic sponsorDescription;
@property(nonatomic) unsigned int supportVotingResult; // @dynamic supportVotingResult;
@property(nonatomic) unsigned int votingCorrect; // @dynamic votingCorrect;
@property(retain, nonatomic) NSString *votingDescription; // @dynamic votingDescription;

@end

