//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveLotteryInfo, FinderLiveLotteryWinnerInfo, MilestoneLotteryCouponRecordInfo, MilestoneLotteryInfo, MilestoneLotteryRedpacketInfo, NSData, NSString;

@interface FinderLiveGetLotteryRecordResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) MilestoneLotteryCouponRecordInfo *couponRecordInfo; // @dynamic couponRecordInfo;
@property(retain, nonatomic) NSString *expiredWording; // @dynamic expiredWording;
@property(nonatomic) unsigned int isUrlExpired; // @dynamic isUrlExpired;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) FinderLiveLotteryInfo *lotteryInfo; // @dynamic lotteryInfo;
@property(nonatomic) unsigned int lotteryType; // @dynamic lotteryType;
@property(retain, nonatomic) MilestoneLotteryInfo *milestoneLotteryInfo; // @dynamic milestoneLotteryInfo;
@property(nonatomic) unsigned int personalmsgCloseSwitch; // @dynamic personalmsgCloseSwitch;
@property(retain, nonatomic) NSString *recordUrl; // @dynamic recordUrl;
@property(retain, nonatomic) MilestoneLotteryRedpacketInfo *redpacketRecordInfo; // @dynamic redpacketRecordInfo;
@property(retain, nonatomic) FinderLiveLotteryWinnerInfo *winnerInfo; // @dynamic winnerInfo;

@end

