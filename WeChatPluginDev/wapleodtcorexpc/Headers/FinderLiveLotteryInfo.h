//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveLotteryAttendMethod, FinderLiveLotteryClaimMethod, FinderLiveLotteryInfo_ParticipantInfo, FinderLiveLotteryParticipability, FinderLiveLotteryPrizeMethod, FinderLiveLotteryWinnerExtInfo, NSString;

@interface FinderLiveLotteryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int beginTime; // @dynamic beginTime;
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @dynamic claimMethod;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int lotteryStatus; // @dynamic lotteryStatus;
@property(retain, nonatomic) FinderLiveLotteryAttendMethod *method; // @dynamic method;
@property(retain, nonatomic) FinderLiveLotteryParticipability *participability; // @dynamic participability;
@property(retain, nonatomic) FinderLiveLotteryInfo_ParticipantInfo *participantInfo; // @dynamic participantInfo;
@property(nonatomic) unsigned int participateCount; // @dynamic participateCount;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod; // @dynamic prizeMethod;
@property(nonatomic) unsigned int realWinnerCnt; // @dynamic realWinnerCnt;
@property(nonatomic) unsigned int remainTime; // @dynamic remainTime;
@property(nonatomic) unsigned int winnerCnt; // @dynamic winnerCnt;
@property(retain, nonatomic) FinderLiveLotteryWinnerExtInfo *winnerInfo; // @dynamic winnerInfo;

@end

