//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveMilestoneLotteryInfo_AttendInfo, FinderLiveMilestoneLotteryInfo_BaseInfo, FinderLiveMilestoneLotteryInfo_ParticipantInfo, FinderLiveMilestoneLotteryInfo_PrizeInfo, FinderLiveMilestoneLotteryInfo_ResultInfo, NSString;

@interface FinderLiveMilestoneLotteryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_AttendInfo *attendInfo; // @dynamic attendInfo;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_BaseInfo *baseInfo; // @dynamic baseInfo;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_ParticipantInfo *participantInfo; // @dynamic participantInfo;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo *prizeInfo; // @dynamic prizeInfo;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_ResultInfo *resultInfo; // @dynamic resultInfo;

@end

